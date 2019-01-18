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

#include "js/js_status_bar.h"
#include "platform/status_bar.h"

#include "include/v8.h"
using namespace v8;

void js_status_bar_show(const v8::FunctionCallbackInfo<v8::Value> &args) {
    status_bar_show();
}

void js_status_bar_hide(const v8::FunctionCallbackInfo<v8::Value> &args) {
    status_bar_hide();
}

Handle<ObjectTemplate> js_status_bar_get_template(Isolate *isolate) {
    Handle<ObjectTemplate> status_bar = ObjectTemplate::New(isolate);
    status_bar->Set(STRING_CACHE_show_status_bar.Get(isolate), FunctionTemplate::New(isolate, js_status_bar_show));
    status_bar->Set(STRING_CACHE_hide_status_bar.Get(isolate), FunctionTemplate::New(isolate, js_status_bar_hide));
    status_bar->Set(STRING_CACHE_status_bar_height.Get(isolate), Integer::New(isolate, status_bar_get_height()), ReadOnly);
    return status_bar;
}

