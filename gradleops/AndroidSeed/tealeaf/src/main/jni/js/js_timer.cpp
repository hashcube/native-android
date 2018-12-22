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
#include "js/js_timer.h"
#include "core/timer.h"
#include <stdlib.h>

#include "include/v8.h"
#include "js_timer.h"

using namespace v8;

CEXPORT void js_timer_unlink(core_timer* timer) {
    js_timer *t = (js_timer*)timer->js_data;
   // t->callback.Reset();
}

CEXPORT void js_timer_fire(core_timer *timer) {
    Isolate *isolate = getIsolate();
    Locker l(isolate);
    HandleScope handle_scope(isolate);
    Local<Context> context = getContext();
    Context::Scope context_scope(context);
    TryCatch try_catch(isolate);
    
    js_timer *t = (js_timer*) timer->js_data;
    t->callback.Get(isolate)->Call( context->Global(), 0, {});
   
}

static js_timer *get_timer(Local<Object> callback, Isolate *isolate) {
    js_timer* timer = new js_timer();

    if (!callback.IsEmpty() && callback->IsFunction()) {
        Local<Function> lf = Local<Function>::Cast(callback);
        timer->callback.Reset(isolate, lf);
    }
    else{
      //  timer->callback.Reset();
    }
   // timer->arguments = NULL;//FIXME make passing arguments to settimeout work
    return timer;
}


static int schedule_timer(Local<Object> cb, int time, bool repeat, Isolate *isolate) {
    js_timer *js_timer = get_timer(cb, isolate);
    core_timer *timer = core_get_timer((void*)js_timer, time, repeat);
    core_timer_schedule(timer);
    return timer->id;
}


void defSetTimeout(const v8::FunctionCallbackInfo<v8::Value> &args) {
    Isolate *isolate = args.GetIsolate();
    LOGFN("settimeout");
    if (args[0].IsEmpty() || !args[0]->IsFunction()) {
        args.GetReturnValue().Set(Undefined(isolate));
        return;
    }

    Local<Object> cb = Local<Object>::Cast(args[0]);

    int time = args[1]->Int32Value(isolate->GetCurrentContext()).ToChecked();
    int id = schedule_timer(cb, time, false, isolate);
    LOGFN("end settimeout");
    args.GetReturnValue().Set(Number::New(isolate, id));
}

void defSetInterval(const v8::FunctionCallbackInfo<v8::Value> &args) {
    Isolate *isolate = args.GetIsolate();
    LOGFN("setInterval");
    if (args[0].IsEmpty() || !args[0]->IsFunction()) {
        args.GetReturnValue().Set(Undefined(isolate));
        return;
    }
    Handle<Object> cb = args[0]->ToObject(isolate);

    int time = args[1]->Int32Value(isolate->GetCurrentContext()).ToChecked();
    int id = schedule_timer(cb, time, true, isolate);
    LOGFN("end setInterval");
    args.GetReturnValue().Set(Number::New(isolate, id));
}

void defClearTimeout(const v8::FunctionCallbackInfo<v8::Value> &args) {
    Isolate *isolate = args.GetIsolate();
    LOGFN("cleartimeout");
    int id = args[0]->Int32Value(isolate->GetCurrentContext()).ToChecked();
    core_timer_clear(id);
    LOGFN("end cleartimeout");
}

void defClearInterval(const v8::FunctionCallbackInfo<v8::Value> &args) {
    Isolate *isolate = args.GetIsolate();
    LOGFN("clearInterval");
    int id = args[0]->Int32Value(isolate->GetCurrentContext()).ToChecked();
    core_timer_clear(id);
    LOGFN("end clearInterval");
}
