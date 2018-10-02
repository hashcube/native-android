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
#ifndef JS_GL_H
#define JS_GL_H

#include "js/js.h"
#include "include/v8.h"

extern "C" {
	#include "core/tealeaf_context.h"
}
using v8::Handle;
using v8::Value;
using v8::Local;
using v8::ObjectTemplate;
using v8::External;

#define GET_CONTEXT2D() (static_cast<context_2d*>(Local<External>(Local<External>::Cast(args.This()->GetInternalField(0)))->Value()))
#define GET_CONTEXT2D_FROM(obj) (static_cast<context_2d*>(Local<External>(Local<External>::Cast(obj->GetInternalField(0)))->Value()))

void context_2d_class_ctor(const v8::FunctionCallbackInfo<v8::Value> &args);
void defFlushImages(const v8::FunctionCallbackInfo<v8::Value> &args);
void defLoadImage(const v8::FunctionCallbackInfo<v8::Value> &args);
void defNewTexture(const v8::FunctionCallbackInfo<v8::Value> &args);
void defDestroyImage(const v8::FunctionCallbackInfo<v8::Value> &args);
void defFillTextBitmap(const v8::FunctionCallbackInfo<v8::Value> &args);

Local<ObjectTemplate> js_gl_get_template();
void js_gl_delete_textures(const v8::FunctionCallbackInfo<v8::Value> &args);

#endif
