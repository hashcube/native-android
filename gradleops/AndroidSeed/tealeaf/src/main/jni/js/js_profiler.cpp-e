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
#include "js/js_profiler.h"
#include "platform/profiler.h"
#include "core/config.h"
#include "js/js.h"

#include "include/v8.h"
using namespace v8;

void js_profiler_start_profile(const v8::FunctionCallbackInfo<v8::Value> &args) {
#ifdef PROFILER_ENABLED
    String::Utf8Value tag_str(args[0]);
    const char *tag = ToCString(tag_str);
    LOG("{profiler} Starting %s", tag);
    profiler_start_profile(tag);
#endif

}

void js_profiler_stop_profile(const v8::FunctionCallbackInfo<v8::Value> &args) {
#ifdef PROFILER_ENABLED
    LOG("{profiler} Stopped");
    profiler_stop_profile();
#endif
}




Local<ObjectTemplate> js_profiler_get_template(Isolate *isolate) {
    Handle<ObjectTemplate> profiler = ObjectTemplate::New(isolate);

    profiler->Set(STRING_CACHE_start.Get(isolate), FunctionTemplate::New(isolate, js_profiler_start_profile));
    profiler->Set(STRING_CACHE_stop.Get(isolate), FunctionTemplate::New(isolate, js_profiler_stop_profile));
#ifdef PROFILER_ENABLED
#define __ENABLED true
#else
#define __ENABLED false
#endif
    profiler->Set(STRING_CACHE_enabled.Get(isolate), Boolean::New(isolate, __ENABLED));

    return profiler;
}
