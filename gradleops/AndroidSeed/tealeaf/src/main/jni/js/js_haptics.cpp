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
#include "js/js_haptics.h"
#include "platform/haptics.h"
#include <stdlib.h>
#include "include/v8.h"
using namespace v8;


void js_haptics_cancel(const v8::FunctionCallbackInfo<v8::Value> &args) {
    haptics_cancel();
}

void js_haptics_vibrate(const v8::FunctionCallbackInfo<v8::Value> &args) {
    Isolate *isolate = args.GetIsolate();
    Handle<Object> opts = Handle<Object>::Cast(args[0]);
    Handle<Value> milliseconds = opts->Get(STRING_CACHE_milliseconds.Get(isolate));

    if ( milliseconds->IsUndefined() ) {

        Handle<Object> pattern = Handle<Array>::Cast( opts->Get(STRING_CACHE_pattern.Get(isolate)) );
        int repeat = opts->Get(STRING_CACHE_repeat.Get(isolate))->Int32Value(isolate->GetCurrentContext()).ToChecked();

        int patternLen = pattern->Get(STRING_CACHE_length.Get(isolate))->Int32Value(isolate->GetCurrentContext()).ToChecked();
        long long* patternArr = (long long*)malloc(sizeof(long long) * patternLen);

        for ( int i = 0; i < patternLen; i++ ) {
            patternArr[i] = pattern->Get(Number::New(isolate, i))->IntegerValue(isolate->GetCurrentContext()).ToChecked();
        }
        haptics_vibrate(patternArr, repeat, patternLen);
        free(patternArr);
    } else {

        haptics_vibrate(milliseconds->IntegerValue(isolate->GetCurrentContext()).ToChecked());
    }
}

void js_haptics_has_vibrator(Local<String> property, const PropertyCallbackInfo< Value > &info) {
    Isolate *isolate = info.GetIsolate();
    bool result = haptics_has_vibrator();
    info.GetReturnValue().Set(Boolean::New(isolate, result));
}

Handle<ObjectTemplate> js_haptics_get_template() {
    Isolate *isolate = Isolate::GetCurrent();
    Handle<ObjectTemplate> haptics = ObjectTemplate::New(isolate);
    haptics->Set(STRING_CACHE_cancel.Get(isolate), FunctionTemplate::New(isolate, js_haptics_cancel));
    haptics->Set(STRING_CACHE_vibrate.Get(isolate), FunctionTemplate::New(isolate, js_haptics_vibrate));
    haptics->SetAccessor(STRING_CACHE_hasVibrator.Get(isolate), js_haptics_has_vibrator);

    return haptics;
}

