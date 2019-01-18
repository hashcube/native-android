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
#include "js/js_device.h"
#include "platform/device.h"
#include <stdlib.h> // pulls in declaration of malloc, free
#include <string.h> // pulls in declaration for strlen.
#include "include/v8.h"
using v8::Handle;
using v8::ObjectTemplate;
using v8::String;
using v8::Local;
using v8::Value;

using namespace v8;

void js_device_global_id(Local< String > property, const PropertyCallbackInfo< Value > &info) {
    Isolate *isolate = getIsolate();
    const char* str = device_global_id();
    Handle<String> result = String::NewFromUtf8(isolate, str);
    free((void*)str);
    info.GetReturnValue().Set(result);
}

void js_device_info(Local< String > property, const PropertyCallbackInfo< Value > &info) {
    Isolate *isolate = getIsolate();
    const char* str = device_info();
    Handle<String> result = String::NewFromUtf8(isolate, str);
    free((void*)str);
    info.GetReturnValue().Set(result);
}

void js_set_text_scale(const v8::FunctionCallbackInfo<v8::Value> &args) {
    Isolate *isolate = getIsolate();
    float scale = args[0]->NumberValue(isolate->GetCurrentContext()).ToChecked();
    device_set_text_scale(scale);
}

void js_get_text_scale(const v8::FunctionCallbackInfo<v8::Value> &args) {
    Isolate *isolate = getIsolate();
    float scale = device_get_text_scale();
    args.GetReturnValue().Set(Number::New(isolate, scale));
}



Local<ObjectTemplate> js_device_get_template(Isolate *isolate) {
    Local<ObjectTemplate> device = ObjectTemplate::New(isolate);
    device->SetAccessor(STRING_CACHE_globalID.Get(isolate), js_device_global_id);
    device->SetAccessor(STRING_CACHE_native_info.Get(isolate), js_device_info);
    device->Set(String::NewFromUtf8(isolate, "setTextScale"), FunctionTemplate::New(isolate, js_set_text_scale));
    device->Set(String::NewFromUtf8(isolate, "getTextScale"), FunctionTemplate::New(isolate, js_get_text_scale));
    return device;
}
