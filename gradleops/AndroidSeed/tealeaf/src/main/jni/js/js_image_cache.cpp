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
#include "js_image_cache.h"
extern "C" {
#include "core/image-cache/include/image_cache.h"
}

#include "include/v8.h"
using namespace v8;

void js_image_cache_remove(const v8::FunctionCallbackInfo<v8::Value> &args) {
    Isolate *isolate = args.GetIsolate();
    LOGFN("in image cache delete");
    HandleScope handleScope(isolate);
    String::Utf8Value str(isolate, args[0]);
    const char *url = ToCString(str);
    image_cache_remove(url);
    LOGFN("end image cache delete");
}

Local<ObjectTemplate> js_image_cache_get_template() {
    Isolate *isolate = Isolate::GetCurrent();
    Handle<ObjectTemplate> image_cache = ObjectTemplate::New(isolate);
    image_cache->Set(String::NewFromUtf8(isolate, "remove"), FunctionTemplate::New(isolate, js_image_cache_remove));
    return image_cache;
}
