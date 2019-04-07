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
#include "js/js_overlay.h"
#include "platform/overlay.h"
#include "include/v8.h"
using namespace v8;

void defLoadOverlay(const v8::FunctionCallbackInfo<v8::Value> &args) {
    LOGFN("JS load overlay");
    Isolate *isolate = getIsolate();
    String::Utf8Value url(isolate, args[0]);

    const char *url_str = ToCString(url);
    overlay_load(url_str);
    LOGFN("ENDJS load overlay");
}

void defShowOverlay(const v8::FunctionCallbackInfo<v8::Value> &args) {
    LOGFN("JS show overlay");
    overlay_show();
    LOGFN("end js show overlay");
}

void defHideOverlay(const v8::FunctionCallbackInfo<v8::Value> &args) {
    LOGFN("JS hide overlay");
    overlay_hide();
    LOGFN("endJS hide overlay");
}

void defSendOverlayEvent(const v8::FunctionCallbackInfo<v8::Value> &args) {
    LOGFN("send overlay event");
    Isolate *isolate = getIsolate();
    String::Utf8Value event(isolate, args[0]);
    const char *event_str = ToCString(event);
    overlay_send_event(event_str);
    LOGFN("end send overlay event");
}


Local<ObjectTemplate> js_overlay_get_template(Isolate *isolate) {
    Local<ObjectTemplate> overlay = ObjectTemplate::New(isolate);
    overlay->Set(STRING_CACHE_load.Get(isolate), FunctionTemplate::New(isolate, defLoadOverlay));
    overlay->Set(STRING_CACHE_show.Get(isolate), FunctionTemplate::New(isolate, defShowOverlay));
    overlay->Set(STRING_CACHE_hide.Get(isolate), FunctionTemplate::New(isolate, defHideOverlay));
    overlay->Set(STRING_CACHE_send.Get(isolate), FunctionTemplate::New(isolate, defSendOverlayEvent));
    return overlay;
}
