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
#include "js/js_animate.h"
#include "js/js_image_map.h"
#include "js/js_timestep_events.h"
#include "js/js.h"
#include "timestep/timestep_view.h"
#include "timestep/timestep_image_map.h"
#include "js/js_context.h"
#include "core/log.h"
#include <math.h>
#include <typeinfo>
#include "gen/js_timestep_image_map_template.gen.h"
#include "gen/js_timestep_view_template.gen.h"
#include <string>
#include <typeinfo>

#include <iostream>
#include <string>
#include <typeinfo>


#include "include/v8.h"
using namespace v8;



#define GET_IMAGE_MAP(thiz) (timestep_image_map*) Local<External>::Cast(thiz->GetInternalField(0))->Value()
#define GET_TIMESTEP_VIEW(thiz) (timestep_view*) Local<External>::Cast(thiz->GetInternalField(0))->Value()
#define GET_JS_WRAPPER_VIEW(v) Handle<Object>::Cast(v->GetInternalField(1))

//#define VIEW_LEAKS /* Uncomment this to print out allocated view count to get visibility into JS leaks */
#ifdef VIEW_LEAKS
static int backing_count = 0;
static int frontend_count = 0;
#endif
/* Moved to weakCallbackForFrontend
// View front-end finalizer
static void cb_js_finalize(Persistent<Value> ctx, void *param) {
    Isolate *isolate = Isolate::GetCurrent();
    HandleScope handle_scope(isolate);

    // Get object _view reference to backing from front-end view object
    Local<Value> _view = STRING_CACHE___view.Get(isolate);


    // If the reference has not been cleared,
    if (_view->IsObject()) {
        Local<External> wrap = Local<External>::Cast(Handle<Object>::Cast(_view)->GetInternalField(0));
        void* ptr = wrap->Value();
        timestep_view *view = static_cast<timestep_view*>(ptr);

        if (view) {
            // LOOK: This assumes that js_view is never modified after the view is created
            view->js_view.Get(isolate).Clear();
        }
    } else {
        // Should never happen because we have the __view reference
        LOG("{view} ERROR: Front-end not found in backing finalizer!");
    }

    ctx.Reset();

#ifdef VIEW_LEAKS
    --frontend_count;
    LOG("{view} WARNING: View front count = %d", frontend_count);
#endif
}*/

static void weakCallbackForFrontend(const v8::WeakCallbackInfo<timestep_view> &data) {
    Isolate *isolate = data.GetIsolate();
    HandleScope handle_scope(isolate);

    // Get object _view reference to backing from front-end view object
    Local<Value> _view = STRING_CACHE___view.Get(isolate);


    // If the reference has not been cleared,
    if (_view->IsObject()) {
        Local<External> wrap = Local<External>::Cast(Handle<Object>::Cast(_view)->GetInternalField(0));
        void* ptr = wrap->Value();
        timestep_view *view = static_cast<timestep_view*>(ptr);

        if (view) {
            // LOOK: This assumes that js_view is never modified after the view is created
            view->js_view.Get(isolate).Clear();
        }
    } else {
        // Should never happen because we have the __view reference
        LOG("{view} ERROR: Front-end not found in backing finalizer!");
    }


#ifdef VIEW_LEAKS
    --frontend_count;
    LOG("{view} WARNING: View front count = %d", frontend_count);
#endif
    delete data.GetParameter();
}
/* Moved to  weakCallbackForTimestepHolder
// View backing finalizer
static void js_view_finalize(Persistent<Value> ctx, void *param) {
    ??? isolate
    HandleScope handle_scope(isolate);

    timestep_view *view = static_cast<timestep_view*>( param );
    if (view) {
        timestep_view_delete(view);
    }

    ctx.Reset();

#ifdef VIEW_LEAKS
    --backing_count;
    LOG("{view} WARNING: View backing count = %d", backing_count);
#endif
}*/


static void weakCallbackForTimestepHolder(const v8::WeakCallbackInfo<timestep_view> &data) {
    Isolate *isolate = data.GetIsolate();
    HandleScope handle_scope(isolate);

    timestep_view *view = static_cast<timestep_view*>( data.GetParameter() );
    if (view) {
        timestep_view_delete(view);
    }

#ifdef VIEW_LEAKS
    --backing_count;
    LOG("{view} WARNING: View backing count = %d", backing_count);
#endif
    delete data.GetParameter();
}

static void js_image_view_set_image(const v8::FunctionCallbackInfo<v8::Value> &args) {
    Isolate *isolate = args.GetIsolate();
    timestep_view *view = GET_TIMESTEP_VIEW(args[0]->ToObject(isolate));
    if (view) {
        timestep_image_map *map = GET_IMAGE_MAP(args[1]->ToObject(isolate));
        if (map) {
            // Clear old reference
            if (!view->map_ref.IsEmpty()) {
                view->map_ref.Reset();
            }
            view->map_ref.Reset(isolate, args[1]->ToObject(isolate));
            view->view_data = map;
        }
    }
}

static void js_timestep_image_view_render(const v8::FunctionCallbackInfo<v8::Value> &args) {
    Isolate *isolate = args.GetIsolate();
    timestep_view *view = GET_TIMESTEP_VIEW(args.This());
    if (view) {
        view->timestep_view_render(view, GET_CONTEXT2D_FROM(args[0]->ToObject(isolate)));
    }
}

Local<ObjectTemplate> js_timestep_get_template(Isolate *isolate) {
    Handle<ObjectTemplate> timestep_template = ObjectTemplate::New(isolate);
    timestep_template->Set(String::NewFromUtf8(isolate,"View"), js_timestep_view_get_template(isolate));
    timestep_template->Set(String::NewFromUtf8(isolate,"Animator"), get_animate_class(isolate));
    timestep_template->Set(String::NewFromUtf8(isolate,"ImageMap"), js_timestep_image_map_get_template(isolate));
    timestep_template->Set(String::NewFromUtf8(isolate,"setImageOnImageView"), FunctionTemplate::New(isolate, js_image_view_set_image));
    timestep_template->Set(String::NewFromUtf8(isolate,"getEvents"), FunctionTemplate::New(isolate, js_timestep_events_get));
    timestep_template->Set(String::NewFromUtf8(isolate,"_imageViewRender"), FunctionTemplate::New(isolate, js_timestep_image_view_render));
    return timestep_template;
}

// This is the constructor for the view backing
void def_timestep_view_constructor(const v8::FunctionCallbackInfo<v8::Value> &args) {
    Isolate *isolate = getIsolate();
    Handle<Object> thiz = args.Holder();
    // Todo 1: verify, was here: Local<Context> context = Context::New(isolate);
    Local<Context> contextIsolate = isolate->GetCurrentContext();
    // Todo 2: remove redundant context after todo 3
    Local<Context> context = getContext();
#ifdef VIEW_LEAKS
    ++frontend_count;
    ++backing_count;
    LOG("{view} WARNING: View front count = %d, backing count = %d", frontend_count, backing_count);
#endif

    
    // Create an internal C object and attach it to the view backing
    timestep_view *view = timestep_view_init();
    view->js_view.Reset(isolate, args[0]->ToObject(isolate));
    Handle<Object> js_view = view->js_view.Get(isolate);
    // todo 3: verify if paramter js_view is correct one for 1st argument, check reference chain to verify every object refers each other correctly and make sure main object is correctly removed or garbage collected
    view->js_view.SetWeak(view, weakCallbackForFrontend, v8::WeakCallbackType::kParameter);
    thiz->SetInternalField(0, External::New(isolate, view));
    thiz->SetInternalField(1, js_view);

    // Track the lifetime of the view backing
    Persistent<Object> ref(isolate, thiz);
    ref.SetWeak(view, weakCallbackForTimestepHolder, v8::WeakCallbackType::kParameter);

     
    // Add an internal C reference to the front-end view object in the view backing (old v8)
    // Todo 4 : remove this line, move above comment to appropriate place
    //view->js_view = js_view;
   
/* Testing properties loop
    v8::Local<v8::Array> propertyNames;
    js_view->GetPropertyNames(context).ToLocal(&propertyNames);
    MaybeLocal<Array> maybeProperties = js_view->GetPropertyNames(context);

    if(!maybeProperties.IsEmpty()){
        Handle<Array> properties = maybeProperties.ToLocalChecked();
        if( !properties.IsEmpty() && properties->IsArray() && properties->Length()>0){

            int propsSize = properties->Length();

            LOG("Properties NOT empty and size: %d", propsSize);
            if (propsSize < 200) {
                for (int i = 0; i < propsSize; ++i) {
                    LOG("property Index is: %d", i);

                    Local<Value> pname = propertyNames->Get(i);
                    Local<String> pNameStr = Local<String>::Cast(pname);
                    String::Utf8Value str2(isolate, pNameStr);
                    LOG("Property name is: %s", ToCString(str2));
                }
            }
        }
        else {
            LOG("%s", "Properties are empty");
        }
    }
    else {
        LOG("%s", "Maybe properties are empty");
    }
*/

    Handle<Value> render = js_view->GetRealNamedPropertyInPrototypeChain(context, Local<Name>::Cast(STRING_CACHE_render.Get(isolate))).ToLocalChecked();

    bool has_js_render = false;
    if (!render.IsEmpty() && render->IsFunction()) {
        Handle<Value> type = render->ToObject(isolate)->Get(context, STRING_CACHE_HAS_NATIVE_IMPL.Get(isolate)).ToLocalChecked();
        has_js_render = !type->IsBoolean() || !type->BooleanValue();
    }

    view->has_jsrender = has_js_render;

    Handle<Value> tick = js_view->GetRealNamedPropertyInPrototypeChain(context, STRING_CACHE_tick.Get(isolate)).ToLocalChecked();
    view->has_jstick = !tick.IsEmpty() && tick->IsFunction();

    unsigned int type = js_view->GetRealNamedPropertyInPrototypeChain(context, STRING_CACHE___type.Get(isolate)).ToLocalChecked()->Int32Value(isolate->GetCurrentContext()).ToChecked();

    timestep_view_set_type(view, type);
}

void timestep_view_set_compositeOperation (Local<String> property, Local<Value> value, const PropertyCallbackInfo< void > &info) {
    Isolate *isolate = info.GetIsolate();
    Local<Object> thiz = info.Holder();
    timestep_view *view = GET_TIMESTEP_VIEW(thiz);

    if (!value->IsString()) {
        view->composite_operation = 0;
    } else {
        String::Utf8Value str(isolate, value);
        const char *code = ToCString(str);

        int op = 0;
        if (code[0] == 'l') {
            op = 1345;
        } else if (code[0] == 'x') {
            op = 1346;
        } else if (code[0] == 'c') {
            op = 1347;
        } else if (code[0] == 's') {
            if (0 == strcmp(code, "source-atop")) {
                op = 1337;
            } else if (0 == strcmp(code, "source-in")) {
                op = 1338;
            } else if (0 == strcmp(code, "source-out")) {
                op = 1339;
            } else if (0 == strcmp(code, "source-over")) {
                op = 1340;
            }
        } else if (code[0] == 'd') {
            if (0 == strcmp(code, "destination-atop")) {
                op = 1341;
            } else if (0 == strcmp(code, "destination-in")) {
                op = 1342;
            } else if (0 == strcmp(code, "destination-out")) {
                op = 1343;
            } else if (0 == strcmp(code, "destination-over")) {
                op = 1344;
            }
        }

        view->composite_operation = op;
    }
}

void timestep_view_get_compositeOperation(Local<String> property, const PropertyCallbackInfo< Value > &info) {
    Isolate *isolate = info.GetIsolate();
    Local<Object> thiz = info.Holder();
    timestep_view *view = GET_TIMESTEP_VIEW(thiz);
    Local<String> operation;
    switch (view->composite_operation) {
    case 1337:
        operation = String::NewFromUtf8(isolate, "source-atop");
    case 1338:
        operation = String::NewFromUtf8(isolate, "source-in");
    case 1339:
        operation = String::NewFromUtf8(isolate, "source-out");
    case 1340:
        operation = String::NewFromUtf8(isolate, "source-over");
    case 1341:
        operation = String::NewFromUtf8(isolate, "destination-atop");
    case 1342:
        operation = String::NewFromUtf8(isolate, "destination-in");
    case 1343:
        operation = String::NewFromUtf8(isolate, "destination-out");
    case 1344:
        operation = String::NewFromUtf8(isolate, "destination-over");
    case 1345:
        operation = String::NewFromUtf8(isolate, "lighter");
    case 1346:
        operation = String::NewFromUtf8(isolate,  "xor");
    case 1347:
        operation = String::NewFromUtf8(isolate, "copy");
    default:
        operation = String::NewFromUtf8(isolate, "");
    }
    info.GetReturnValue().Set(operation);
}

void timestep_view_set_zIndex (Local< String > property, Local< Value > value, const PropertyCallbackInfo< void > &info) {
    Isolate *isolate = info.GetIsolate();
    Local<Object> thiz = info.Holder();
    timestep_view *view = GET_TIMESTEP_VIEW(thiz);
    view->z_index = value->Int32Value(isolate->GetCurrentContext()).ToChecked();
    if (view->superview) {
        view->superview->dirty_z_index = true;
    }
}

void timestep_view_set_opacity (Local< String > property, Local< Value > value, const PropertyCallbackInfo< void > &info) {
    Isolate *isolate = info.GetIsolate();
    Local<Object> thiz = info.Holder();
    timestep_view *view = GET_TIMESTEP_VIEW(thiz);

    if (view) {
        if (value->IsUndefined()) {
            view->opacity = 1;
        } else {
            view->opacity = value->NumberValue(isolate->GetCurrentContext()).ToChecked();
        }
    }
}


// -- the following setters/getters are copied from auto-gen templates for the
// -- non-underscore variants, allowing JS to set width/height using either
// -- .width/.height or ._width/._height.

void timestep_view_get__width(Local<String> property, const PropertyCallbackInfo< Value > &info) {
    Isolate *isolate = info.GetIsolate();
    //LOG("in timestep_view get _width");
    v8::Local<v8::Object> thiz = info.Holder();
    timestep_view *obj = (timestep_view*) v8::Local<v8::External>::Cast(thiz->GetInternalField(0))->Value();

    double prop = obj->width;
    //LOG("done in timestep_view get _width");
    info.GetReturnValue().Set(v8::Number::New(isolate, prop));
}

void timestep_view_set__width(v8::Local<v8::String> property, v8::Local<v8::Value> value, const PropertyCallbackInfo< void > &info) {
    Isolate *isolate = info.GetIsolate();
    //LOG("in timestep_view set _width");
    v8::Local<v8::Object> thiz = info.Holder();
    timestep_view *obj = (timestep_view*) v8::Local<v8::External>::Cast(thiz->GetInternalField(0))->Value();

    obj->width = value->ToNumber(isolate)->Value();

    //LOG("done in timestep_view set _width");
}
void timestep_view_get__height(Local<String> property, const PropertyCallbackInfo< Value > &info) {
    Isolate *isolate = info.GetIsolate();
    //LOG("in timestep_view get _height");
    v8::Local<v8::Object> thiz = info.Holder();
    timestep_view *obj = (timestep_view*) v8::Local<v8::External>::Cast(thiz->GetInternalField(0))->Value();

    double prop = obj->height;
    //LOG("done in timestep_view get _height");
    info.GetReturnValue().Set(v8::Number::New(isolate, prop));
}

void timestep_view_set__height(v8::Local<v8::String> property, v8::Local<v8::Value> value, const PropertyCallbackInfo< void > &info) {
    Isolate *isolate = info.GetIsolate();
    //LOG("in timestep_view set _height");
    v8::Local<v8::Object> thiz = info.Holder();
    timestep_view *obj = (timestep_view*) v8::Local<v8::External>::Cast(thiz->GetInternalField(0))->Value();

    obj->height = value->ToNumber(isolate)->Value();

    //LOG("done in timestep_view set _height");
}

// -- end copy

void def_timestep_view_render(Local<Object> js_view, Handle<Object> js_ctx, Handle<Object> js_opts, Isolate *isolate) {
    Local<Context> context = getIsolate()->GetCurrentContext();           
    Handle<Function> render = Handle<Function>::Cast(js_view->Get(context, STRING_CACHE_render.Get(isolate)).ToLocalChecked());
    if (!render.IsEmpty() && render->IsFunction()) {
            Handle<Value> args[] = {js_ctx, js_opts};
            render->Call(js_view, 2, args);
    }
}

Local<Object> def_get_viewport(Handle<Object> js_opts, Isolate *isolate) {
    return Handle<Object>::Cast(js_opts->Get(STRING_CACHE_viewport.Get(isolate)));
}

void def_restore_viewport(Handle<Object> js_opts, Handle<Object> js_viewport, Isolate *isolate) {
    js_opts->Set(isolate->GetCurrentContext(), STRING_CACHE_viewport.Get(isolate), js_viewport);
}

void def_timestep_view_needs_reflow(Handle<Object> js_view, bool force, Isolate *isolate) {
    if (force && !js_view.IsEmpty()) {
        Handle<Function> needs_reflow = Handle<Function>::Cast(js_view->Get(STRING_CACHE_needsReflow.Get(isolate)));
        if (!needs_reflow.IsEmpty() && needs_reflow->IsFunction()) {
            Handle<Value> args[] = {Boolean::New(isolate, force)};
            needs_reflow->Call(js_view, 1, args);
        }
    }
}

void def_timestep_view_tick(Handle<Object> js_view, double dt, Isolate *isolate) {
    Handle<Function> tick = Handle<Function>::Cast(js_view->Get(isolate->GetCurrentContext(), STRING_CACHE_tick.Get(isolate)).ToLocalChecked());
    if (!tick.IsEmpty() && tick->IsFunction()) {
        Handle<Value> args[] = {Number::New(isolate, dt)};
        tick->Call(js_view, 1, args);
    }
}

void def_timestep_view_addSubview(const v8::FunctionCallbackInfo<v8::Value> &args) {
    Isolate *isolate = args.GetIsolate();
    Handle<Object> subview = args[0]->ToObject(isolate);
    timestep_view *view = GET_TIMESTEP_VIEW(Handle<Object>::Cast(subview->Get(STRING_CACHE___view.Get(isolate))));
    bool result = timestep_view_add_subview(GET_TIMESTEP_VIEW(args.This()), view);
    args.GetReturnValue().Set(Boolean::New(isolate, result));
}

void def_timestep_view_removeSubview(const v8::FunctionCallbackInfo<v8::Value> &args) {
    Isolate *isolate = args.GetIsolate();
    Handle<Object> subview = args[0]->ToObject(isolate);
    timestep_view *view = GET_TIMESTEP_VIEW(Handle<Object>::Cast(subview->Get(STRING_CACHE___view.Get(isolate))));
    bool result = timestep_view_remove_subview(GET_TIMESTEP_VIEW(args.This()), view);
    args.GetReturnValue().Set(Boolean::New(isolate, result));
}

void def_timestep_view_getSuperview(const v8::FunctionCallbackInfo<v8::Value> &args) {
    Isolate *isolate = args.GetIsolate();
    timestep_view *v = GET_TIMESTEP_VIEW(args.This());

    timestep_view *view = timestep_view_get_superview(v);
    if (!view) {
        args.GetReturnValue().Set(Undefined(isolate));
        return;
    }
    if (view->js_view.IsEmpty()) {
        args.GetReturnValue().Set(Undefined(isolate));
    } else {
        args.GetReturnValue().Set(view->js_view);
    }
}

void def_timestep_view_wrapRender(const v8::FunctionCallbackInfo<v8::Value> &args) {
    Isolate *isolate = args.GetIsolate();
    Handle<Object> js_ctx = Handle<Object>::Cast(args[0]);
    Handle<Object> js_opts = Handle<Object>::Cast(args[1]);
    Handle<Object> _ctx = Handle<Object>::Cast(js_ctx->Get(STRING_CACHE__ctx.Get(isolate)));
    context_2d *ctx = GET_CONTEXT2D_FROM(_ctx);
    timestep_view_wrap_render(GET_TIMESTEP_VIEW(args.This()), ctx, js_ctx, js_opts, isolate);
}

void def_timestep_view_wrapTick(const v8::FunctionCallbackInfo<v8::Value> &args) {
    Isolate *isolate = args.GetIsolate();
    double dt = args[0]->NumberValue(isolate->GetCurrentContext()).ToChecked();
    timestep_view_wrap_tick(GET_TIMESTEP_VIEW(args.This()), dt, isolate);
}

void def_timestep_view_getSubviews(const v8::FunctionCallbackInfo<v8::Value> &args) {
    Isolate *isolate = args.GetIsolate();
    timestep_view *v = GET_TIMESTEP_VIEW(args.This());
    int expected_count = v->subview_count, actual_count = 0;
    Handle<Array> subviews = Array::New(isolate, expected_count);
    unsigned int i;
    for (i = 0; i < v->subview_count; i++) {
        timestep_view *subview = v->subviews[i];
        if (!subview->js_view.IsEmpty()) {
            subviews->Set(Number::New(isolate, i), subview->js_view.Get(isolate));
            ++actual_count;
        }
    }

    // If the counts do not match,
    if (actual_count != expected_count) {
        // Do it again
        Handle<Array> subviews = Array::New(isolate, actual_count);

        int next_index = 0;
        for (i = 0; i < v->subview_count; i++) {
            timestep_view *subview = v->subviews[i];
            if (!subview->js_view.IsEmpty()) {
                subviews->Set(Number::New(isolate, next_index++), subview->js_view.Get(isolate));
            }
        }
    }

    args.GetReturnValue().Set(subviews);
}

void def_timestep_view_localizePoint(const v8::FunctionCallbackInfo<v8::Value> &args) {
    Isolate *isolate = args.GetIsolate();
    timestep_view *v = GET_TIMESTEP_VIEW(args.This());
    Handle<Object> pt = args[0]->ToObject(isolate);
    double x = pt->Get(STRING_CACHE_x.Get(isolate))->NumberValue(isolate->GetCurrentContext()).ToChecked();
    double y = pt->Get(STRING_CACHE_y.Get(isolate))->NumberValue(isolate->GetCurrentContext()).ToChecked();

    x -= v->x + v->anchor_x + v->offset_x;
    y -= v->y + v->anchor_y + v->offset_y;

    if (v->r) {
        double cosr = cos(-(v->r));
        double sinr = sin(-(v->r));
        double x2 = x;
        double y2 = y;
        x = x2 * cosr - y2 * sinr;
        y = x2 * sinr + y2 * cosr;
    }

    if (v->scale != 1) {
        double s = 1 / v->scale;
        x *= s;
        y *= s;
    }

    x += v->anchor_x;
    y += v->anchor_y;

    pt->Set(STRING_CACHE_x.Get(isolate), Number::New(isolate, x));
    pt->Set(STRING_CACHE_y.Get(isolate), Number::New(isolate, y));

    args.GetReturnValue().Set(pt);
}
