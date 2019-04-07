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
#include "js/js_input.h"
#include "platform/input_prompt.h"
#include "include/v8.h"
using namespace v8;

void js_input_open_prompt(const v8::FunctionCallbackInfo<v8::Value> &args) {
    Isolate *isolate = getIsolate();
    String::Utf8Value title_str(isolate, args[0]);
    String::Utf8Value message_str(isolate, args[1]);
    String::Utf8Value ok_str(isolate, args[2]);
    String::Utf8Value cancel_str(isolate, args[3]);
    String::Utf8Value value_str(isolate, args[4]);

    bool auto_show_keyboard = args[5]->BooleanValue(getIsolate());
    bool is_password = args[6]->BooleanValue(getIsolate());

    const char *title = ToCString(title_str);
    const char *message = ToCString(message_str);
    const char *value = ToCString(value_str);
    const char *okText = ToCString(ok_str);
    const char *cancelText = ToCString(cancel_str);

    int id = input_open_prompt(title, message, okText, cancelText, value, auto_show_keyboard, is_password);
    args.GetReturnValue().Set(Number::New(isolate, id));
}

void js_input_show_keyboard(const v8::FunctionCallbackInfo<v8::Value> &args) {
    Isolate *isolate = getIsolate();
    String::Utf8Value curr_val_str(isolate, args[0]);
    String::Utf8Value hint_str(isolate, args[1]);
    bool has_backward = args[2]->BooleanValue(getIsolate());
    bool has_forward = args[3]->BooleanValue(getIsolate());
    String::Utf8Value input_type_str(isolate, args[4]);
    String::Utf8Value input_return_button_str(isolate, args[5]);
    int max_length = args[6]->Int32Value(isolate->GetCurrentContext()).ToChecked();
    int cursorPos = args[7]->Int32Value(isolate->GetCurrentContext()).ToChecked();

    const char *curr_val = ToCString(curr_val_str);
    const char *hint = ToCString(hint_str);
    const char *input_type = ToCString(input_type_str);
    const char *input_return_button = ToCString(input_return_button_str);

    input_show_keyboard(curr_val, hint, has_backward, has_forward, input_type, input_return_button, max_length, cursorPos);
}

void js_input_hide_keyboard(const v8::FunctionCallbackInfo<v8::Value> &args) {
    input_hide_keyboard();
}

Local<ObjectTemplate> js_input_get_template(Isolate *isolate) {
    Handle<ObjectTemplate> input = ObjectTemplate::New(isolate);
    input->Set(STRING_CACHE_open_prompt.Get(isolate), FunctionTemplate::New(isolate, js_input_open_prompt));
    input->Set(STRING_CACHE_show_keyboard.Get(isolate), FunctionTemplate::New(isolate, js_input_show_keyboard));
    input->Set(STRING_CACHE_hide_keyboard.Get(isolate), FunctionTemplate::New(isolate, js_input_hide_keyboard));
    return input;
}

