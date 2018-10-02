/* @license
 * This file is part of the Game Closure SDK.
 *
 * The Game Closure SDK is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.

 * The Game Closure SDK is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
 * GNU General Public License for more details.

 * You should have received a copy of the GNU General Public License
 * along with the Game Closure SDK.  If not, see <http://www.gnu.org/licenses/>.
 */
#include <assert.h>
#include <stdlib.h>
#include <sys/time.h>

#include "core/util/detect.h"
#include "core/timestep/timestep_animate.h"

#include "core/config.h"
#include "core/tealeaf_context.h"
#include "core/tealeaf_canvas.h"
#include "core/url_loader.h"
#include "core/core.h"
#include "core/core_js.h"
#include "core/timer.h"

#include "js/js.h"
#include "js/js_native.h"
#include "js/js_navigator.h"
#include "js/js_socket.h"
#include "js/js_timer.h"
#include "js/js_location.h"
#include "js/js_string_cache.h"


#include "platform/platform.h"

#if defined(REMOTE_DEBUG)
#include "src/debug/debug.h"
#endif

#if defined(ENABLE_PROFILER)
#include "lib/v8-profiler/profiler.h"
#endif


#include "include/v8.h"
using namespace v8;

static Persistent<Context> m_context;
static Isolate *m_isolate = NULL;

// JS Ready flag: Indicates that the JavaScript engine is running (see core/core_js.h)
bool js_ready = false;

CEXPORT bool js_is_ready();

#ifdef DEBUG
static int calc_elapsed(struct timeval *mark) {
    struct timeval now;
    gettimeofday(&now, NULL);
    return (now.tv_sec - mark->tv_sec) * 1000 + (now.tv_usec - mark->tv_usec) / 1000;
}
#define ELAPSED(var) calc_elapsed(&var)
#endif
#define DECL_BENCH(var) struct timeval var
#define MARK(var) gettimeofday(&var, NULL)

/*timing stuff*/
static DECL_BENCH(et);

CEXPORT void eval_str(const char *str) {
    Locker l(m_isolate);
    Isolate *isolate = Isolate::GetCurrent();
    HandleScope handle_scope(isolate);;
    if (m_context.IsEmpty()) {
        LOG("{js} ERROR: Could not evaluate. JavaScript engine is not running yet");
        return;
    }
    Handle<Context> context = getContext();
    Context::Scope context_scope(context);
    Handle<String> source = String::NewFromUtf8(m_isolate, str);
    Handle<String> file_name = Local<String>::New(m_isolate, STRING_CACHE_none.Get(isolate));
    ExecuteString(source, file_name, true);
}


/*************************************************
 * native js functions
 ************************************************/

Persistent<Function> *tickFunction = NULL;


void timer_start(const v8::FunctionCallbackInfo<v8::Value> &args) {
    Isolate *isolate = Isolate::GetCurrent();
    HandleScope handleScope(isolate);
    Handle<Context> context = getContext();
    LOGFN("setTick");
    Context::Scope context_scope(context);

    // Old block
    if (tickFunction == NULL) {
        // tickFunction = (Persistent<Function>*)calloc(1, sizeof(Persistent<Function>)); // this needs to be tested still
        tickFunction = new Persistent<Function>();
    }

    // Updated at Aug 28 2018
    if (args[0]->IsFunction()) {
        Local<v8::Function> function = Local<Function>::Cast(args[0]);
        //Handle<Function> fun = Handle<Function>::Cast(args[0]->ToObject());
        tickFunction->Reset(isolate, function);
    }

    LOGFN("end setTick");
    MARK(et);
    //return Undefined(isolate);
}

//Handle<Value> getGlobalObject(const Arguments& args) {
Handle<Value> getGlobalObject(const v8::FunctionCallbackInfo<v8::Value> &args) {
    LOG("get global obj");
    Handle<Context> context = getContext();
    Handle<Value> globalObject = context->Global();
    LOGFN("end get global obj");
    return globalObject;
}

Local<Context> getContext() {
    return m_context.Get(m_isolate);
}

Isolate *getIsolate() {
    return m_isolate;
}

const char* ToCString(const String::Utf8Value& value) {
    return *value ? *value : "<string conversion failed>";
}

// Executes a string within the current v8 context.
Handle<Value> ExecuteString(v8::Handle<v8::String> source, v8::Handle<v8::Value> name, bool report_exceptions) {
    v8::Isolate *isolate = Isolate::GetCurrent();
    EscapableHandleScope handle_scope(isolate);;
    v8::TryCatch try_catch(m_isolate);
    v8::Local<v8::Script> script = v8::Script::Compile(getContext(),source).ToLocalChecked(); //, name->ToString()
    if (script.IsEmpty()) {
        // Print errors that happened during compilation.
        if (report_exceptions)
            ReportException(&try_catch);
        return Undefined(m_isolate);
    } else {
        v8::Local<v8::Value> result = script->Run(getContext()).ToLocalChecked();
        if (result.IsEmpty()) {
            assert(try_catch.HasCaught());
            // Print errors that happened during execution.
            if (report_exceptions)
                ReportException(&try_catch);
            return Undefined(m_isolate);
        } else {
            assert(!try_catch.HasCaught());
            return handle_scope.Escape(result);
        }
    }
}

static inline void log_error(const char *message) {
    if(!js_is_ready()) {
        return;
    }
    Handle<Context> context = getContext();
    Handle<Object> global = context->Global();
    bool logged = false;
    if (!global.IsEmpty()) {
        // original: Handle<Object> native = Handle<Object>::Cast(global->Get(STRING_CACHE_NATIVE));
        Handle<Object> native = (global->Get(STRING_CACHE_NATIVE.Get(m_isolate))->ToObject(context)).ToLocalChecked();
        if (!native.IsEmpty() && native->IsObject()) {
            Handle<Function> log = Handle<Function>::Cast(native->Get(STRING_CACHE___log.Get(m_isolate)));
            if (!log.IsEmpty() && log->IsFunction()) {
                Handle<Value> args[] = { STRING_CACHE_ERROR.Get(m_isolate), String::NewFromUtf8(m_isolate,message) };
                Handle<Value> ret = log->Call(global, 2, args);
                if (!ret.IsEmpty()) {
                    logged = true;
                }
            }
        }
    }
    if (!logged) {
        LOG("%s", message);
    }
}

static inline void window_on_error(const char *msg, const char *url, int line_number) {
    Handle<Context> context = getContext();
    Handle<Object> global = context->Global();
    if (!global.IsEmpty()) {
        //Handle<Function> on_error = Handle<Function>::Cast(global->Get(STRING_CACHE_onerror));
        Handle<Function> on_error =  Local<Function>::Cast(global->Get(STRING_CACHE_onerror.Get(m_isolate)));
        if (!on_error.IsEmpty() && on_error->IsFunction()) {
            Handle<Value> args[] = { String::NewFromUtf8(m_isolate,msg), String::NewFromUtf8(m_isolate, url), Number::New(m_isolate, line_number) };
            on_error->Call(global, 3, args);
        }
    }
}

static void remote_log_error(const char *message, const char *url, int line_number) {
    native_shim *shim = get_native_shim();
    JNIEnv *env = shim->env;
    const char *sig = "(Ljava/lang/String;Ljava/lang/String;I)V";
    jmethodID method = env->GetMethodID(shim->type, "logJavascriptError", sig);
    jstring jmessage = env->NewStringUTF(message);
    jstring jurl = env->NewStringUTF(url);
    jint jline_number = (jint)line_number;
    env->CallVoidMethod(shim->instance, method, jmessage, jurl, jline_number);
    env->DeleteLocalRef(jmessage);
    env->DeleteLocalRef(jurl);
}


//// JS Object Wrapper

void js_object_wrapper_init(PERSISTENT_JS_OBJECT_WRAPPER *obj) {
    obj->Reset();
}

void js_object_wrapper_root(PERSISTENT_JS_OBJECT_WRAPPER *obj, JS_OBJECT_WRAPPER target) {
    js_object_wrapper_delete(obj);
    obj->Reset(Isolate::GetCurrent(), target);
}

void js_object_wrapper_delete(PERSISTENT_JS_OBJECT_WRAPPER *obj) {
    if (!obj->IsEmpty()) {
        obj->Reset();
    }
}


#ifndef RELEASE
DECL_BENCH(gc_bench);
static const char *m_gc_type = "Unknown";
#endif

void gc_start(Isolate* isolate, GCType type, GCCallbackFlags flags) {
#ifndef RELEASE
MARK(gc_bench);

static const char* types[] = {
        "Unknown",
        "Scavenge",
        "Mark/Sweep/Compact",
        "All"
};

m_gc_type = types[type];
#endif
}

void gc_end(Isolate* isolate, GCType type, GCCallbackFlags flags) {
#ifndef RELEASE
LOGDEBUG("{jsdebug} GC took %dms (%s)", ELAPSED(gc_bench), m_gc_type);
#endif
}

void ReportException(v8::TryCatch* try_catch) {
    LOG("{js} Reporting exception");

    v8::Isolate *isolate = Isolate::GetCurrent();     HandleScope handle_scope(isolate);;
    v8::String::Utf8Value exception(isolate, try_catch->Exception());
    v8::Handle<v8::Message> message = try_catch->Message();
    if (message.IsEmpty()) {
        LOG("{js} WARNING: No exception message");

        // V8 didn't provide any extra information about this error; just
        const char* exception_string = ToCString(exception);
        // print the exception.
        log_error(exception_string);
        window_on_error(exception_string, "", -1);
        remote_log_error(exception_string, "", -1);
    } else {
        v8::String::Utf8Value filename(isolate, message->GetScriptResourceName());
        const char* filename_string = ToCString(filename);
        int linenum = message->GetLineNumber(getContext()).ToChecked();
        char buf[512];
        snprintf(buf, sizeof(buf), "%s line: %i", filename_string, linenum);
        log_error(buf);
        v8::String::Utf8Value sourceline(isolate, message->GetSourceLine(getContext()).ToLocalChecked());
        const char* sourceline_string = ToCString(sourceline);
        log_error(sourceline_string);

        v8::String::Utf8Value stack_trace(isolate, try_catch->StackTrace(getContext()).ToLocalChecked());
        const char* stack_trace_string = "no line";
        if (stack_trace.length() > 0) {
            stack_trace_string = ToCString(stack_trace);
            log_error(stack_trace_string);
        }
        window_on_error(stack_trace_string, filename_string, linenum);
        remote_log_error(stack_trace_string, filename_string, linenum);
    }
}

Handle<Function> get_on_resize() {
    Handle<Object> global = getContext()->Global();
    if(!global.IsEmpty()) {
        Handle<Object> native = Handle<Object>::Cast(global->Get(STRING_CACHE_NATIVE.Get(m_isolate)));
        if(!native.IsEmpty()) {
            Handle<Object> screen = Handle<Object>::Cast(native->Get(STRING_CACHE_screen.Get(m_isolate)));
            if(!screen.IsEmpty()) {
                Handle<Function> on_resize = Handle<Function>::Cast(screen->Get(STRING_CACHE_onResize.Get(m_isolate)));
                return on_resize;
            }
        }
    }
    return Handle<Function>();
}

CEXPORT void js_tick(long dt) {
    Locker l(m_isolate);

    if (!js_ready) {
        LOG("{js} WARNING: Tick attempted before JavaScript engine was running");
        return;
    }

    Isolate *isolate = Isolate::GetCurrent();
    HandleScope handle_scope(isolate);
    Handle<Context> context = getContext();
    Context::Scope context_scope(context);
    TryCatch try_catch(isolate);

    if (dt > 1000) {
        dt = 1;
    }

    Handle<Object> global = context->Global();
    tealeaf_canvas *canvas = tealeaf_canvas_get();
    if (canvas->should_resize) {
        canvas->should_resize = false;
        Handle<Function> resize = get_on_resize();
        if (!resize.IsEmpty() && resize->IsFunction()) {
            int screen_width = config_get_screen_width();
            int screen_height = config_get_screen_height();
            Handle<Value> args[] = { Integer::New(isolate, screen_width), Integer::New(isolate, screen_height) };
            Handle<Value> ret = resize->Call(global, 2, args);
            if (ret.IsEmpty()) {
                ReportException(&try_catch);
            }
        }
    }

    if (tickFunction == NULL) {
        return;
    }

    view_animation_tick_animations(dt);
    Handle<Function> func = tickFunction->Get(isolate);
    if (func->IsFunction()) {
        Handle<Value> args[] = { Number::New(isolate, dt) };
        Handle<Value> ret = func->Call(global, 1, args);
        if (ret.IsEmpty()) {
            ReportException(&try_catch);
        }
    } else {
        LOG("{js} ERROR: Invalid tick callback");
    }
}

CEXPORT bool js_is_ready() {
    return js_ready;
}

#if defined(REMOTE_DEBUG)
static void DispatchDebugMessages() {
    // Locker should already be held here

    Locker l(m_isolate);
    Isolate *isolate = Isolate::GetCurrent();     HandleScope handle_scope(isolate);;
    Context::Scope context_scope(getContext());
    TryCatch try_catch(isolate);

     // Todo 31.09.18 add v8::Debug, uncomment below line
    //v8::debug::ProcessDebugMessages();
}
#endif // REMOTE_DEBUG

// Call this from the main thread of javascript execution, so that the isolate
// is tied to the correct thread id.  This is important for profiling because
// the V8 profiler internally will send SIGPROF to this thread.
bool js_init_isolate() {
    DECL_BENCH(t);
    MARK(t);

    V8::Initialize();

    m_isolate = Isolate::GetCurrent();

    if (m_isolate) {
        LOG("{js} Initial setup took %ims", ELAPSED(t));
        return true;
    } else {
        LOG("{js} ERROR: Unable to get current isolate");
        return false;
    }
}

bool init_js(const char *uri, const char *native_hash) {
    DECL_BENCH(t);
    v8::Locker l(m_isolate);
    Isolate *isolate = Isolate::GetCurrent();
    HandleScope handleScope(isolate);
    // verify m_isolate is correct than Isolate::GetCurrent();
    m_isolate->AddGCPrologueCallback(gc_start, GCType::kGCTypeAll);
    m_isolate->AddGCEpilogueCallback(gc_end, GCType::kGCTypeAll);
    MARK(t);
    Local<ObjectTemplate> global = ObjectTemplate::New(isolate);

    js_string_cache_init(m_isolate);

    // set the global object's functions *before* Context::New creates an instance, otherwise we just don't get them
    global->Set(STRING_CACHE_setTimeout.Get(isolate), FunctionTemplate::New(isolate, defSetTimeout));
    global->Set(STRING_CACHE_clearTimeout.Get(isolate), FunctionTemplate::New(isolate, defClearTimeout));
    global->Set(STRING_CACHE_setInterval.Get(isolate), FunctionTemplate::New(isolate, defSetInterval));
    global->Set(STRING_CACHE_clearInterval.Get(isolate), FunctionTemplate::New(isolate, defClearInterval));
    global->Set(STRING_CACHE_setLocation.Get(isolate), FunctionTemplate::New(isolate, native_set_location));

    m_context.Reset(isolate, Context::New(isolate, NULL, global));

    if (m_context.IsEmpty()) {
        LOG("{js} ERROR: Unable to create context");
        return false;
    }

#if defined(REMOTE_DEBUG)
    // Todo 31.09.18 add v8::Debug, uncomment below snippet
    /*v8::debug::ProcessDebugMessagesSetDebugMessageDispatchHandler(DispatchDebugMessages, true);
    if (v8::Debug::EnableAgent("game-closure-jsds", 9222, false)) {
        LOG("{debugger} JavaScript Debug Server running on port 9222");
    } else {
        LOG("{debugger} ERROR: JavaScript Debug Server could not start. Is another app already running a debug server?");
    }*/
#else // REMOTE_DEBUG
    LOG("{debugger} JavaScript Debug Server is disabled");
#endif // REMOTE_DEBUG

    Local<Context> context = getContext();
    Context::Scope scope(context);

    // config
    Handle<ObjectTemplate> config = v8::ObjectTemplate::New(getIsolate());
    config->Set(isolate, "baseURL", String::NewFromUtf8(getIsolate(), config_get_code_host()));

    // window.location
    native_initialize_location(config_get_code_host());

    // screen
    int width = config_get_screen_width();
    int height = config_get_screen_height();

    Handle<ObjectTemplate> screen = ObjectTemplate::New(getIsolate());
    screen->Set(STRING_CACHE_width.Get(getIsolate()), Number::New(getIsolate(),width));
    screen->Set(STRING_CACHE_height.Get(getIsolate()), Number::New(getIsolate(),height));

    // timer
    Handle<ObjectTemplate> timer = ObjectTemplate::New(getIsolate());
    timer->Set(STRING_CACHE_start.Get(getIsolate()), FunctionTemplate::New(getIsolate(), timer_start));

    // navigator
    Handle<ObjectTemplate> navigator = js_navigator_get_template();

    // native
    Handle<ObjectTemplate> NATIVE = js_native_get_template(uri, native_hash);
    NATIVE->Set(STRING_CACHE_timer.Get(isolate), timer);

    // global_object
    Local<Object> global_object = m_context.Get(m_isolate)->Global();

    global_object->Set(STRING_CACHE_CONFIG.Get(isolate), config->NewInstance());
    global_object->Set(STRING_CACHE_screen.Get(isolate), screen->NewInstance());
    global_object->Set(STRING_CACHE_navigator.Get(isolate), navigator->NewInstance());
    global_object->Set(STRING_CACHE_window.Get(isolate), global_object);
    global_object->Set(STRING_CACHE_NATIVE.Get(isolate), NATIVE->NewInstance());
    global_object->Set(STRING_CACHE_GLOBAL.Get(isolate), global_object);

    global_object->SetAccessor(context, STRING_CACHE_location.Get(isolate), jsGetLocation, jsSetLocation);

#if defined(ENABLE_PROFILER)
    Handle<ObjectTemplate> PROFILER = ObjectTemplate::New();
    nodex::InitializeProfiler(PROFILER);
    global_object->Set(STRING_CACHE_PROFILER, PROFILER->NewInstance());
#endif // ENABLE_PROFILER

    LOG("{js} Initialized in %dms", ELAPSED(t));

    js_ready = true;

    return true;
}

CEXPORT bool destroy_js() {
    LOG("{js} Shutting down");

    if(js_ready) {
        js_ready = false;
        Locker l(m_isolate);

        HandleScope scope(m_isolate);

        // Cleanup timer
        core_timer_clear_all();
        if(tickFunction != NULL && !(*tickFunction).IsEmpty()) {
            (*tickFunction).Reset();
        }
        tickFunction = NULL;


        m_context.Get(getIsolate())->DetachGlobal();
        m_context.Reset();
    }

    return true;
}
