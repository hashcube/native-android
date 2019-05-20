/* @license
 * This file is part of the Game Closure SDK.
 *
 * The Game Closure SDK is free software: you can redistribute it and/or modify
 * it under the terms of the Mozilla Public License v. 2.0 as published by Mozilla.
 
 * The Game Closure SDK is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
 * Mozilla Public License v. 2.0 for more details.
 
 * You should have received a copy of the Mozilla Public License v. 2.0
 * along with the Game Closure SDK.  If not, see <http://mozilla.org/MPL/2.0/>.
 */
#ifndef JS_TIMER_H
#define JS_TIMER_H

#include "js/js.h"
#include "util/detect.h"
#include "core/timer.h"
#include "include/v8.h"
using namespace v8;

using v8::Handle;
using v8::Persistent;
using v8::Function;
using v8::Value;


typedef struct js_timer_t {
	Persistent<Function> callback;
	Handle<Value> *arguments;
} js_timer;
//Handle<Value>
void defSetTimeout(const v8::FunctionCallbackInfo<v8::Value> &args);
void defClearTimeout(const v8::FunctionCallbackInfo<v8::Value> &args);
void defSetInterval(const v8::FunctionCallbackInfo<v8::Value> &args);
CEXPORT void js_timer_unlink(core_timer* timer);
CEXPORT void js_timer_fire(core_timer *timer);
void defClearInterval(const v8::FunctionCallbackInfo<v8::Value> &args);
#endif
