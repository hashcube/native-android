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
#include "js/js_build.h"
#include "platform/build.h"

#include "include/v8.h"
using namespace v8;

void sdk_hash_getter(Local< String > property, const PropertyCallbackInfo< Value > &info) {
    Isolate *isolate = info.GetIsolate();
    info.GetReturnValue().Set(String::NewFromUtf8(isolate, build_get_sdk_hash()));
}

void android_hash_getter(Local< String > property, const PropertyCallbackInfo< Value > &info) {
    Isolate *isolate = info.GetIsolate();
    info.GetReturnValue().Set(String::NewFromUtf8(isolate, build_get_android_hash()));
}

void game_hash_getter(Local< String > property, const PropertyCallbackInfo< Value > &info) {
    Isolate *isolate = info.GetIsolate();
    info.GetReturnValue().Set(String::NewFromUtf8(isolate, build_get_game_hash()));
}

Local<ObjectTemplate> js_build_get_template() {
    Isolate *isolate = Isolate::GetCurrent();
    Local<ObjectTemplate> build = ObjectTemplate::New(isolate);
    build->SetAccessor(STRING_CACHE_sdkHash.Get(isolate), sdk_hash_getter);
    build->SetAccessor(STRING_CACHE_androidHash.Get(isolate), android_hash_getter);
    build->SetAccessor(STRING_CACHE_gameHash.Get(isolate), game_hash_getter);

    return build;
}
