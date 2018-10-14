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
#include <stdlib.h>
#include <sys/time.h>

extern "C" {
#include "core/config.h"
#include "core/url_loader.h"
#include "core/core.h"
}

#include "js/js_native.h"
#include "js/js_console.h"
#include "js/js_haptics.h"
#include "js/js_sound.h"
#include "js_context.h"
#include "js/js_overlay.h"
#include "js/js_device.h"
#include "js/js_dialog.h"
#include "js/js_textbox.h"
#include "js/js_photo.h"
#include "js/js_context.h"
#include "js/js_local_storage.h"
#include "js/js_socket.h"
#include "js/js_xhr.h"
#include "js/js_device.h"
#include "js/js_timestep_view.h"
#include "js/js_plugins.h"
#include "js/js_gc.h"
#include "js/js_build.h"
#include "js/js_locale.h"
#include "js/js_profiler.h"
#include "js/js_input.h"
#include "js/js_status_bar.h"
#include "js/js_location.h"
#include "js/js_image_cache.h"
#include "platform/textbox.h"
#include "platform/native.h"
#include "js.h"
#include "include/v8.h"
using namespace v8;
using v8::internal::Arguments;

void native_eval(const v8::FunctionCallbackInfo<v8::Value> &args) {
    Isolate *isolate = args.GetIsolate();
    LOGFN("eval");
    String::Utf8Value str(isolate, args[0]);
    const char *cstr = ToCString(str);
    String::Utf8Value str2(isolate, args[1]);
    const char *pstr = ToCString(str2);

    Local<Value> ret = ExecuteString(String::NewFromUtf8(isolate,cstr), String::NewFromUtf8(isolate, pstr), true, isolate);
    LOGFN("endeval");
    args.GetReturnValue().Set(ret);
}

void native_fetch(const v8::FunctionCallbackInfo<v8::Value> &args) {
    Isolate *isolate = args.GetIsolate();
    LOGFN("fetch");
    String::Utf8Value url(isolate, args[0]);
    const char *url_str = (char*) ToCString(url);
    char *contents = core_load_url(url_str);
    LOGFN("endfetch");
    if (contents) {
        Handle<String> jscontents = String::NewFromUtf8(isolate, contents);
        free(contents);
        args.GetReturnValue().Set(jscontents);
    } else {
        args.GetReturnValue().Set(Boolean::New(isolate, false));
    }
}

void native_start_game(const v8::FunctionCallbackInfo<v8::Value> &args) {
    Isolate *isolate = args.GetIsolate();
    LOGFN("startGame");

    String::Utf8Value app(isolate, args[0]);
    const char* appid = ToCString(app);
    start_game(appid);

    LOGFN("end startGame");
}

void native_apply_update(const v8::FunctionCallbackInfo<v8::Value> &args) {
    Isolate *isolate = args.GetIsolate();
    LOGFN("applyUpdate");
    apply_update();
    LOGFN("end applyUpdate");
}

void native_done_loading(const v8::FunctionCallbackInfo<v8::Value> &args) {
    core_hide_preloader();
    LOG("{js} Game is done loading");
}

void js_native_send_activity_to_back(const v8::FunctionCallbackInfo<v8::Value> &args) {
    Isolate *isolate = args.GetIsolate();
    LOGFN("send_activity_to_back");
    bool result = native_send_activity_to_back();
    LOGFN("end send_activity_to_back");
    args.GetReturnValue().Set(Boolean::New(isolate, result));
}

void js_native_stay_awake(const v8::FunctionCallbackInfo<v8::Value> &args) {
    Isolate *isolate = args.GetIsolate();
    LOGFN("stay_awake");
    int enabled = args[0]->Int32Value(isolate->GetCurrentContext()).ToChecked();
    native_stay_awake(enabled != 0);
    LOGFN("end stay_awake");
}

void js_native_upload_device_info(const v8::FunctionCallbackInfo<v8::Value> &args) {
    Isolate *isolate = args.GetIsolate();
    LOGFN("upload_device_info");
    upload_device_info();
    LOGFN("end upload_device_info");
}

void js_native_reload(const v8::FunctionCallbackInfo<v8::Value> &args) {
    Isolate *isolate = args.GetIsolate();
    LOGFN("reload");
    native_reload();
    LOGFN("reload");
}

void js_native_get_microseconds(const v8::FunctionCallbackInfo<v8::Value> &args) {
    Isolate *isolate = args.GetIsolate();
    struct timeval tm;
    gettimeofday(&tm, NULL);
    args.GetReturnValue().Set(Number::New(isolate, (unsigned)(tm.tv_sec * 1000000 + tm.tv_usec)));
}

// Cached install referrer
// NOTE: This will leave some memory allocated during shutdown, which should
// not cause problems but may show up in an automated leak tester.
// NOTE: Not thread-safe but it doesn't need to be afaik. -cat
static const char *m_cached_install_referrer = 0;

void js_install_referrer(Local<String> property,
                                        const PropertyCallbackInfo< Value > &info) {
    Isolate *isolate = info.GetIsolate();
    LOGFN("install_referrer");
    Handle<Value> result;
    if (m_cached_install_referrer)
        result = String::NewFromUtf8(isolate, m_cached_install_referrer);
    else
        result = String::NewFromUtf8(isolate, m_cached_install_referrer = get_install_referrer());
    LOGFN("end install_referrer");
    info.GetReturnValue().Set(result);
}

void js_used_heap(Local<String> property,
                                    const PropertyCallbackInfo< Value > &info) {
    Isolate *isolate = info.GetIsolate();
    EscapableHandleScope handle_scope(isolate);
    HeapStatistics stats;
    LOGFN("used_heap");
    isolate->GetHeapStatistics(&stats);

    int used_heap = (int)stats.used_heap_size();

    LOGFN("end used_heap");
    info.GetReturnValue().Set(handle_scope.Escape(Number::New(isolate, used_heap)));
}

//call
void js_native_call(const v8::FunctionCallbackInfo<v8::Value> &args) {
    Isolate *isolate = args.GetIsolate();
    LOGFN("call");
    String::Utf8Value method(isolate, args[0]);
    const char *methodStr = ToCString(method);
    String::Utf8Value arguments(isolate, args[1]);
    const char *argumentsStr = ToCString(arguments);
    char *ret = native_call(methodStr, argumentsStr);
    Handle<Value> retStr = String::NewFromUtf8(isolate, ret);
    free(ret);
    LOGFN("call end");
    args.GetReturnValue().Set(retStr);
}

CEXPORT bool device_is_simulator();
void js_is_simulator(const v8::FunctionCallbackInfo<v8::Value> &args) {
    Isolate *isolate = args.GetIsolate();
    bool is_simulator = device_is_simulator();
    args.GetReturnValue().Set(Boolean::New(isolate, is_simulator));
}


Local<ObjectTemplate> js_native_get_template(const char* uri, const char* native_hash, Isolate *isolate) {
    Local<ObjectTemplate> NATIVE = ObjectTemplate::New(isolate);

    // functions
    NATIVE->Set(String::NewFromUtf8(isolate, "_call"), FunctionTemplate::New(isolate, js_native_call));
    NATIVE->Set(STRING_CACHE_getFileSync.Get(isolate), FunctionTemplate::New(isolate, native_fetch));
    NATIVE->Set(STRING_CACHE_eval.Get(isolate), FunctionTemplate::New(isolate, native_eval));
    NATIVE->Set(STRING_CACHE_startGame.Get(isolate), FunctionTemplate::New(isolate, native_start_game));
    NATIVE->Set(STRING_CACHE_doneLoading.Get(isolate), FunctionTemplate::New(isolate, native_done_loading));
    NATIVE->Set(STRING_CACHE_applyUpdate.Get(isolate), FunctionTemplate::New(isolate, native_apply_update));
    NATIVE->Set(STRING_CACHE_Socket.Get(isolate), FunctionTemplate::New(isolate, js_socket_ctor));
    NATIVE->Set(STRING_CACHE_sendActivityToBack.Get(isolate), FunctionTemplate::New(isolate, js_native_send_activity_to_back));
    NATIVE->Set(STRING_CACHE_stayAwake.Get(isolate), FunctionTemplate::New(isolate, js_native_stay_awake));
    NATIVE->Set(STRING_CACHE_uploadDeviceInfo.Get(isolate), FunctionTemplate::New(isolate, js_native_upload_device_info));
    NATIVE->Set(STRING_CACHE_getCurrentTimeMicroseconds.Get(isolate), FunctionTemplate::New(isolate, js_native_get_microseconds));
    NATIVE->Set(STRING_CACHE_reload.Get(isolate), FunctionTemplate::New(isolate, js_native_reload));
    NATIVE->Set(STRING_CACHE_isSimulator.Get(isolate), FunctionTemplate::New(isolate, js_is_simulator));

    // templates
    NATIVE->Set(STRING_CACHE_console.Get(isolate), js_console_get_template(isolate));
    NATIVE->Set(STRING_CACHE_gl.Get(isolate), js_gl_get_template(isolate));
    NATIVE->Set(STRING_CACHE_localStorage.Get(isolate), js_local_storage_get_template(isolate));
    NATIVE->Set(STRING_CACHE_sound.Get(isolate), js_sound_get_template(isolate));
    NATIVE->Set(STRING_CACHE_overlay.Get(isolate), js_overlay_get_template(isolate));
    NATIVE->Set(STRING_CACHE_device.Get(isolate), js_device_get_template(isolate));
    NATIVE->Set(STRING_CACHE_textbox.Get(isolate), js_textbox_get_template(isolate));
    NATIVE->Set(STRING_CACHE_dialogs.Get(isolate), js_dialog_get_template(isolate));
    NATIVE->Set(STRING_CACHE_haptics.Get(isolate), js_haptics_get_template(isolate));
    NATIVE->Set(STRING_CACHE_camera.Get(isolate), js_camera_get_template(isolate));
    NATIVE->Set(STRING_CACHE_gallery.Get(isolate), js_gallery_get_template(isolate));
    NATIVE->Set(STRING_CACHE_timestep.Get(isolate), js_timestep_get_template(isolate));
    NATIVE->Set(STRING_CACHE_xhr.Get(isolate), js_xhr_get_template(isolate));
    NATIVE->Set(STRING_CACHE_plugins.Get(isolate), js_plugins_get_template(isolate));
    NATIVE->Set(STRING_CACHE_gc.Get(isolate), js_gc_get_template(isolate));
    NATIVE->Set(STRING_CACHE_build.Get(isolate), js_build_get_template(isolate));
    NATIVE->Set(STRING_CACHE_locale.Get(isolate), js_locale_get_template(isolate));
    NATIVE->Set(STRING_CACHE_profiler.Get(isolate), js_profiler_get_template(isolate));
    NATIVE->Set(STRING_CACHE_input.Get(isolate), js_input_get_template(isolate));
    NATIVE->Set(STRING_CACHE_statusBar.Get(isolate), js_status_bar_get_template(isolate));
    NATIVE->Set(String::NewFromUtf8(isolate, "imageCache"), js_image_cache_get_template(isolate));

    // market
    Handle<ObjectTemplate> market = ObjectTemplate::New(isolate);
    const char *marketUrl = get_market_url();
    market->Set(STRING_CACHE_url.Get(isolate), String::NewFromUtf8(isolate, marketUrl), ReadOnly);
    free((void*)marketUrl);
    NATIVE->Set(STRING_CACHE_market.Get(isolate), market);

    // Values
    NATIVE->SetAccessor(STRING_CACHE_deviceUUID.Get(isolate), js_device_global_id);
    NATIVE->SetAccessor(STRING_CACHE_installReferrer.Get(isolate), js_install_referrer);
    NATIVE->SetAccessor(STRING_CACHE_usedHeap.Get(isolate), js_used_heap);
    NATIVE->Set(STRING_CACHE_simulateID.Get(isolate), String::NewFromUtf8(isolate, config_get_simulate_id()));
    NATIVE->Set(STRING_CACHE_screen.Get(isolate), String::NewFromUtf8(isolate,"screen"));
    NATIVE->Set(STRING_CACHE_uri.Get(isolate), String::NewFromUtf8(isolate, uri));
    NATIVE->Set(STRING_CACHE_tcpHost.Get(isolate), String::NewFromUtf8(isolate, config_get_tcp_host()));
    NATIVE->Set(STRING_CACHE_tcpPort.Get(isolate), Number::New(isolate, config_get_tcp_port()));
    const char *versionCode = get_version_code(); // versionCode
    NATIVE->Set(STRING_CACHE_versionCode.Get(isolate), String::NewFromUtf8(isolate, versionCode), ReadOnly);
    free((void*)versionCode);
    NATIVE->Set(STRING_CACHE_nativeHash.Get(isolate), String::NewFromUtf8(isolate, native_hash));
    NATIVE->SetAccessor(STRING_CACHE_location.Get(isolate), jsGetLocation, jsSetLocation);

    return NATIVE;
}
