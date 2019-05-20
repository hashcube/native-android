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
#include "js_photo.h"
#include "platform/photo.h"
//include "qr/adapter/QRCodeProcessor.h"
#include "include/v8.h"
using namespace v8;

void js_camera_get_photo(const v8::FunctionCallbackInfo<v8::Value> &args) {
    Isolate *isolate = getIsolate();
    String::Utf8Value str(isolate, args[0]);
    int width = args[1]->Int32Value(isolate->GetCurrentContext()).ToChecked();
    int height = args[2]->Int32Value(isolate->GetCurrentContext()).ToChecked();
    int crop = args[3]->Int32Value(isolate->GetCurrentContext()).ToChecked();
    const char *cstr = ToCString(str);
    args.GetReturnValue().Set(Number::New(isolate, camera_get_photo(cstr, width, height, crop)));
}

void js_camera_process_qr(const v8::FunctionCallbackInfo<v8::Value> &args) {
 /*   Isolate *isolate = getIsolate();
    String::Utf8Value str(isolate, args[0]);
    const char *cstr = ToCString(str);

    char text[512];
    qr_process_base64_image(cstr, text);

    args.GetReturnValue().Set(String::NewFromUtf8(isolate, text));
    */
}



void js_camera_encode_qr(const v8::FunctionCallbackInfo<v8::Value> &args) {
  /*  Isolate *isolate = getIsolate();
    String::Utf8Value str(isolate, args[0]);
    const char *cstr = ToCString(str);

    int width, height;
    char *b64image = qr_generate_base64_image(cstr, &width, &height);

    args.GetReturnValue().Set(String::NewFromUtf8(isolate, b64image));
    */
}

void js_camera_get_next_id(const v8::FunctionCallbackInfo<v8::Value> &args) {
    Isolate *isolate = getIsolate();
    args.GetReturnValue().Set(Number::New(isolate, camera_get_next_id()));
}

Local<ObjectTemplate> js_camera_get_template(Isolate *isolate) {
    Handle<ObjectTemplate> camera = ObjectTemplate::New(isolate);
    camera->Set(STRING_CACHE_getNextId.Get(isolate), FunctionTemplate::New(isolate, js_camera_get_next_id));
    camera->Set(STRING_CACHE_getPhoto.Get(isolate), FunctionTemplate::New(isolate, js_camera_get_photo));
    camera->Set(STRING_CACHE_processQR.Get(isolate), FunctionTemplate::New(isolate, js_camera_process_qr));
    camera->Set(STRING_CACHE_encodeQR.Get(isolate), FunctionTemplate::New(isolate, js_camera_encode_qr));
    return camera;
}

void js_gallery_get_photo(const v8::FunctionCallbackInfo<v8::Value> &args) {
    Isolate *isolate = getIsolate();
    String::Utf8Value str(isolate, args[0]);
    int width = args[1]->Int32Value(isolate->GetCurrentContext()).ToChecked();
    int height = args[2]->Int32Value(isolate->GetCurrentContext()).ToChecked();
    int crop = args[3]->Int32Value(isolate->GetCurrentContext()).ToChecked();
    const char *cstr = ToCString(str);
    args.GetReturnValue().Set(Number::New(isolate, gallery_get_photo(cstr, width, height, crop)));
}

void js_gallery_get_next_id(const v8::FunctionCallbackInfo<v8::Value> &args) {
    Isolate *isolate = getIsolate();
    args.GetReturnValue().Set(Number::New(isolate, gallery_get_next_id()));
}

Local<ObjectTemplate> js_gallery_get_template(Isolate *isolate) {
    Handle<ObjectTemplate> gallery = ObjectTemplate::New(isolate);
    gallery->Set(STRING_CACHE_getNextId.Get(isolate), FunctionTemplate::New(isolate, js_gallery_get_next_id));
    gallery->Set(STRING_CACHE_getPhoto.Get(isolate), FunctionTemplate::New(isolate, js_gallery_get_photo));
    return gallery;
}
