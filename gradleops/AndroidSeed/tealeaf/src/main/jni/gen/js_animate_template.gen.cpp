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

#include "js_animate_template.gen.h"
#include "js/js_animate.h"

#include "include/v8.h"
using namespace v8;


v8::Local<v8::FunctionTemplate> js_animate_get_template() {
	Isolate *isolate = Isolate::GetCurrent();
	v8::Local<v8::FunctionTemplate> templ = v8::FunctionTemplate::New(isolate);
	v8::Local<v8::ObjectTemplate> animate = templ->InstanceTemplate();
	animate->SetInternalFieldCount(2);
	
void def_animate_constructor(const v8::FunctionCallbackInfo<v8::Value> &args);
templ->SetCallHandler(def_animate_constructor);

void def_animate_now(const v8::FunctionCallbackInfo<v8::Value> &args);
animate->Set(v8::String::NewFromUtf8(isolate, "now"), v8::FunctionTemplate::New(isolate, def_animate_now));
void def_animate_then(const v8::FunctionCallbackInfo<v8::Value> &args);
animate->Set(v8::String::NewFromUtf8(isolate, "then"), v8::FunctionTemplate::New(isolate, def_animate_then));
void def_animate_commit(const v8::FunctionCallbackInfo<v8::Value> &args);
animate->Set(v8::String::NewFromUtf8(isolate, "commit"), v8::FunctionTemplate::New(isolate, def_animate_commit));
void def_animate_clear(const v8::FunctionCallbackInfo<v8::Value> &args);
animate->Set(v8::String::NewFromUtf8(isolate, "clear"), v8::FunctionTemplate::New(isolate, def_animate_clear));
void def_animate_wait(const v8::FunctionCallbackInfo<v8::Value> &args);
animate->Set(v8::String::NewFromUtf8(isolate, "wait"), v8::FunctionTemplate::New(isolate, def_animate_wait));
void def_animate_pause(const v8::FunctionCallbackInfo<v8::Value> &args);
animate->Set(v8::String::NewFromUtf8(isolate, "pause"), v8::FunctionTemplate::New(isolate, def_animate_pause));
void def_animate_resume(const v8::FunctionCallbackInfo<v8::Value> &args);
animate->Set(v8::String::NewFromUtf8(isolate, "resume"), v8::FunctionTemplate::New(isolate, def_animate_resume));
void def_animate_isPaused(const v8::FunctionCallbackInfo<v8::Value> &args);
animate->Set(v8::String::NewFromUtf8(isolate, "isPaused"), v8::FunctionTemplate::New(isolate, def_animate_isPaused));
void def_animate_hasFrames(const v8::FunctionCallbackInfo<v8::Value> &args);
animate->Set(v8::String::NewFromUtf8(isolate, "hasFrames"), v8::FunctionTemplate::New(isolate, def_animate_hasFrames));

return templ;
}
