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

#include "js_timestep_view_template.gen.h"
#include "js/js_timestep_view.h"

#include "core/timestep/timestep_view.h"

#include "core/rgba.h"

#include "include/v8.h"
using namespace v8;




void timestep_view_get_x(Local<String> property, const PropertyCallbackInfo< Value > &info) {
	//LOG("in timestep_view get x");
	Isolate *isolate = info.GetIsolate();
	v8::Local<v8::Object> thiz = info.Holder();
	timestep_view *obj = (timestep_view*) v8::Local<v8::External>::Cast(thiz->GetInternalField(0))->Value();
	
double prop = obj->x;
	//LOG("done in timestep_view get x");
	info.GetReturnValue().Set(v8::Number::New(isolate, prop));
	
}


void timestep_view_set_x(v8::Local<v8::String> property, v8::Local<v8::Value> value, const PropertyCallbackInfo< void > &info) {
	//LOG("in timestep_view set x");
	Isolate *isolate = info.GetIsolate();
	v8::Local<v8::Object> thiz = info.Holder();
	timestep_view *obj = (timestep_view*) v8::Local<v8::External>::Cast(thiz->GetInternalField(0))->Value();

obj->x = value->ToNumber(isolate)->Value();

//LOG("done in timestep_view set x");
}



void timestep_view_get_y(Local<String> property, const PropertyCallbackInfo< Value > &info) {
	//LOG("in timestep_view get y");
	Isolate *isolate = info.GetIsolate();
	v8::Local<v8::Object> thiz = info.Holder();
	timestep_view *obj = (timestep_view*) v8::Local<v8::External>::Cast(thiz->GetInternalField(0))->Value();

double prop = obj->y;
	//LOG("done in timestep_view get y");
	info.GetReturnValue().Set(v8::Number::New(isolate, prop));

}


void timestep_view_set_y(v8::Local<v8::String> property, v8::Local<v8::Value> value, const PropertyCallbackInfo< void > &info) {
	//LOG("in timestep_view set y");
	Isolate *isolate = info.GetIsolate();
	v8::Local<v8::Object> thiz = info.Holder();
	timestep_view *obj = (timestep_view*) v8::Local<v8::External>::Cast(thiz->GetInternalField(0))->Value();

obj->y = value->ToNumber(isolate)->Value();

//LOG("done in timestep_view set y");
}



void timestep_view_get_offsetX(Local<String> property, const PropertyCallbackInfo< Value > &info) {
	//LOG("in timestep_view get offsetX");
	Isolate *isolate = info.GetIsolate();
	v8::Local<v8::Object> thiz = info.Holder();
	timestep_view *obj = (timestep_view*) v8::Local<v8::External>::Cast(thiz->GetInternalField(0))->Value();

double prop = obj->offset_x;
	//LOG("done in timestep_view get offsetX");
	info.GetReturnValue().Set(v8::Number::New(isolate, prop));

}


void timestep_view_set_offsetX(v8::Local<v8::String> property, v8::Local<v8::Value> value, const PropertyCallbackInfo< void > &info) {
	Isolate *isolate = info.GetIsolate();
	//LOG("in timestep_view set offsetX");
	v8::Local<v8::Object> thiz = info.Holder();
	timestep_view *obj = (timestep_view*) v8::Local<v8::External>::Cast(thiz->GetInternalField(0))->Value();

obj->offset_x = value->ToNumber(isolate)->Value();

//LOG("done in timestep_view set offsetX");
}



void timestep_view_get_offsetY(Local<String> property, const PropertyCallbackInfo< Value > &info) {
	Isolate *isolate = info.GetIsolate();
	//LOG("in timestep_view get offsetY");
	v8::Local<v8::Object> thiz = info.Holder();
	timestep_view *obj = (timestep_view*) v8::Local<v8::External>::Cast(thiz->GetInternalField(0))->Value();

double prop = obj->offset_y;
	//LOG("done in timestep_view get offsetY");
	info.GetReturnValue().Set(v8::Number::New(isolate, prop));

}


void timestep_view_set_offsetY(v8::Local<v8::String> property, v8::Local<v8::Value> value, const PropertyCallbackInfo< void > &info) {
	Isolate *isolate = info.GetIsolate();
	//LOG("in timestep_view set offsetY");
	v8::Local<v8::Object> thiz = info.Holder();
	timestep_view *obj = (timestep_view*) v8::Local<v8::External>::Cast(thiz->GetInternalField(0))->Value();

obj->offset_y = value->ToNumber(isolate)->Value();

//LOG("done in timestep_view set offsetY");
}



void timestep_view_get_r(Local<String> property, const PropertyCallbackInfo< Value > &info) {
	Isolate *isolate = info.GetIsolate();
	//LOG("in timestep_view get r");
	v8::Local<v8::Object> thiz = info.Holder();
	timestep_view *obj = (timestep_view*) v8::Local<v8::External>::Cast(thiz->GetInternalField(0))->Value();

double prop = obj->r;
	//LOG("done in timestep_view get r");
	info.GetReturnValue().Set(v8::Number::New(isolate, prop));

}


void timestep_view_set_r(v8::Local<v8::String> property, v8::Local<v8::Value> value, const PropertyCallbackInfo< void > &info) {
	Isolate *isolate = info.GetIsolate();
	//LOG("in timestep_view set r");
	v8::Local<v8::Object> thiz = info.Holder();
	timestep_view *obj = (timestep_view*) v8::Local<v8::External>::Cast(thiz->GetInternalField(0))->Value();

obj->r = value->ToNumber(isolate)->Value();

//LOG("done in timestep_view set r");
}



void timestep_view_get_flipX(Local<String> property, const PropertyCallbackInfo< Value > &info) {
	Isolate *isolate = info.GetIsolate();
	//LOG("in timestep_view get flipX");
	v8::Local<v8::Object> thiz = info.Holder();
	timestep_view *obj = (timestep_view*) v8::Local<v8::External>::Cast(thiz->GetInternalField(0))->Value();

bool prop = obj->flip_x;
	//LOG("done in timestep_view get flipX");
	info.GetReturnValue().Set(v8::Boolean::New(isolate, prop));

}


void timestep_view_set_flipX(v8::Local<v8::String> property, v8::Local<v8::Value> value, const PropertyCallbackInfo< void > &info) {
	Isolate *isolate = info.GetIsolate();
	//LOG("in timestep_view set flipX");
	v8::Local<v8::Object> thiz = info.Holder();
	timestep_view *obj = (timestep_view*) v8::Local<v8::External>::Cast(thiz->GetInternalField(0))->Value();

obj->flip_x = value->ToBoolean(isolate)->Value();

//LOG("done in timestep_view set flipX");
}



void timestep_view_get_flipY(Local<String> property, const PropertyCallbackInfo< Value > &info) {
	Isolate *isolate = info.GetIsolate();
	//LOG("in timestep_view get flipY");
	v8::Local<v8::Object> thiz = info.Holder();
	timestep_view *obj = (timestep_view*) v8::Local<v8::External>::Cast(thiz->GetInternalField(0))->Value();

bool prop = obj->flip_y;
	//LOG("done in timestep_view get flipY");
	info.GetReturnValue().Set(v8::Boolean::New(isolate, prop));

}


void timestep_view_set_flipY(v8::Local<v8::String> property, v8::Local<v8::Value> value, const PropertyCallbackInfo<void > &info) {
	Isolate *isolate = info.GetIsolate();
	//LOG("in timestep_view set flipY");
	v8::Local<v8::Object> thiz = info.Holder();
	timestep_view *obj = (timestep_view*) v8::Local<v8::External>::Cast(thiz->GetInternalField(0))->Value();

obj->flip_y = value->ToBoolean(isolate)->Value();

//LOG("done in timestep_view set flipY");
}



void timestep_view_get_anchorX(Local<String> property, const PropertyCallbackInfo< Value > &info) {
	Isolate *isolate = info.GetIsolate();
	//LOG("in timestep_view get anchorX");
	v8::Local<v8::Object> thiz = info.Holder();
	timestep_view *obj = (timestep_view*) v8::Local<v8::External>::Cast(thiz->GetInternalField(0))->Value();

double prop = obj->anchor_x;
	//LOG("done in timestep_view get anchorX");
	info.GetReturnValue().Set(v8::Number::New(isolate, prop));

}


void timestep_view_set_anchorX(v8::Local<v8::String> property, v8::Local<v8::Value> value, const PropertyCallbackInfo< void > &info) {
	Isolate *isolate = info.GetIsolate();
	//LOG("in timestep_view set anchorX");
	v8::Local<v8::Object> thiz = info.Holder();
	timestep_view *obj = (timestep_view*) v8::Local<v8::External>::Cast(thiz->GetInternalField(0))->Value();

obj->anchor_x = value->ToNumber(isolate)->Value();

//LOG("done in timestep_view set anchorX");
}



void timestep_view_get_anchorY(Local<String> property, const PropertyCallbackInfo< Value > &info) {
	Isolate *isolate = info.GetIsolate();
	//LOG("in timestep_view get anchorY");
	v8::Local<v8::Object> thiz = info.Holder();
	timestep_view *obj = (timestep_view*) v8::Local<v8::External>::Cast(thiz->GetInternalField(0))->Value();

double prop = obj->anchor_y;
	//LOG("done in timestep_view get anchorY");
	info.GetReturnValue().Set(v8::Number::New(isolate, prop));

}


void timestep_view_set_anchorY(v8::Local<v8::String> property, v8::Local<v8::Value> value, const PropertyCallbackInfo< void > &info) {
	Isolate *isolate = info.GetIsolate();
	//LOG("in timestep_view set anchorY");
	v8::Local<v8::Object> thiz = info.Holder();
	timestep_view *obj = (timestep_view*) v8::Local<v8::External>::Cast(thiz->GetInternalField(0))->Value();

obj->anchor_y = value->ToNumber(isolate)->Value();

//LOG("done in timestep_view set anchorY");
}



void timestep_view_get_opacity(Local<String> property, const PropertyCallbackInfo< Value > &info) {
	Isolate *isolate = info.GetIsolate();
	//LOG("in timestep_view get opacity");
	v8::Local<v8::Object> thiz = info.Holder();
	timestep_view *obj = (timestep_view*) v8::Local<v8::External>::Cast(thiz->GetInternalField(0))->Value();

double prop = obj->opacity;
	//LOG("done in timestep_view get opacity");
	info.GetReturnValue().Set(v8::Number::New(isolate, prop));

}





void timestep_view_get_scale(Local<String> property, const PropertyCallbackInfo< Value > &info) {
	Isolate *isolate = info.GetIsolate();
	//LOG("in timestep_view get scale");
	v8::Local<v8::Object> thiz = info.Holder();
	timestep_view *obj = (timestep_view*) v8::Local<v8::External>::Cast(thiz->GetInternalField(0))->Value();

double prop = obj->scale;
	//LOG("done in timestep_view get scale");
	info.GetReturnValue().Set(v8::Number::New(isolate, prop));

}


void timestep_view_set_scale(v8::Local<v8::String> property, v8::Local<v8::Value> value, const PropertyCallbackInfo< void > &info) {
	Isolate *isolate = info.GetIsolate();
	//LOG("in timestep_view set scale");
	v8::Local<v8::Object> thiz = info.Holder();
	timestep_view *obj = (timestep_view*) v8::Local<v8::External>::Cast(thiz->GetInternalField(0))->Value();

obj->scale = value->ToNumber(isolate)->Value();

//LOG("done in timestep_view set scale");
}



void timestep_view_get_scaleX(Local<String> property, const PropertyCallbackInfo< Value > &info) {
	Isolate *isolate = info.GetIsolate();
	//LOG("in timestep_view get scaleX");
	v8::Local<v8::Object> thiz = info.Holder();
	timestep_view *obj = (timestep_view*) v8::Local<v8::External>::Cast(thiz->GetInternalField(0))->Value();

double prop = obj->scale_x;
	//LOG("done in timestep_view get scaleX");
	info.GetReturnValue().Set(v8::Number::New(isolate, prop));

}


void timestep_view_set_scaleX(v8::Local<v8::String> property, v8::Local<v8::Value> value, const PropertyCallbackInfo< void > &info) {
	Isolate *isolate = info.GetIsolate();
	//LOG("in timestep_view set scaleX");
	v8::Local<v8::Object> thiz = info.Holder();
	timestep_view *obj = (timestep_view*) v8::Local<v8::External>::Cast(thiz->GetInternalField(0))->Value();

obj->scale_x = value->ToNumber(isolate)->Value();

//LOG("done in timestep_view set scaleX");
}



void timestep_view_get_scaleY(Local<String> property, const PropertyCallbackInfo< Value > &info) {
	Isolate *isolate = info.GetIsolate();
	//LOG("in timestep_view get scaleY");
	v8::Local<v8::Object> thiz = info.Holder();
	timestep_view *obj = (timestep_view*) v8::Local<v8::External>::Cast(thiz->GetInternalField(0))->Value();

double prop = obj->scale_y;
	//LOG("done in timestep_view get scaleY");
	info.GetReturnValue().Set(v8::Number::New(isolate, prop));

}


void timestep_view_set_scaleY(v8::Local<v8::String> property, v8::Local<v8::Value> value, const PropertyCallbackInfo< void > &info) {
	Isolate *isolate = info.GetIsolate();
	//LOG("in timestep_view set scaleY");
	v8::Local<v8::Object> thiz = info.Holder();
	timestep_view *obj = (timestep_view*) v8::Local<v8::External>::Cast(thiz->GetInternalField(0))->Value();

	obj->scale_y = value->ToNumber(isolate)->Value();

//LOG("done in timestep_view set scaleY");
}



void timestep_view_get_absScale(Local<String> property, const PropertyCallbackInfo< Value > &info) {
	Isolate *isolate = info.GetIsolate();
	//LOG("in timestep_view get absScale");
	v8::Local<v8::Object> thiz = info.Holder();
	timestep_view *obj = (timestep_view*) v8::Local<v8::External>::Cast(thiz->GetInternalField(0))->Value();

double prop = obj->abs_scale;
	//LOG("done in timestep_view get absScale");
	info.GetReturnValue().Set(v8::Number::New(isolate, prop));

}


void timestep_view_set_absScale(v8::Local<v8::String> property, v8::Local<v8::Value> value, const PropertyCallbackInfo< void > &info) {
	Isolate *isolate = info.GetIsolate();
	//LOG("in timestep_view set absScale");
	v8::Local<v8::Object> thiz = info.Holder();
	timestep_view *obj = (timestep_view*) v8::Local<v8::External>::Cast(thiz->GetInternalField(0))->Value();

	obj->abs_scale = value->ToNumber(isolate)->Value();

//LOG("done in timestep_view set absScale");
}



void timestep_view_get_clip(Local<String> property, const PropertyCallbackInfo< Value > &info) {
	Isolate *isolate = info.GetIsolate();
	//LOG("in timestep_view get clip");
	v8::Local<v8::Object> thiz = info.Holder();
	timestep_view *obj = (timestep_view*) v8::Local<v8::External>::Cast(thiz->GetInternalField(0))->Value();

	bool prop = obj->clip;
	//LOG("done in timestep_view get clip");
	info.GetReturnValue().Set(v8::Boolean::New(isolate, prop));

}


void timestep_view_set_clip(v8::Local<v8::String> property, v8::Local<v8::Value> value, const PropertyCallbackInfo< void > &info) {
	Isolate *isolate = info.GetIsolate();
	//LOG("in timestep_view set clip");
	v8::Local<v8::Object> thiz = info.Holder();
	timestep_view *obj = (timestep_view*) v8::Local<v8::External>::Cast(thiz->GetInternalField(0))->Value();

	obj->clip = value->ToBoolean(isolate)->Value();

//LOG("done in timestep_view set clip");
}



void timestep_view_get_backgroundColor(Local<String> property, const PropertyCallbackInfo< Value > &info) {
	Isolate *isolate = info.GetIsolate();
	//LOG("in timestep_view get backgroundColor");
	v8::Local<v8::Object> thiz = info.Holder();
	timestep_view *obj = (timestep_view*) v8::Local<v8::External>::Cast(thiz->GetInternalField(0))->Value();

	rgba prop = obj->background_color;
	char buf[64];
	rgba_to_string(&prop, buf);
	info.GetReturnValue().Set(v8::String::NewFromUtf8(isolate, buf));


}


void timestep_view_set_backgroundColor(v8::Local<v8::String> property, v8::Local<v8::Value> value, const PropertyCallbackInfo< void > &info) {
	Isolate *isolate = info.GetIsolate();
	//LOG("in timestep_view set backgroundColor");
	v8::Local<v8::Object> thiz = info.Holder();
	timestep_view *obj = (timestep_view*) v8::Local<v8::External>::Cast(thiz->GetInternalField(0))->Value();

if (value->IsString()) {
	String::Utf8Value s(isolate, value);
	const char *str = ToCString(s);
	rgba color;
	rgba_parse(&color, str);
	obj->background_color = color;
}


//LOG("done in timestep_view set backgroundColor");
}



void timestep_view_get_visible(Local<String> property, const PropertyCallbackInfo< Value > &info) {
	Isolate *isolate = info.GetIsolate();
	//LOG("in timestep_view get visible");
	v8::Local<v8::Object> thiz = info.Holder();
	timestep_view *obj = (timestep_view*) v8::Local<v8::External>::Cast(thiz->GetInternalField(0))->Value();

bool prop = obj->visible;
	//LOG("done in timestep_view get visible");
	info.GetReturnValue().Set(v8::Boolean::New(isolate, prop));

}


void timestep_view_set_visible(v8::Local<v8::String> property, v8::Local<v8::Value> value, const PropertyCallbackInfo< void > &info) {
	Isolate *isolate = info.GetIsolate();
	//LOG("in timestep_view set visible");
	v8::Local<v8::Object> thiz = info.Holder();
	timestep_view *obj = (timestep_view*) v8::Local<v8::External>::Cast(thiz->GetInternalField(0))->Value();

	obj->visible = value->ToBoolean(isolate)->Value();

//LOG("done in timestep_view set visible");
}



void timestep_view_get_hasJSRender(Local<String> property, const PropertyCallbackInfo< Value > &info) {
	Isolate *isolate = info.GetIsolate();
	//LOG("in timestep_view get hasJSRender");
	v8::Local<v8::Object> thiz = info.Holder();
	timestep_view *obj = (timestep_view*) v8::Local<v8::External>::Cast(thiz->GetInternalField(0))->Value();

bool prop = obj->has_jsrender;
	//LOG("done in timestep_view get hasJSRender");
	info.GetReturnValue().Set(v8::Boolean::New(isolate, prop));

}


void timestep_view_set_hasJSRender(v8::Local<v8::String> property, v8::Local<v8::Value> value, const PropertyCallbackInfo< void > &info) {
	Isolate *isolate = info.GetIsolate();
	//LOG("in timestep_view set hasJSRender");
	v8::Local<v8::Object> thiz = info.Holder();
	timestep_view *obj = (timestep_view*) v8::Local<v8::External>::Cast(thiz->GetInternalField(0))->Value();

	obj->has_jsrender = value->ToBoolean(isolate)->Value();

//LOG("done in timestep_view set hasJSRender");
}



void timestep_view_get_hasJSTick(Local<String> property, const PropertyCallbackInfo< Value > &info) {
	Isolate *isolate = info.GetIsolate();
	//LOG("in timestep_view get hasJSTick");
	v8::Local<v8::Object> thiz = info.Holder();
	timestep_view *obj = (timestep_view*) v8::Local<v8::External>::Cast(thiz->GetInternalField(0))->Value();

bool prop = obj->has_jstick;
	//LOG("done in timestep_view get hasJSTick");
	info.GetReturnValue().Set(v8::Boolean::New(isolate, prop));

}


void timestep_view_set_hasJSTick(v8::Local<v8::String> property, v8::Local<v8::Value> value, const PropertyCallbackInfo< void > &info) {
	Isolate *isolate = info.GetIsolate();
	//LOG("in timestep_view set hasJSTick");
	v8::Local<v8::Object> thiz = info.Holder();
	timestep_view *obj = (timestep_view*) v8::Local<v8::External>::Cast(thiz->GetInternalField(0))->Value();

	obj->has_jstick = value->ToBoolean(isolate)->Value();

//LOG("done in timestep_view set hasJSTick");
}



void timestep_view_get_zIndex(Local<String> property, const PropertyCallbackInfo< Value > &info) {
	Isolate *isolate = info.GetIsolate();
	//LOG("in timestep_view get zIndex");
	v8::Local<v8::Object> thiz = info.Holder();
	timestep_view *obj = (timestep_view*) v8::Local<v8::External>::Cast(thiz->GetInternalField(0))->Value();

int prop = obj->z_index;
	//LOG("done in timestep_view get zIndex");
	info.GetReturnValue().Set(v8::Integer::New(isolate, prop));

}





void timestep_view_get_filterColor(Local<String> property, const PropertyCallbackInfo< Value > &info) {
	Isolate *isolate = info.GetIsolate();
	//LOG("in timestep_view get filterColor");
	v8::Local<v8::Object> thiz = info.Holder();
	timestep_view *obj = (timestep_view*) v8::Local<v8::External>::Cast(thiz->GetInternalField(0))->Value();

	rgba prop = obj->filter_color;
	char buf[64];
	rgba_to_string(&prop, buf);
	info.GetReturnValue().Set(v8::String::NewFromUtf8(isolate, buf));


}


void timestep_view_set_filterColor(v8::Local<v8::String> property, v8::Local<v8::Value> value, const PropertyCallbackInfo< void > &info) {
	Isolate *isolate = info.GetIsolate();
	//LOG("in timestep_view set filterColor");
	v8::Local<v8::Object> thiz = info.Holder();
	timestep_view *obj = (timestep_view*) v8::Local<v8::External>::Cast(thiz->GetInternalField(0))->Value();

if (value->IsString()) {
	String::Utf8Value s(isolate, value);
	const char *str = ToCString(s);
	rgba color;
	rgba_parse(&color, str);
	obj->filter_color = color;
}


//LOG("done in timestep_view set filterColor");
}



void timestep_view_get_filterType(Local<String> property, const PropertyCallbackInfo< Value > &info) {
	Isolate *isolate = info.GetIsolate();
	//LOG("in timestep_view get filterType");
	v8::Local<v8::Object> thiz = info.Holder();
	timestep_view *obj = (timestep_view*) v8::Local<v8::External>::Cast(thiz->GetInternalField(0))->Value();

int prop = obj->filter_type;
	//LOG("done in timestep_view get filterType");
	info.GetReturnValue().Set(v8::Integer::New(isolate, prop));

}


void timestep_view_set_filterType(v8::Local<v8::String> property, v8::Local<v8::Value> value, const PropertyCallbackInfo< void > &info) {
	Isolate *isolate = info.GetIsolate();
	//LOG("in timestep_view set filterType");
	v8::Local<v8::Object> thiz = info.Holder();
	timestep_view *obj = (timestep_view*) v8::Local<v8::External>::Cast(thiz->GetInternalField(0))->Value();

obj->filter_type = value->ToInteger(isolate)->Value();

//LOG("done in timestep_view set filterType");
}



void timestep_view_get_width(Local<String> property, const PropertyCallbackInfo< Value > &info) {
	Isolate *isolate = info.GetIsolate();
	//LOG("in timestep_view get width");
	v8::Local<v8::Object> thiz = info.Holder();
	timestep_view *obj = (timestep_view*) v8::Local<v8::External>::Cast(thiz->GetInternalField(0))->Value();

double prop = obj->width;
	//LOG("done in timestep_view get width");
	info.GetReturnValue().Set(v8::Number::New(isolate, prop));

}


void timestep_view_set_width(v8::Local<v8::String> property, v8::Local<v8::Value> value, const PropertyCallbackInfo< void > &info) {
	Isolate *isolate = info.GetIsolate();
	//LOG("in timestep_view set width");
	v8::Local<v8::Object> thiz = info.Holder();
	timestep_view *obj = (timestep_view*) v8::Local<v8::External>::Cast(thiz->GetInternalField(0))->Value();

obj->width = value->ToNumber(isolate)->Value();

//LOG("done in timestep_view set width");
}








void timestep_view_get_height(Local<String> property, const PropertyCallbackInfo< Value > &info) {
	Isolate *isolate = info.GetIsolate();
	//LOG("in timestep_view get height");
	v8::Local<v8::Object> thiz = info.Holder();
	timestep_view *obj = (timestep_view*) v8::Local<v8::External>::Cast(thiz->GetInternalField(0))->Value();

double prop = obj->height;
	//LOG("done in timestep_view get height");
	info.GetReturnValue().Set(v8::Number::New(isolate, prop));

}


void timestep_view_set_height(v8::Local<v8::String> property, v8::Local<v8::Value> value, const PropertyCallbackInfo< void > &info) {
	Isolate *isolate = info.GetIsolate();
	//LOG("in timestep_view set height");
	v8::Local<v8::Object> thiz = info.Holder();
	timestep_view *obj = (timestep_view*) v8::Local<v8::External>::Cast(thiz->GetInternalField(0))->Value();
	
obj->height = value->ToNumber(isolate)->Value();
	
//LOG("done in timestep_view set height");
}








v8::Local<v8::FunctionTemplate> js_timestep_view_get_template() {
	Isolate *isolate = Isolate::GetCurrent();
	v8::Local<v8::FunctionTemplate> templ = v8::FunctionTemplate::New(isolate);
	v8::Local<v8::ObjectTemplate> timestep_view = templ->InstanceTemplate();
	timestep_view->SetInternalFieldCount(2);
	
void def_timestep_view_constructor(const v8::FunctionCallbackInfo<v8::Value> &args);
	templ->SetCallHandler(def_timestep_view_constructor);



void def_timestep_view_addSubview(const v8::FunctionCallbackInfo<v8::Value> &args);
timestep_view->Set(v8::String::NewFromUtf8(isolate, "addSubview"), v8::FunctionTemplate::New(isolate, def_timestep_view_addSubview));
void def_timestep_view_removeSubview(const v8::FunctionCallbackInfo<v8::Value> &args);
timestep_view->Set(v8::String::NewFromUtf8(isolate, "removeSubview"), v8::FunctionTemplate::New(isolate, def_timestep_view_removeSubview));
void def_timestep_view_getSuperview(const v8::FunctionCallbackInfo<v8::Value> &args);
timestep_view->Set(v8::String::NewFromUtf8(isolate, "getSuperview"), v8::FunctionTemplate::New(isolate, def_timestep_view_getSuperview));
void def_timestep_view_getSubviews(const v8::FunctionCallbackInfo<v8::Value> &args);
timestep_view->Set(v8::String::NewFromUtf8(isolate, "getSubviews"), v8::FunctionTemplate::New(isolate, def_timestep_view_getSubviews));
void def_timestep_view_wrapRender(const v8::FunctionCallbackInfo<v8::Value> &args);
timestep_view->Set(v8::String::NewFromUtf8(isolate, "wrapRender"), v8::FunctionTemplate::New(isolate, def_timestep_view_wrapRender));
void def_timestep_view_wrapTick(const v8::FunctionCallbackInfo<v8::Value> &args);
timestep_view->Set(v8::String::NewFromUtf8(isolate, "wrapTick"), v8::FunctionTemplate::New(isolate, def_timestep_view_wrapTick));
void def_timestep_view_localizePoint(const v8::FunctionCallbackInfo<v8::Value> &args);
timestep_view->Set(v8::String::NewFromUtf8(isolate, "localizePoint"), v8::FunctionTemplate::New(isolate, def_timestep_view_localizePoint));


void timestep_view_get_compositeOperation(Local<String> property, const PropertyCallbackInfo<Value> &info);

void timestep_view_set_compositeOperation(Local<String> property, Local<Value> value, const PropertyCallbackInfo<void> &info);

timestep_view->SetAccessor(v8::String::NewFromUtf8(isolate, "compositeOperation"), timestep_view_get_compositeOperation, timestep_view_set_compositeOperation);

void timestep_view_get_x(Local<String> property, const PropertyCallbackInfo< Value > &info);

void timestep_view_set_x(v8::Local<v8::String> property, v8::Local<v8::Value> value, const PropertyCallbackInfo< void > &info);

timestep_view->SetAccessor(v8::String::NewFromUtf8(isolate, "x"), timestep_view_get_x, timestep_view_set_x);
void timestep_view_get_y(Local<String> property, const PropertyCallbackInfo< Value > &info);

void timestep_view_set_y(v8::Local<v8::String> property, v8::Local<v8::Value> value, const PropertyCallbackInfo< void > &info);

timestep_view->SetAccessor(v8::String::NewFromUtf8(isolate, "y"), timestep_view_get_y, timestep_view_set_y);
void timestep_view_get_offsetX(Local<String> property, const PropertyCallbackInfo< Value > &info);

void timestep_view_set_offsetX(v8::Local<v8::String> property, v8::Local<v8::Value> value, const PropertyCallbackInfo< void > &info);

timestep_view->SetAccessor(v8::String::NewFromUtf8(isolate, "offsetX"), timestep_view_get_offsetX, timestep_view_set_offsetX);
void timestep_view_get_offsetY(Local<String> property, const PropertyCallbackInfo< Value > &info);

void timestep_view_set_offsetY(v8::Local<v8::String> property, v8::Local<v8::Value> value, const PropertyCallbackInfo< void > &info);

timestep_view->SetAccessor(v8::String::NewFromUtf8(isolate, "offsetY"), timestep_view_get_offsetY, timestep_view_set_offsetY);
void timestep_view_get_r(Local<String> property, const PropertyCallbackInfo< Value > &info);

void timestep_view_set_r(v8::Local<v8::String> property, v8::Local<v8::Value> value, const PropertyCallbackInfo< void > &info);

timestep_view->SetAccessor(v8::String::NewFromUtf8(isolate, "r"), timestep_view_get_r, timestep_view_set_r);
void timestep_view_get_flipX(Local<String> property, const PropertyCallbackInfo< Value > &info);

void timestep_view_set_flipX(v8::Local<v8::String> property, v8::Local<v8::Value> value, const PropertyCallbackInfo< void > &info);

timestep_view->SetAccessor(v8::String::NewFromUtf8(isolate, "flipX"), timestep_view_get_flipX, timestep_view_set_flipX);
void timestep_view_get_flipY(Local<String> property, const PropertyCallbackInfo< Value > &info);

void timestep_view_set_flipY(v8::Local<v8::String> property, v8::Local<v8::Value> value, const PropertyCallbackInfo< void > &info);

timestep_view->SetAccessor(v8::String::NewFromUtf8(isolate, "flipY"), timestep_view_get_flipY, timestep_view_set_flipY);
void timestep_view_get_anchorX(Local<String> property, const PropertyCallbackInfo< Value > &info);

void timestep_view_set_anchorX(v8::Local<v8::String> property, v8::Local<v8::Value> value, const PropertyCallbackInfo< void > &info);

timestep_view->SetAccessor(v8::String::NewFromUtf8(isolate, "anchorX"), timestep_view_get_anchorX, timestep_view_set_anchorX);
void timestep_view_get_anchorY(Local<String> property, const PropertyCallbackInfo< Value > &info);

void timestep_view_set_anchorY(v8::Local<v8::String> property, v8::Local<v8::Value> value, const PropertyCallbackInfo< void > &info);

timestep_view->SetAccessor(v8::String::NewFromUtf8(isolate, "anchorY"), timestep_view_get_anchorY, timestep_view_set_anchorY);
void timestep_view_get_opacity(Local<String> property, const PropertyCallbackInfo< Value > &info);

void timestep_view_set_opacity(v8::Local<v8::String> property, v8::Local<v8::Value> value, const PropertyCallbackInfo< void > &info);

timestep_view->SetAccessor(v8::String::NewFromUtf8(isolate, "opacity"), timestep_view_get_opacity, timestep_view_set_opacity);
void timestep_view_get_scale(Local<String> property, const PropertyCallbackInfo< Value > &info);

void timestep_view_set_scale(v8::Local<v8::String> property, v8::Local<v8::Value> value, const PropertyCallbackInfo< void > &info);

timestep_view->SetAccessor(v8::String::NewFromUtf8(isolate, "scale"), timestep_view_get_scale, timestep_view_set_scale);
void timestep_view_get_scaleX(Local<String> property, const PropertyCallbackInfo< Value > &info);

void timestep_view_set_scaleX(v8::Local<v8::String> property, v8::Local<v8::Value> value, const PropertyCallbackInfo< void > &info);

timestep_view->SetAccessor(v8::String::NewFromUtf8(isolate, "scaleX"), timestep_view_get_scaleX, timestep_view_set_scaleX);
void timestep_view_get_scaleY(Local<String> property, const PropertyCallbackInfo< Value > &info);

void timestep_view_set_scaleY(v8::Local<v8::String> property, v8::Local<v8::Value> value, const PropertyCallbackInfo< void > &info);

timestep_view->SetAccessor(v8::String::NewFromUtf8(isolate, "scaleY"), timestep_view_get_scaleY, timestep_view_set_scaleY);
void timestep_view_get_absScale(Local<String> property, const PropertyCallbackInfo< Value > &info);

void timestep_view_set_absScale(v8::Local<v8::String> property, v8::Local<v8::Value> value, const PropertyCallbackInfo< void > &info);

timestep_view->SetAccessor(v8::String::NewFromUtf8(isolate, "absScale"), timestep_view_get_absScale, timestep_view_set_absScale);
void timestep_view_get_clip(Local<String> property, const PropertyCallbackInfo< Value > &info);

void timestep_view_set_clip(v8::Local<v8::String> property, v8::Local<v8::Value> value, const PropertyCallbackInfo<void > &info);

timestep_view->SetAccessor(v8::String::NewFromUtf8(isolate, "clip"), timestep_view_get_clip, timestep_view_set_clip);
void timestep_view_get_backgroundColor(Local<String> property, const PropertyCallbackInfo< Value > &info);

void timestep_view_set_backgroundColor(v8::Local<v8::String> property, v8::Local<v8::Value> value, const PropertyCallbackInfo< void > &info);

timestep_view->SetAccessor(v8::String::NewFromUtf8(isolate, "backgroundColor"), timestep_view_get_backgroundColor, timestep_view_set_backgroundColor);
void timestep_view_get_visible(Local<String> property, const PropertyCallbackInfo< Value > &info);

void timestep_view_set_visible(v8::Local<v8::String> property, v8::Local<v8::Value> value, const PropertyCallbackInfo< void > &info);

timestep_view->SetAccessor(v8::String::NewFromUtf8(isolate, "visible"), timestep_view_get_visible, timestep_view_set_visible);
void timestep_view_get_hasJSRender(Local<String> property, const PropertyCallbackInfo< Value > &info);

void timestep_view_set_hasJSRender(v8::Local<v8::String> property, v8::Local<v8::Value> value, const PropertyCallbackInfo< void > &info);

timestep_view->SetAccessor(v8::String::NewFromUtf8(isolate, "hasJSRender"), timestep_view_get_hasJSRender, timestep_view_set_hasJSRender);
void timestep_view_get_hasJSTick(Local<String> property, const PropertyCallbackInfo< Value > &info);

void timestep_view_set_hasJSTick(v8::Local<v8::String> property, v8::Local<v8::Value> value, const PropertyCallbackInfo< void > &info);

timestep_view->SetAccessor(v8::String::NewFromUtf8(isolate, "hasJSTick"), timestep_view_get_hasJSTick, timestep_view_set_hasJSTick);
void timestep_view_get_zIndex(Local<String> property, const PropertyCallbackInfo< Value > &info);

void timestep_view_set_zIndex(v8::Local<v8::String> property, v8::Local<v8::Value> value, const PropertyCallbackInfo< void > &info);

timestep_view->SetAccessor(v8::String::NewFromUtf8(isolate, "zIndex"), timestep_view_get_zIndex, timestep_view_set_zIndex);
void timestep_view_get_filterColor(Local<String> property, const PropertyCallbackInfo< Value > &info);

void timestep_view_set_filterColor(v8::Local<v8::String> property, v8::Local<v8::Value> value, const PropertyCallbackInfo< void > &info);

timestep_view->SetAccessor(v8::String::NewFromUtf8(isolate, "filterColor"), timestep_view_get_filterColor, timestep_view_set_filterColor);
void timestep_view_get_filterType(Local<String> property, const PropertyCallbackInfo< Value > &info);

void timestep_view_set_filterType(v8::Local<v8::String> property, v8::Local<v8::Value> value, const PropertyCallbackInfo< void > &info);

timestep_view->SetAccessor(v8::String::NewFromUtf8(isolate, "filterType"), timestep_view_get_filterType, timestep_view_set_filterType);
void timestep_view_get_width(Local<String> property, const PropertyCallbackInfo< Value > &info);

void timestep_view_set_width(v8::Local<v8::String> property, v8::Local<v8::Value> value, const PropertyCallbackInfo< void > &info);

timestep_view->SetAccessor(v8::String::NewFromUtf8(isolate, "width"), timestep_view_get_width, timestep_view_set_width);
void timestep_view_get__width(Local<String> property, const PropertyCallbackInfo< Value > &info);

void timestep_view_set__width(v8::Local<v8::String> property, v8::Local<v8::Value> value, const PropertyCallbackInfo< void > &info);

timestep_view->SetAccessor(v8::String::NewFromUtf8(isolate, "_width"), timestep_view_get__width, timestep_view_set__width);
void timestep_view_get_height(Local<String> property, const PropertyCallbackInfo< Value > &info);

void timestep_view_set_height(v8::Local<v8::String> property, v8::Local<v8::Value> value, const PropertyCallbackInfo< void > &info);

timestep_view->SetAccessor(v8::String::NewFromUtf8(isolate, "height"), timestep_view_get_height, timestep_view_set_height);
void timestep_view_get__height(Local<String> property, const PropertyCallbackInfo< Value > &info);

void timestep_view_set__height(v8::Local<v8::String> property, v8::Local<v8::Value> value, const PropertyCallbackInfo< void > &info);

timestep_view->SetAccessor(v8::String::NewFromUtf8(isolate, "_height"), timestep_view_get__height, timestep_view_set__height);



return templ;
}
