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
#ifndef JS_LOCATION_H
#define JS_LOCATION_H

#include "js/js.h"
#include "include/v8.h"
using namespace v8;

void native_initialize_location(const char *uri);

// setLocation() handler
void native_set_location(const v8::FunctionCallbackInfo<v8::Value> &args);

// window.location accessors
void jsGetLocation(v8::Local<v8::Name> name, const v8::PropertyCallbackInfo<v8::Value> &info);
void jsSetLocation(v8::Local<v8::Name> name, v8::Local<v8::Value> value, const v8::PropertyCallbackInfo<void> &info);

#endif
