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
#include "js/js_console.h"
#include <stdlib.h>
#include "include/v8.h"
using namespace v8;


void native_log(const v8::FunctionCallbackInfo<v8::Value> &args) {
    LOGFN("log");
#ifndef RELEASE
    Isolate *isolate = getIsolate();
    HandleScope handle_scope(isolate);

    String::Utf8Value str(isolate, args[0]);

    const char* cstr = ToCString(str);

    __android_log_write(ANDROID_LOG_DEBUG, "JS", cstr);
#endif
    LOGFN("endlog");
}

Local<ObjectTemplate> js_console_get_template(Isolate *isolate) {
    Local<ObjectTemplate> console = ObjectTemplate::New(isolate);

    console->Set(STRING_CACHE_log.Get(isolate), FunctionTemplate::New(isolate, native_log));

    return console;
}
