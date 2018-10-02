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
#include "js_location.h"
#include "platform/location_manager.h"

#include "include/v8.h"
using namespace v8;

static Persistent<String> m_location;
void jsGetLocation(v8::Local<Name> name, const v8::PropertyCallbackInfo<v8::Value> &info) {
    // Todo verify if scope is required
    //Isolate *isolate = info.GetIsolate();
    //HandleScope scope(isolate);
    info.GetReturnValue().Set(m_location);
}

//Todo Check should the isolate be passed to the function parameters
static void set_location(Local<String> location) {
    Isolate *isolate = Isolate::GetCurrent();
    m_location.Reset(isolate, location);
    String::Utf8Value str(isolate, location);
    const char *utf8_location = *str;

    location_manager_set_location(utf8_location);

    LOG("{location} Set to %s", utf8_location);
}

void jsSetLocation(Local<Name> name, Local<Value> value, const v8::PropertyCallbackInfo<void> &info) {
    Isolate *isolate = info.GetIsolate();
    set_location(value->ToString(isolate));
}

void native_set_location(const v8::FunctionCallbackInfo<v8::Value> &args) {
    LOGFN("in native set location");
    Isolate *isolate = args.GetIsolate();
    if (args.Length() >= 1 && args[0]->IsString()) {
        set_location(args[0]->ToString(isolate));
    }

    LOGFN("end native set location");
}

void native_initialize_location(const char *uri) {
    m_location.Reset(Isolate::GetCurrent(), (String::NewFromUtf8(Isolate::GetCurrent(), uri)));
}

//FUNCTIONS' Handle<Value> changed to void (subtype FunctionCallback - need to add logics which changes variables
