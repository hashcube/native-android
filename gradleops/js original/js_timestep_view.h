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
#ifndef JS_VIEW_H
#define JS_VIEW_H
#include "js/js.h"
#include "include/v8.h"

#define GET_TIMESTEP_VIEW(thiz) (timestep_view*) Local<External>::Cast(thiz->GetInternalField(0))->Value()

using v8::Handle;
using v8::Value;
using v8::Object;
using v8::ObjectTemplate;
using v8::Local;
using v8::Persistent;
using v8::String;
using v8::PropertyCallbackInfo;

void timestep_view_set_z_index(Local< String > property, Local< Value > value, const PropertyCallbackInfo< void > &info);
void timestep_view_set_opacity (Local< String > property, Local< Value > value, const PropertyCallbackInfo< void > &info);

void def_timestep_view_constructor(const v8::FunctionCallbackInfo<v8::Value> &args);
Local<ObjectTemplate> js_timestep_get_template(Isolate *isolate);
void def_timestep_view_needs_reflow(Local<Object> js_view, bool force);
void def_timestep_view_render(Local<Object> js_view, Local<Object> js_ctx, Local<Object> js_opts, Isolate *isolate);

Local<Object> def_get_viewport(Local<Object> js_opts, Isolate *isolate);
void def_restore_viewport(Local<Object> js_opts, Local<Object> js_viewport, Isolate *isolate);


void def_timestep_view_tick(Local<Object> js_view, double dt, Isolate *isolate);
void def_timestep_view_localize_pt(const v8::FunctionCallbackInfo<v8::Value> &args);
Local<ObjectTemplate> get_view_class_template();
//static void js_view_finalize(Persistent<Value> ctx, void *param);
#endif
