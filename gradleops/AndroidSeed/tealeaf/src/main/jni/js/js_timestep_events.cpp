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
#include "js/js_timestep_events.h"
#include "timestep/timestep_events.h"

#include "include/v8.h"
using namespace v8;

void js_timestep_events_get(const v8::FunctionCallbackInfo<v8::Value> &args) {
    LOGFN("js_timestep_events_get");
    Isolate *isolate = args.GetIsolate();
    Local<Context> context = getContext();
    Local<Object> thiz = args.This();
    //TODO cache this.
    Handle<Function> input_event_ctor = Handle<Function>::Cast(thiz->Get(STRING_CACHE_InputEvent.Get(isolate)));

    input_event_list list = timestep_events_get();
    Handle<v8::Array> arr = Array::New(isolate, list.count);
    for (unsigned int i = 0; i < list.count; ++i) {
        Handle<Value> args[] = {
            Number::New(isolate, list.events[i].id),
            Number::New(isolate, list.events[i].type),
            Number::New(isolate, list.events[i].x),
            Number::New(isolate, list.events[i].y),
        };
        Local<Object> obj = input_event_ctor->NewInstance(context, 4, args).ToLocalChecked();
        //Handle<v8::Array> item = Array::New(4);
        arr->Set(Number::New(isolate, i), obj);
    }

    LOGFN("end js_timestep_events_get");
    args.GetReturnValue().Set(arr);
}

