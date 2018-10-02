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

#include "js_timestep_image_map_template.gen.h"
#include "js/js_timestep_image_map.h"

#include "core/timestep/timestep_image_map.h"

#include <signal.h>
#include <stdlib.h>
#include "include/v8.h"
using namespace v8;

void timestep_image_map_get_x(Local<String> property, const PropertyCallbackInfo< Value > &info) {
	Isolate *isolate = info.GetIsolate();
	//LOG("in timestep_image_map get x");
	v8::Local<v8::Object> thiz = info.Holder();
	timestep_image_map *obj = (timestep_image_map*) v8::Local<v8::External>::Cast(thiz->GetInternalField(0))->Value();
	
int prop = obj->x;
	//LOG("done in timestep_image_map get x");
	info.GetReturnValue().Set(v8::Integer::New(isolate, prop));
	
}


void timestep_image_map_set_x(v8::Local<v8::String> property, v8::Local<v8::Value> value, const PropertyCallbackInfo< void > &info) {
	Isolate *isolate = info.GetIsolate();
	//LOG("in timestep_image_map set x");
	v8::Local<v8::Object> thiz = info.Holder();
	timestep_image_map *obj = (timestep_image_map*) v8::Local<v8::External>::Cast(thiz->GetInternalField(0))->Value();
	
obj->x = value->ToInteger(isolate)->Value();
	
//LOG("done in timestep_image_map set x");
}



void timestep_image_map_get_y(Local<String> property, const PropertyCallbackInfo< Value > &info) {
	Isolate *isolate = info.GetIsolate();
	//LOG("in timestep_image_map get y");
	v8::Local<v8::Object> thiz = info.Holder();
	timestep_image_map *obj = (timestep_image_map*) v8::Local<v8::External>::Cast(thiz -> GetInternalField(0))->Value();
	
int prop = obj->y;
	//LOG("done in timestep_image_map get y");
	info.GetReturnValue().Set(v8::Integer::New(isolate, prop));
	
}


void timestep_image_map_set_y(v8::Local<v8::String> property, v8::Local<v8::Value> value, const PropertyCallbackInfo< void > &info) {
	Isolate *isolate = info.GetIsolate();
	//LOG("in timestep_image_map set y");
	v8::Local<v8::Object> thiz = info.Holder();
	timestep_image_map *obj = (timestep_image_map*) v8::Local<v8::External>::Cast(thiz->GetInternalField(0))->Value();
	
obj->y = value->ToInteger(isolate)->Value();
	
//LOG("done in timestep_image_map set y");
}



void timestep_image_map_get_width(Local<String> property, const PropertyCallbackInfo< Value > &info) {
	Isolate *isolate = info.GetIsolate();
	//LOG("in timestep_image_map get width");
	v8::Local<v8::Object> thiz = info.Holder();
	timestep_image_map *obj = (timestep_image_map*) v8::Local<v8::External>::Cast(thiz->GetInternalField(0))->Value();
	
int prop = obj->width;
	//LOG("done in timestep_image_map get width");
	info.GetReturnValue().Set(v8::Integer::New(isolate, prop));
	
}


void timestep_image_map_set_width(v8::Local<v8::String> property, v8::Local<v8::Value> value, const PropertyCallbackInfo< void > &info) {
	Isolate *isolate = info.GetIsolate();
	//LOG("in timestep_image_map set width");
	v8::Local<v8::Object> thiz = info.Holder();
	timestep_image_map *obj = (timestep_image_map*) v8::Local<v8::External>::Cast(thiz->GetInternalField(0))->Value();
	
obj->width = value->ToInteger(isolate)->Value();
	
//LOG("done in timestep_image_map set width");
}


void timestep_image_map_get_height(Local<String> property, const PropertyCallbackInfo< Value > &info) {
	Isolate *isolate = info.GetIsolate();
	//LOG("in timestep_image_map get height");
	v8::Local<v8::Object> thiz = info.Holder();
	timestep_image_map *obj = (timestep_image_map*) v8::Local<v8::External>::Cast(thiz->GetInternalField(0))->Value();
	
int prop = obj->height;
	//LOG("done in timestep_image_map get height");
	info.GetReturnValue().Set(v8::Integer::New(isolate, prop));
	
}


void timestep_image_map_set_height(v8::Local<v8::String> property, v8::Local<v8::Value> value, const PropertyCallbackInfo< void > &info) {
	Isolate *isolate = info.GetIsolate();
	//LOG("in timestep_image_map set height");
	v8::Local<v8::Object> thiz = info.Holder();
	timestep_image_map *obj = (timestep_image_map*) v8::Local<v8::External>::Cast(thiz->GetInternalField(0))->Value();
	
obj->height = value->ToInteger(isolate)->Value();
	
//LOG("done in timestep_image_map set height");
}



void timestep_image_map_get_marginTop(Local<String> property, const PropertyCallbackInfo< Value > &info) {
	Isolate *isolate = info.GetIsolate();
	//LOG("in timestep_image_map get marginTop");
	v8::Local<v8::Object> thiz = info.Holder();
	timestep_image_map *obj = (timestep_image_map*) v8::Local<v8::External>::Cast(thiz->GetInternalField(0))->Value();
	
int prop = obj->margin_top;
	//LOG("done in timestep_image_map get marginTop");
	info.GetReturnValue().Set(v8::Integer::New(isolate, prop));
	
}


void timestep_image_map_set_marginTop(v8::Local<v8::String> property, v8::Local<v8::Value> value, const PropertyCallbackInfo< void > &info) {
	Isolate *isolate = info.GetIsolate();
	//LOG("in timestep_image_map set marginTop");
	v8::Local<v8::Object> thiz = info.Holder();
	timestep_image_map *obj = (timestep_image_map*) v8::Local<v8::External>::Cast(thiz->GetInternalField(0))->Value();
	
obj->margin_top = value->ToInteger(isolate)->Value();
	
//LOG("done in timestep_image_map set marginTop");
}



void timestep_image_map_get_marginRight(Local<String> property, const PropertyCallbackInfo< Value > &info) {
	Isolate *isolate = info.GetIsolate();
	//LOG("in timestep_image_map get marginRight");
	v8::Local<v8::Object> thiz = info.Holder();
	timestep_image_map *obj = (timestep_image_map*) v8::Local<v8::External>::Cast(thiz->GetInternalField(0))->Value();
	
int prop = obj->margin_right;
	//LOG("done in timestep_image_map get marginRight");
	info.GetReturnValue().Set(v8::Integer::New(isolate, prop));
	
}


void timestep_image_map_set_marginRight(v8::Local<v8::String> property, v8::Local<v8::Value> value, const PropertyCallbackInfo< void > &info) {
	Isolate *isolate = info.GetIsolate();
	//LOG("in timestep_image_map set marginRight");
	v8::Local<v8::Object> thiz = info.Holder();
	timestep_image_map *obj = (timestep_image_map*) v8::Local<v8::External>::Cast(thiz->GetInternalField(0))->Value();
	
obj->margin_right = value->ToInteger(isolate)->Value();
	
//LOG("done in timestep_image_map set marginRight");
}



void timestep_image_map_get_marginBottom(Local<String> property, const PropertyCallbackInfo< Value > &info) {
	Isolate *isolate = info.GetIsolate();
	//LOG("in timestep_image_map get marginBottom");
	v8::Local<v8::Object> thiz = info.Holder();
	timestep_image_map *obj = (timestep_image_map*) v8::Local<v8::External>::Cast(thiz->GetInternalField(0))->Value();
	
int prop = obj->margin_bottom;
	//LOG("done in timestep_image_map get marginBottom");
	info.GetReturnValue().Set(v8::Integer::New(isolate, prop));
	
}


void timestep_image_map_set_marginBottom(v8::Local<v8::String> property, v8::Local<v8::Value> value, const PropertyCallbackInfo< void > &info) {
	Isolate *isolate = info.GetIsolate();
	//LOG("in timestep_image_map set marginBottom");
	v8::Local<v8::Object> thiz = info.Holder();
	timestep_image_map *obj = (timestep_image_map*) v8::Local<v8::External>::Cast(thiz->GetInternalField(0))->Value();
	
obj->margin_bottom = value->ToInteger(isolate)->Value();
	
//LOG("done in timestep_image_map set marginBottom");
}



void timestep_image_map_get_marginLeft(Local<String> property, const PropertyCallbackInfo< Value > &info) {
	Isolate *isolate = info.GetIsolate();
	//LOG("in timestep_image_map get marginLeft");
	v8::Local<v8::Object> thiz = info.Holder();
	timestep_image_map *obj = (timestep_image_map*) v8::Local<v8::External>::Cast(thiz->GetInternalField(0))->Value();
	
int prop = obj->margin_left;
	//LOG("done in timestep_image_map get marginLeft");
	info.GetReturnValue().Set(v8::Integer::New(isolate, prop));
	
}


void timestep_image_map_set_marginLeft(v8::Local<v8::String> property, v8::Local<v8::Value> value, const PropertyCallbackInfo< void > &info) {
	Isolate *isolate = info.GetIsolate();
	//LOG("in timestep_image_map set marginLeft");
	v8::Local<v8::Object> thiz = info.Holder();
	timestep_image_map *obj = (timestep_image_map*) v8::Local<v8::External>::Cast(thiz->GetInternalField(0))->Value();
	
obj->margin_left = value->ToInteger(isolate)->Value();
	
//LOG("done in timestep_image_map set marginLeft");
}



void timestep_image_map_get_url(Local<String> property, const PropertyCallbackInfo< Value > &info) {
	Isolate *isolate = info.GetIsolate();
	//LOG("in timestep_image_map get url");
	v8::Local<v8::Object> thiz = info.Holder();
	timestep_image_map *obj = (timestep_image_map*) v8::Local<v8::External>::Cast(thiz->GetInternalField(0))->Value();
	
char* prop = obj->url;
	//LOG("done in timestep_image_map get url");
	info.GetReturnValue().Set(v8::String::NewFromUtf8(isolate, prop));
	
}


void timestep_image_map_set_url(v8::Local<v8::String> property, v8::Local<v8::Value> value, const PropertyCallbackInfo< void > &info) {
	Isolate *isolate = info.GetIsolate();
	//LOG("in timestep_image_map set url");
	v8::Local<v8::Object> thiz = info.Holder();
	timestep_image_map *obj = (timestep_image_map*) v8::Local<v8::External>::Cast(thiz->GetInternalField(0))->Value();
	
if (obj->url) {
	free(obj->url);
}
v8::String::Utf8Value s(isolate, value);
const char *str = ToCString(s);
obj->url = strdup(str);


//LOG("done in timestep_image_map set url");
}



v8::Handle<v8::FunctionTemplate> js_timestep_image_map_get_template() {
	Isolate *isolate = Isolate::GetCurrent();
	v8::Handle<v8::FunctionTemplate> templ = v8::FunctionTemplate::New(isolate);
	v8::Handle<v8::ObjectTemplate> timestep_image_map = templ->InstanceTemplate();
	timestep_image_map->SetInternalFieldCount(2);
	
void def_timestep_image_map_constructor(const v8::FunctionCallbackInfo<v8::Value> &args);
	templ->SetCallHandler(def_timestep_image_map_constructor);





void timestep_image_map_get_x(Local<String> property, const PropertyCallbackInfo< Value > &info);

void timestep_image_map_set_x(v8::Local<v8::String> property, v8::Local<v8::Value> value, const PropertyCallbackInfo< void > &info);

timestep_image_map->SetAccessor(v8::String::NewFromUtf8(isolate, "x"), timestep_image_map_get_x, timestep_image_map_set_x);
void timestep_image_map_get_y(Local<String> property, const PropertyCallbackInfo< Value > &info);

void timestep_image_map_set_y(v8::Local<v8::String> property, v8::Local<v8::Value> value, const PropertyCallbackInfo< void > &info);

timestep_image_map->SetAccessor(v8::String::NewFromUtf8(isolate, "y"), timestep_image_map_get_y, timestep_image_map_set_y);
void timestep_image_map_get_width(Local<String> property, const PropertyCallbackInfo< Value > &info);

void timestep_image_map_set_width(v8::Local<v8::String> property, v8::Local<v8::Value> value, const PropertyCallbackInfo< void > &info);

timestep_image_map->SetAccessor(v8::String::NewFromUtf8(isolate, "width"), timestep_image_map_get_width, timestep_image_map_set_width);
void timestep_image_map_get_height(Local<String> property, const PropertyCallbackInfo< Value > &info);

void timestep_image_map_set_height(v8::Local<v8::String> property, v8::Local<v8::Value> value, const PropertyCallbackInfo< void > &info);

timestep_image_map->SetAccessor(v8::String::NewFromUtf8(isolate, "height"), timestep_image_map_get_height, timestep_image_map_set_height);
void timestep_image_map_get_marginTop(Local<String> property, const PropertyCallbackInfo< Value > &info);

void timestep_image_map_set_marginTop(v8::Local<v8::String> property, v8::Local<v8::Value> value, const PropertyCallbackInfo< void > &info);

timestep_image_map->SetAccessor(v8::String::NewFromUtf8(isolate, "marginTop"), timestep_image_map_get_marginTop, timestep_image_map_set_marginTop);
void timestep_image_map_get_marginRight(Local<String> property, const PropertyCallbackInfo< Value > &info);

void timestep_image_map_set_marginRight(v8::Local<v8::String> property, v8::Local<v8::Value> value, const PropertyCallbackInfo< void > &info);

timestep_image_map->SetAccessor(v8::String::NewFromUtf8(isolate, "marginRight"), timestep_image_map_get_marginRight, timestep_image_map_set_marginRight);
void timestep_image_map_get_marginBottom(Local<String> property, const PropertyCallbackInfo< Value > &info);

void timestep_image_map_set_marginBottom(v8::Local<v8::String> property, v8::Local<v8::Value> value, const PropertyCallbackInfo< void > &info);

timestep_image_map->SetAccessor(v8::String::NewFromUtf8(isolate, "marginBottom"), timestep_image_map_get_marginBottom, timestep_image_map_set_marginBottom);
void timestep_image_map_get_marginLeft(Local<String> property, const PropertyCallbackInfo< Value > &info);

void timestep_image_map_set_marginLeft(v8::Local<v8::String> property, v8::Local<v8::Value> value, const PropertyCallbackInfo< void > &info);

timestep_image_map->SetAccessor(v8::String::NewFromUtf8(isolate, "marginLeft"), timestep_image_map_get_marginLeft, timestep_image_map_set_marginLeft);
void timestep_image_map_get_url(Local<String> property, const PropertyCallbackInfo< Value > &info);

void timestep_image_map_set_url(v8::Local<v8::String> property, v8::Local<v8::Value> value, const PropertyCallbackInfo< void > &info);

timestep_image_map->SetAccessor(v8::String::NewFromUtf8(isolate, "url"), timestep_image_map_get_url, timestep_image_map_set_url);


return templ;
}
