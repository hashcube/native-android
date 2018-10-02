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
#include "js_textbox.h"
#include "platform/textbox.h"
#include <stdlib.h> // pulls in declaration of malloc, free
#include <string.h> // pulls in declaration for strlen.

#include <string.h>

using namespace v8;

const char* types[] = {
    "text",				// TYPE_CLASS_TEXT
    "search",			// TYPE_CLASS_TEXT|TYPE_TEXT_FLAG_AUTO_CORRECT
    "tel",				// TYPE_CLASS_PHONE
    "url",				// TYPE_CLASS_TEXT|TYPE_TEXT_VARIATION_URI
    "email",			// TYPE_CLASS_TEXT|TYPE_TEXT_VARIATION_EMAIL_ADDRESS
    "password",			// TYPE_CLASS_TEXT|TYPE_TEXT_VARIATION_PASSWORD
    "datetime",			// TYPE_CLASS_DATETIME
    "date",				// TYPE_CLASS_DATETIME|TYPE_DATETIME_VARIATION_DATE
    "time",				// TYPE_CLASS_DATETIME|TYPE_DATETIME_VARIATION_TIME
    "number",			// TYPE_CLASS_NUMBER
    "range"				// TYPE_CLASS_NUMBER
};

int types_int[] = {
    // See: http://developer.android.com/reference/android/text/InputType.html for these values
    0x0001,
    0x8001,
    0x0003,
    0x0011,
    0x0021,
    0x0081,
    0x0004,
    0x0014,
    0x0024,
    0x0002,
    0x0002
};

void js_textbox_create(const v8::FunctionCallbackInfo<v8::Value> &args) {
    Isolate *isolate = args.GetIsolate();
    int id = -1;
    if(args.Length() >= 5) {
        String::Utf8Value str(isolate, args[4]);
        id = textbox_create_init(args[0]->Int32Value(isolate->GetCurrentContext()).ToChecked(), args[1]->Int32Value(isolate->GetCurrentContext()).ToChecked(), args[2]->Int32Value(isolate->GetCurrentContext()).ToChecked(), args[3]->Int32Value(isolate->GetCurrentContext()).ToChecked(), ToCString(str));
    } else {
        id = textbox_create_new();
    }

    args.GetReturnValue().Set(Integer::New(isolate, id));
}

void js_textbox_destroy(const v8::FunctionCallbackInfo<v8::Value> &args) {
    Isolate *isolate = args.GetIsolate();
    textbox_destroy(args[0]->Int32Value(isolate->GetCurrentContext()).ToChecked());
}

void js_textbox_show(const v8::FunctionCallbackInfo<v8::Value> &args) {
    Isolate *isolate = args.GetIsolate();
    textbox_show(args[0]->Int32Value(isolate->GetCurrentContext()).ToChecked());
}

void js_textbox_hide(const v8::FunctionCallbackInfo<v8::Value> &args) {
    Isolate *isolate = args.GetIsolate();
    textbox_hide(args[0]->Int32Value(isolate->GetCurrentContext()).ToChecked());
}

void js_textbox_set_position(const v8::FunctionCallbackInfo<v8::Value> &args) {
    Isolate *isolate = args.GetIsolate();
    textbox_set_position(args[0]->Int32Value(isolate->GetCurrentContext()).ToChecked(), args[1]->Int32Value(isolate->GetCurrentContext()).ToChecked(), args[2]->Int32Value(isolate->GetCurrentContext()).ToChecked(), args[3]->Int32Value(isolate->GetCurrentContext()).ToChecked(), args[4]->Int32Value(isolate->GetCurrentContext()).ToChecked());
}

void js_textbox_set_dimensions(const v8::FunctionCallbackInfo<v8::Value> &args) {
    Isolate *isolate = args.GetIsolate();
    textbox_set_dimensions(args[0]->Int32Value(isolate->GetCurrentContext()).ToChecked(), args[1]->Int32Value(isolate->GetCurrentContext()).ToChecked(), args[2]->Int32Value(isolate->GetCurrentContext()).ToChecked());
}

void js_textbox_set_x(const v8::FunctionCallbackInfo<v8::Value> &args) {
    Isolate *isolate = args.GetIsolate();
    textbox_set_x(args[0]->Int32Value(isolate->GetCurrentContext()).ToChecked(), args[1]->Int32Value(isolate->GetCurrentContext()).ToChecked());
}

void js_textbox_set_y(const v8::FunctionCallbackInfo<v8::Value> &args) {
    Isolate *isolate = args.GetIsolate();
    textbox_set_y(args[0]->Int32Value(isolate->GetCurrentContext()).ToChecked(), args[1]->Int32Value(isolate->GetCurrentContext()).ToChecked());
}

void js_textbox_set_width(const v8::FunctionCallbackInfo<v8::Value> &args) {
    Isolate *isolate = args.GetIsolate();
    textbox_set_width(args[0]->Int32Value(isolate->GetCurrentContext()).ToChecked(), args[1]->Int32Value(isolate->GetCurrentContext()).ToChecked());
}

void js_textbox_set_height(const v8::FunctionCallbackInfo<v8::Value> &args) {
    Isolate *isolate = args.GetIsolate();
    textbox_set_height(args[0]->Int32Value(isolate->GetCurrentContext()).ToChecked(), args[1]->Int32Value(isolate->GetCurrentContext()).ToChecked());
}


void s_textbox_set_value(const v8::FunctionCallbackInfo<v8::Value> &args) {
    Isolate *isolate = args.GetIsolate();
    String::Utf8Value value(isolate, args[1]);
    textbox_set_value(args[0]->Int32Value(isolate->GetCurrentContext()).ToChecked(), ToCString(value));
}

void js_textbox_set_opacity(const v8::FunctionCallbackInfo<v8::Value> &args) {
    Isolate *isolate = args.GetIsolate();
    textbox_set_opacity(args[0]->Int32Value(isolate->GetCurrentContext()).ToChecked(), (float)(args[1]->NumberValue(isolate->GetCurrentContext()).ToChecked()));
}

void js_textbox_set_type(const v8::FunctionCallbackInfo<v8::Value> &args) {
    Isolate *isolate = args.GetIsolate();
    String::Utf8Value value(isolate, args[1]);
    const char* val = ToCString(value);
    int type = 1;
    // XXX HACK: there are 11 entries in types and types_int
    for(int i = 0; i < 11; i++) {
        if(strcasestr(val, types[i]) == 0) {
            type = types_int[i];
            break;
        }
    }
    textbox_set_type(args[0]->Int32Value(isolate->GetCurrentContext()).ToChecked(), type);
}

void js_textbox_set_visible(const v8::FunctionCallbackInfo<v8::Value> &args) {
    Isolate *isolate = args.GetIsolate();
    textbox_set_visible(args[0]->Int32Value(isolate->GetCurrentContext()).ToChecked(), args[1]->BooleanValue(isolate));
}


void js_textbox_get_x(const v8::FunctionCallbackInfo<v8::Value> &args) {
    Isolate *isolate = args.GetIsolate();
    args.GetReturnValue().Set(Integer::New(isolate, textbox_get_x(args[0]->Int32Value(isolate->GetCurrentContext()).ToChecked())));
}

void js_textbox_get_y(const v8::FunctionCallbackInfo<v8::Value> &args) {
    Isolate *isolate = args.GetIsolate();
    args.GetReturnValue().Set(Integer::New(isolate, textbox_get_y(args[0]->Int32Value(isolate->GetCurrentContext()).ToChecked())));
}

void js_textbox_get_width(const v8::FunctionCallbackInfo<v8::Value> &args) {
    Isolate *isolate = args.GetIsolate();
    args.GetReturnValue().Set(Integer::New(isolate, textbox_get_width(args[0]->Int32Value(isolate->GetCurrentContext()).ToChecked())));
}

void js_textbox_get_height(const v8::FunctionCallbackInfo<v8::Value> &args) {
    Isolate *isolate = args.GetIsolate();
    args.GetReturnValue().Set(Integer::New(isolate, textbox_get_height(args[0]->Int32Value(isolate->GetCurrentContext()).ToChecked())));
}

void js_textbox_set_value(const v8::FunctionCallbackInfo<v8::Value> &args) {
    Isolate *isolate = args.GetIsolate();
    String::Utf8Value value(isolate, args[1]);
    textbox_set_value(args[0]->Int32Value(isolate->GetCurrentContext()).ToChecked(), ToCString(value));
}

void js_textbox_get_value(const v8::FunctionCallbackInfo<v8::Value> &args) {
    Isolate *isolate = args.GetIsolate();
    const char *value = textbox_get_value(args[0]->Int32Value(isolate->GetCurrentContext()).ToChecked());
    Local<String> v8value = String::NewFromUtf8(isolate, value);
    free((void*)value);
    args.GetReturnValue().Set(v8value);
}

void js_textbox_get_opacity(const v8::FunctionCallbackInfo<v8::Value> &args) {
    Isolate *isolate = args.GetIsolate();
    args.GetReturnValue().Set(Number::New(isolate, textbox_get_opacity(args[0]->Int32Value(isolate->GetCurrentContext()).ToChecked())));
}

void js_textbox_get_type(const v8::FunctionCallbackInfo<v8::Value> &args) {
    Isolate *isolate = args.GetIsolate();
    args.GetReturnValue().Set(Integer::New(isolate, textbox_get_type(args[0]->Int32Value(isolate->GetCurrentContext()).ToChecked())));
}

void js_textbox_get_visible(const v8::FunctionCallbackInfo<v8::Value> &args) {
    Isolate *isolate = args.GetIsolate();
    args.GetReturnValue().Set(Boolean::New(isolate, textbox_get_visible(args[0]->Int32Value(isolate->GetCurrentContext()).ToChecked())));
}


Local<ObjectTemplate> js_textbox_get_template() {
    Isolate *isolate = Isolate::GetCurrent();
    // TODO: some day, turn this into a real class instead
    Handle<ObjectTemplate> tmpl = ObjectTemplate::New(isolate);

    tmpl->Set(STRING_CACHE_create.Get(isolate), FunctionTemplate::New(isolate, js_textbox_create));
    tmpl->Set(STRING_CACHE_destroy.Get(isolate), FunctionTemplate::New(isolate, js_textbox_destroy));
    tmpl->Set(STRING_CACHE_show.Get(isolate), FunctionTemplate::New(isolate, js_textbox_show));
    tmpl->Set(STRING_CACHE_hide.Get(isolate), FunctionTemplate::New(isolate, js_textbox_hide));

    tmpl->Set(STRING_CACHE_setPosition.Get(isolate), FunctionTemplate::New(isolate, js_textbox_set_position));
    tmpl->Set(STRING_CACHE_setDimensions.Get(isolate), FunctionTemplate::New(isolate, js_textbox_set_dimensions));
    tmpl->Set(STRING_CACHE_setValue.Get(isolate), FunctionTemplate::New(isolate, js_textbox_set_value));
    tmpl->Set(STRING_CACHE_setOpacity.Get(isolate), FunctionTemplate::New(isolate, js_textbox_set_opacity));
    tmpl->Set(STRING_CACHE_setType.Get(isolate), FunctionTemplate::New(isolate, js_textbox_set_type));
    tmpl->Set(STRING_CACHE_setVisible.Get(isolate), FunctionTemplate::New(isolate, js_textbox_set_visible));

    tmpl->Set(STRING_CACHE_getX.Get(isolate), FunctionTemplate::New(isolate, js_textbox_get_x));
    tmpl->Set(STRING_CACHE_getY.Get(isolate), FunctionTemplate::New(isolate, js_textbox_get_y));
    tmpl->Set(STRING_CACHE_getWidth.Get(isolate), FunctionTemplate::New(isolate, js_textbox_get_width));
    tmpl->Set(STRING_CACHE_getHeight.Get(isolate), FunctionTemplate::New(isolate, js_textbox_get_height));
    tmpl->Set(STRING_CACHE_getValue.Get(isolate), FunctionTemplate::New(isolate, js_textbox_get_value));
    tmpl->Set(STRING_CACHE_getOpacity.Get(isolate), FunctionTemplate::New(isolate, js_textbox_get_opacity));
    tmpl->Set(STRING_CACHE_getType.Get(isolate), FunctionTemplate::New(isolate, js_textbox_get_type));
    tmpl->Set(STRING_CACHE_getVisible.Get(isolate), FunctionTemplate::New(isolate, js_textbox_get_visible));

    return tmpl;
}
