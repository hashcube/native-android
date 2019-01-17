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
#include "core/types.h"
#include "timestep/timestep_animate.h"
#include "js/js_animate.h"
#include "js/js_timestep_view.h"
#include "js/js_context.h"
#include "core/tealeaf_context.h"

#include "include/v8.h"
using namespace v8;

// Local<Value> js_view_wrap_render(const v8::FunctionCallbackInfo<v8::Value> &args) {

// 	Local<Object> thiz = args.This();
// 	Local<Object> style = Local<Object>::Cast(thiz->Get(STRING_CACHE_style));

// 	if (style.IsEmpty()) { return Undefined(isolate); }
// 	Local<Value> visible = Local<Object>::Cast(style->Get(STRING_CACHE_visible));
// 	if (visible.IsEmpty() || !visible->ToBoolean()->Value()) { return Undefined(isolate); }

// 	context_2d *ctx = GET_CONTEXT2D_FROM(args[0]->ToObject());


// }

// Local<Value> js_view_wrap_tick(const v8::FunctionCallbackInfo<v8::Value> &args) {

// }


static inline void build_style_frame(anim_frame *frame, Local<Object> target, Isolate *isolate) {

#define ADD_PROP(const_name, prop)								\
		_ADD_PROP(const_name, prop, false);							\
		_ADD_PROP(const_name, d ## prop, true);

#define _ADD_PROP(const_name, prop, _is_delta) do {				\
    Local<Value> value = target->Get(String::NewFromUtf8(isolate, #prop)); \
		if (value->IsNumber()) {									\
			style_prop *p = anim_frame_add_style_prop(frame);		\
			p->name = const_name;									\
			p->target = (double) value->NumberValue(isolate->GetCurrentContext()).ToChecked();				\
			p->is_delta = _is_delta;								\
		}															\
	} while(0)

    ADD_PROP(X, x);
    ADD_PROP(Y, y);
    ADD_PROP(WIDTH, width);
    ADD_PROP(HEIGHT, height);
    ADD_PROP(R, r);
    ADD_PROP(ANCHOR_X, anchorX);
    ADD_PROP(ANCHOR_Y, anchorY);
    ADD_PROP(OPACITY, opacity);
    ADD_PROP(SCALE, scale);
    ADD_PROP(SCALE_X, scaleX);
    ADD_PROP(SCALE_Y, scaleY);

    frame->type = STYLE_FRAME;
}

static void build_func_frame(anim_frame *frame, Local<Function> cb, Isolate *isolate) {
    frame->cb.Reset(isolate, Persistent<Function>(isolate, cb));
    frame->type = FUNC_FRAME;
}

#define GET_TIMESTEP_ANIMATION(thiz) ( (view_animation*) Local<External>::Cast(thiz->GetInternalField(0))->Value() )

static void build_frame(Local<Object> target, const v8::FunctionCallbackInfo<v8::Value> &args, void (*next)(view_animation *, anim_frame *, unsigned int, unsigned int, Isolate *isolate)) {
    LOGFN("build_frame");
    Isolate *isolate = getIsolate();
    Local<Object> thiz = Local<Object>::Cast(args.This());
    view_animation *anim = GET_TIMESTEP_ANIMATION(thiz);
    anim_frame *frame = anim_frame_get();

    // TODO: what if these defaults change? it probably won't...
    unsigned int duration = 500;
    unsigned int transition = 0;
    if (target->IsFunction()) {
        duration = 0;
        build_func_frame(frame, Local<Function>::Cast(target), isolate);
    } else {
        build_style_frame(frame, target, isolate);
    }

    if (!args[1]->IsUndefined()) {
        duration = args[1]->Int32Value(isolate->GetCurrentContext()).ToChecked();
    }

    if (!args[2]->IsUndefined()) {
        transition = args[2]->Int32Value(isolate->GetCurrentContext()).ToChecked();
    }

    next(anim, frame, duration, transition, isolate);

    LOGFN("end build_frame");
}

void js_animate_now(const v8::FunctionCallbackInfo<v8::Value> &args) {
    Isolate *isolate = getIsolate();
    Local<Object> target = Local<Object>::Cast(args[0]);
    if (!target->IsUndefined()) {
        build_frame(target, args, view_animation_now);
    }

   args.GetReturnValue().Set(Handle<Object>::Cast(args.This()));
}

void js_animate_then(const v8::FunctionCallbackInfo<v8::Value> &args) {
    Isolate *isolate = getIsolate();
    Local<Object> target = Local<Object>::Cast(args[0]);
    if (!target->IsUndefined()) {
        build_frame(target, args, view_animation_then);
    }

   args.GetReturnValue().Set(Handle<Object>::Cast(args.This()));
}

void js_animate_commit(const v8::FunctionCallbackInfo<v8::Value> &args) {
    Isolate *isolate = getIsolate();
    Handle<Object> thiz = Handle<Object>::Cast(args.This());
    view_animation *anim = GET_TIMESTEP_ANIMATION(thiz);
    view_animation_commit(anim, isolate);
    args.GetReturnValue().Set(thiz);
}

void js_animate_clear(const v8::FunctionCallbackInfo<v8::Value> &args) {
    Isolate *isolate = getIsolate();
    Handle<Object> thiz = Handle<Object>::Cast(args.This());
    view_animation *anim = GET_TIMESTEP_ANIMATION(thiz);
    view_animation_clear(anim, isolate);
    args.GetReturnValue().Set(thiz);
}

void js_animate_wait(const v8::FunctionCallbackInfo<v8::Value> &args) {
    Isolate *isolate = getIsolate();
    Handle<Object> thiz = Handle<Object>::Cast(args.This());
    int duration = args[0]->Int32Value(isolate->GetCurrentContext()).ToChecked();

    view_animation *anim = GET_TIMESTEP_ANIMATION(thiz);
    view_animation_wait(anim, duration, isolate);
    args.GetReturnValue().Set(thiz);
}


void js_animate_pause(const v8::FunctionCallbackInfo<v8::Value> &args) {
    Handle<Object> thiz = Handle<Object>::Cast(args.This());
    view_animation *anim = GET_TIMESTEP_ANIMATION(thiz);
    view_animation_pause(anim);
    args.GetReturnValue().Set(thiz);
}

void js_animate_resume(const v8::FunctionCallbackInfo<v8::Value> &args) {
    Handle<Object> thiz = Handle<Object>::Cast(args.This());
    view_animation *anim = GET_TIMESTEP_ANIMATION(thiz);
    view_animation_resume(anim);
    args.GetReturnValue().Set(thiz);
}

void js_animate_is_paused(const v8::FunctionCallbackInfo<v8::Value> &args) {
    Local<Object> thiz = Local<Object>::Cast(args.This());
    view_animation *anim = GET_TIMESTEP_ANIMATION(thiz);
    args.GetReturnValue().Set(Boolean::New(getIsolate(), anim->is_paused));
}

void js_animate_has_frames(const v8::FunctionCallbackInfo<v8::Value> &args) {
    Local<Object> thiz = Local<Object>::Cast(args.This());
    view_animation *anim = GET_TIMESTEP_ANIMATION(thiz);
    args.GetReturnValue().Set(Boolean::New(getIsolate(), anim->frame_head));
}


// Old, now using weakCallbackForObjectHolder below
static void js_animation_finalize(Persistent<Value> js_anim, void *param, Isolate *isolate) {
    HandleScope scope(isolate);
    view_animation *anim = static_cast<view_animation*>( param );
    view_animation_release(anim, isolate);
    js_anim.Reset();
}

static void weakCallbackForObjectHolder(const v8::WeakCallbackInfo<view_animation> &data) {
    Isolate *isolate = getIsolate();
    HandleScope scope(isolate);

    view_animation_release(static_cast<view_animation*>( data.GetParameter()), isolate);
    delete data.GetParameter();
}

void js_animate_constructor(const v8::FunctionCallbackInfo<v8::Value> &args) {
    Isolate *isolate = getIsolate();//getIsolate();
    Handle<Object> thiz = Handle<Object>::Cast(args.Holder());
    Local<Object> js_timestep_view = Local<Object>::Cast(args[0]);

    //timestep_view *view = GET_TIMESTEP_VIEW(Local<Object>::Cast(js_timestep_view->Get(getContext(), STRING_CACHE___view.Get(getIsolate())).ToLocalChecked()));
    timestep_view *view = GET_TIMESTEP_VIEW(Local<Object>::Cast(js_timestep_view->Get(STRING_CACHE___view.Get(isolate))));
    view_animation *anim = view_animation_init(view);

    thiz->SetInternalField(0, External::New(isolate, anim));
    Persistent<Object> js_anim(isolate, thiz);
    //static void js_animation_finalize(Persistent<Value> js_anim, void *param) {
    //       void (*)                   (const WeakCallbackInfo<view_animation_t> &)
    js_anim.SetWeak(anim, weakCallbackForObjectHolder, v8::WeakCallbackType::kParameter);

   /* tealeaf/src/main/jni/deps/v8/include/v8.h:638:18:
    note: candidate function [with P = view_animation_t] not viable: no known conversion from
    'void (Persistent<v8::Value>, void *)' to 'typename WeakCallbackInfo<view_animation_t>::Callback'
    (aka 'void (*)(const WeakCallbackInfo<view_animation_t> &)') for 2nd argument*/


    //anim->js_anim = js_anim.Get(isolate);
   /* if(!anim->js_anim.IsNearDeath()){
    anim->js_anim.MarkActive();
    }
    */
    
    if(!anim->js_anim.IsEmpty()){
    anim->js_anim.Empty();
    }	
    
   /*     if(anim->js_anim.IsNearDeath()){
    anim->js_anim.MarkActive();
    }
*/
    anim->js_anim.Reset(isolate, js_anim);

    args.GetReturnValue().Set(thiz);
}

Current checking: AdventureMapModel.js line 437

void def_animate_add_to_group(Local<Object> js_anim, Isolate *isolate) {
    LOGFN("def_animate_add_to_group");
    Local<Function> addToGroup = Local<Function>::Cast(js_anim->Get(STRING_CACHE__addToGroup.Get(isolate)));
    if (!addToGroup.IsEmpty() && addToGroup->IsFunction()) {
        Local<Value> args[] = {js_anim};
        addToGroup->Call(js_anim, 1, args);
    }
    LOGFN("end def_animate_add_to_group");
}

// Todo what is here, how and where to dissapear animation and where to reset persistent
void def_animate_remove_from_group(Local<Object> js_anim, Isolate *isolate) {
    LOGFN("def_animate_remove_from_group");
    Local<Function> finish = Local<Function>::Cast(js_anim->Get(STRING_CACHE__removeFromGroup.Get(isolate)));
    //Handle<Function> finish = Handle<Function>::Cast(js_anim->Get(isolate->GetCurrentContext(), STRING_CACHE__removeFromGroup.Get(isolate)).ToLocalChecked());
    if (!finish.IsEmpty() && finish->IsFunction()) {
        Local<Value> args[] = {js_anim};
        finish->Call(js_anim, 1, args);
    }
    LOGFN("end def_animate_remove_from_group");
}

void def_animate_cb(Local<Object> js_view, Local<Object> cb, double tt, double t, Isolate *isolate) {
    Local<Value> args[] = {Number::New(isolate, tt), Number::New(isolate, t)};
    Local<Function>::Cast(cb)->Call(js_view, 2, args);
}

Local<FunctionTemplate> get_animate_class(Isolate *isolate) {
    Local<FunctionTemplate> animate_class = FunctionTemplate::New(isolate);
    animate_class->SetCallHandler(js_animate_constructor);

    Local<Template> proto = animate_class->PrototypeTemplate();
    //Local<ObjectTemplate> global = ObjectTemplate::New(isolate);
   
    
    proto->Set(String::NewFromUtf8(isolate,"now"), FunctionTemplate::New(isolate, js_animate_now));
    proto->Set(String::NewFromUtf8(isolate,"then"), FunctionTemplate::New(isolate, js_animate_then));
    proto->Set(String::NewFromUtf8(isolate,"commit"), FunctionTemplate::New(isolate, js_animate_commit));
    proto->Set(String::NewFromUtf8(isolate,"clear"), FunctionTemplate::New(isolate, js_animate_clear));
    proto->Set(String::NewFromUtf8(isolate,"wait"), FunctionTemplate::New(isolate, js_animate_wait));
    proto->Set(String::NewFromUtf8(isolate,"pause"), FunctionTemplate::New(isolate, js_animate_pause));
    proto->Set(String::NewFromUtf8(isolate,"resume"), FunctionTemplate::New(isolate, js_animate_resume));
    proto->Set(String::NewFromUtf8(isolate,"isPaused"), FunctionTemplate::New(isolate, js_animate_is_paused));
    proto->Set(String::NewFromUtf8(isolate,"hasFrames"), FunctionTemplate::New(isolate, js_animate_has_frames));
    animate_class->InstanceTemplate()->SetInternalFieldCount(1);
    return animate_class;
}

