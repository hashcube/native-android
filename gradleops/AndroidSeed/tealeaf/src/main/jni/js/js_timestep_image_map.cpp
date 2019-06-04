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
#include "js/js_timestep_view.h"
#include "js/js_timestep_image_map.h"
#include "timestep/timestep_view.h"
#include "timestep/timestep_image_map.h"

#include "include/v8.h"
using namespace v8;

static void image_map_finalize(const v8::WeakCallbackInfo<timestep_image_map> &data) {
LOGDEBUG("{jsdebug} METHOD CALLED %d ", 2);

    timestep_image_map *map = static_cast<timestep_image_map*>( data.GetParameter() );
    //timestep_image_delete(map);
    delete(map);
}

void def_timestep_image_map_constructor(const v8::FunctionCallbackInfo<v8::Value> &args) {
    Isolate *isolate = getIsolate();
    int arg_length = args.Length();
    Handle<Object> thiz = Handle<Object>::Cast(args.This());

    timestep_image_map *map = timestep_image_map_init();
    Local<External> m = External::New(isolate, map);
    thiz->SetInternalField(0, m);

    map->x = args[1]->NumberValue(isolate->GetCurrentContext()).ToChecked();
    map->y = args[2]->NumberValue(isolate->GetCurrentContext()).ToChecked();
    map->width = args[3]->NumberValue(isolate->GetCurrentContext()).ToChecked();
    map->height = args[4]->NumberValue(isolate->GetCurrentContext()).ToChecked();

    // to support both marcus-spritemaps (TM) as well as
    // normal old style image maps (those that don't have explicit margins),
    // check the argument length.  If there are only 6 arguments, there are not
    // specified margins.  Set them to 0.
    Handle<Value> url_val;
    if (arg_length == 6) {
        url_val = args[5];
        map->margin_top = 0;
        map->margin_right = 0;
        map->margin_bottom = 0;
        map->margin_left = 0;
    } else {
        url_val = args[9];
        map->margin_top = args[5]->NumberValue(isolate->GetCurrentContext()).ToChecked();
        map->margin_right = args[6]->NumberValue(isolate->GetCurrentContext()).ToChecked();
        map->margin_bottom = args[7]->NumberValue(isolate->GetCurrentContext()).ToChecked();
        map->margin_left = args[8]->NumberValue(isolate->GetCurrentContext()).ToChecked();
    }

    // WARNING: must not forget to free this at some point
    String::Utf8Value str(isolate, url_val);
    map->url = strdup(ToCString(str));

    Persistent<Object> ref(isolate, thiz);
    //ref.SetWeak(map, image_map_finalize, v8::WeakCallbackType::kParameter);

    args.GetReturnValue().Set(thiz);
}


