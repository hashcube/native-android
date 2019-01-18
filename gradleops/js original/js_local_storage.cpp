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
#include "js/js_local_storage.h"
#include "platform/local_storage.h"
#include <stdlib.h> // pulls in declaration of malloc, free
#include <string.h> // pulls in declaration for strlen.
#include "include/v8.h"
using namespace v8;

void defLocalStorageSetItem(const v8::FunctionCallbackInfo<v8::Value> &args) {
    LOGFN("localstorage set");
    Isolate *isolate = getIsolate();
    String::Utf8Value str(isolate, args[0]);
    const char *key = ToCString(str);
    String::Utf8Value str2(isolate, args[1]);
    const char *data = ToCString(str2);
    local_storage_set_data(key, data);
    LOGFN("end localstorage set");
}

void defLocalStorageGetItem(const v8::FunctionCallbackInfo<v8::Value> &args) {
    Isolate *isolate = getIsolate();
    LOGFN("localstorage get");
    String::Utf8Value str(isolate, args[0]);
    const char *key = ToCString(str);
    const char *data = local_storage_get_data(key);
    if (data) {
        Local<String> result = String::NewFromUtf8(isolate, data);
        free((void*)data);
        args.GetReturnValue().Set(result);
    }
    else {
        LOGFN("end localstorage get");
        //return Null(); todo verify if null is used by framework
        args.GetReturnValue().Set(Undefined(isolate));
    }

}

void defLocalStorageRemoveItem(const v8::FunctionCallbackInfo<v8::Value> &args) {
    LOGFN("localstorage remove");
    Isolate *isolate = getIsolate();
    String::Utf8Value str(isolate, args[0]);
    const char *key = ToCString(str);
    local_storage_remove_data(key);
    LOGFN("end localstorage remove");
}

void defLocalStorageClear(const v8::FunctionCallbackInfo<v8::Value> &args) {
    LOGFN("localstorage clear");
    local_storage_clear();
    LOGFN("end localstorage clear");
}

Handle<ObjectTemplate> js_local_storage_get_template(Isolate *isolate) {
    Handle<ObjectTemplate> localStorage = ObjectTemplate::New(isolate);

    localStorage->Set(STRING_CACHE_setItem.Get(isolate), FunctionTemplate::New(isolate, defLocalStorageSetItem));
    localStorage->Set(STRING_CACHE_getItem.Get(isolate), FunctionTemplate::New(isolate, defLocalStorageGetItem));
    localStorage->Set(STRING_CACHE_removeItem.Get(isolate), FunctionTemplate::New(isolate, defLocalStorageRemoveItem));
    localStorage->Set(STRING_CACHE_clear.Get(isolate), FunctionTemplate::New(isolate, defLocalStorageClear));
    return localStorage;
}
