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
#include "js/js_gc.h"
#include <stdlib.h>
#include "include/v8.h"
using namespace v8;


void native_run_gc(const v8::FunctionCallbackInfo<v8::Value> &args) {
    Isolate *isolate = getIsolate();
    LOG("{js} Full GC");
    isolate->LowMemoryNotification();
}

/* Returning true tells the caller that it need not
   continue to call IdleNotification.
*/
void native_run_maybe_gc(const v8::FunctionCallbackInfo<v8::Value> &args) {
    Isolate *isolate = getIsolate();
    LOG("{js} Maybe GC");
    args.GetReturnValue().Set( Boolean::New(isolate, isolate->IdleNotificationDeadline(45)));
}

Local<ObjectTemplate> js_gc_get_template(Isolate *isolate) {
    Local<ObjectTemplate> gc = ObjectTemplate::New(isolate);
    gc->Set(STRING_CACHE_runGC.Get(isolate), FunctionTemplate::New(isolate, native_run_gc));
    gc->Set(STRING_CACHE_runMaybeGC.Get(isolate), FunctionTemplate::New(isolate, native_run_maybe_gc));
    return gc;
}
