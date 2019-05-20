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
#include "js_context.h"

extern "C" {
#include "core/texture_2d.h"
#include "core/texture_manager.h"
#include "core/tealeaf_canvas.h"
#include "core/tealeaf_context.h"
#include "core/rgba.h"
#include "core/draw_textures.h"
#include "core/log.h"
}
#include "platform/text_manager.h"
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include "timestep/timestep.h"
#include "timestep/timestep_animate.h"

using namespace v8;
//extern void print_model_view(context_2d*, int);

void defLoadIdentity(const v8::FunctionCallbackInfo<v8::Value> &args) {
    Isolate *isolate = getIsolate();
    HandleScope handle_scope(isolate);

    context_2d_loadIdentity(GET_CONTEXT2D());
}

void defDrawImage(const v8::FunctionCallbackInfo<v8::Value> &args) {
    LOGFN("drawImage");
    Isolate *isolate = getIsolate();
    HandleScope handle_scope(isolate);
    int srcTex = args[0]->Int32Value(isolate->GetCurrentContext()).ToChecked();
    String::Utf8Value str(isolate, args[1]);
    const char *url = ToCString(str);
    float srcX = args[2]->NumberValue(isolate->GetCurrentContext()).ToChecked();
    float srcY = args[3]->NumberValue(isolate->GetCurrentContext()).ToChecked();
    float srcW = args[4]->NumberValue(isolate->GetCurrentContext()).ToChecked();
    float srcH = args[5]->NumberValue(isolate->GetCurrentContext()).ToChecked();
    float destX = args[6]->NumberValue(isolate->GetCurrentContext()).ToChecked();
    float destY = args[7]->NumberValue(isolate->GetCurrentContext()).ToChecked();
    float destW = args[8]->NumberValue(isolate->GetCurrentContext()).ToChecked();
    float destH = args[9]->NumberValue(isolate->GetCurrentContext()).ToChecked();

    rect_2d src_rect = {srcX, srcY, srcW, srcH};
    rect_2d dest_rect = {destX, destY, destW, destH};

    context_2d_drawImage(GET_CONTEXT2D(), srcTex, url, &src_rect, &dest_rect);
    LOGFN("endDrawImage");

}

void defDrawPointSprites(const v8::FunctionCallbackInfo<v8::Value> &args) {
    Isolate *isolate = getIsolate();
    HandleScope handle_scope(isolate);
    String::Utf8Value str(isolate, args[0]);
    const char *url = ToCString(str);
    float point_size = args[1]->NumberValue(isolate->GetCurrentContext()).ToChecked();
    float step_size = args[2]->NumberValue(isolate->GetCurrentContext()).ToChecked();

    String::Utf8Value str_color(isolate, args[3]);
    rgba color;
    rgba_parse(&color, ToCString(str_color));

    float x1 = args[4]->NumberValue(isolate->GetCurrentContext()).ToChecked();
    float y1 = args[5]->NumberValue(isolate->GetCurrentContext()).ToChecked();
    float x2 = args[6]->NumberValue(isolate->GetCurrentContext()).ToChecked();
    float y2 = args[7]->NumberValue(isolate->GetCurrentContext()).ToChecked();

    context_2d_draw_point_sprites(GET_CONTEXT2D(), url, point_size, step_size, &color, x1, y1, x2, y2);

}

void defDestroyImage(const v8::FunctionCallbackInfo<v8::Value> &args) {
    LOGFN("destroyImage");
    Isolate *isolate = getIsolate();
    HandleScope handle_scope(isolate);
    String::Utf8Value str(isolate, args[0]);
    const char *url = ToCString(str);
    //call acquire here because we need to lock the mutex
    texture_2d *tex = texture_manager_get_texture(texture_manager_acquire(), url);
    if (tex && tex->loaded) {
        texture_manager_free_texture(texture_manager_get(), tex);
    }
    texture_manager_release();
    LOGFN("endDestroyImage");
}

void defRotate(const v8::FunctionCallbackInfo<v8::Value> &args) {
    LOGFN("rotate");
    Isolate *isolate = getIsolate();
    HandleScope handle_scope(isolate);
    double angle = args[0]->NumberValue(isolate->GetCurrentContext()).ToChecked();

    context_2d_rotate(GET_CONTEXT2D(), angle);
    LOGFN("endrotate");
}

void defTranslate(const v8::FunctionCallbackInfo<v8::Value> &args) {
    LOGFN("translate");
    Isolate *isolate = getIsolate();
    HandleScope handle_scope(isolate);
    double x = args[0]->NumberValue(isolate->GetCurrentContext()).ToChecked();
    double y = args[1]->NumberValue(isolate->GetCurrentContext()).ToChecked();

    context_2d_translate(GET_CONTEXT2D(), x, y);

    LOGFN("endtranslate");
}

void defScale(const v8::FunctionCallbackInfo<v8::Value> &args) {
    LOGFN("scale");
    Isolate *isolate = getIsolate();
    HandleScope handle_scope(isolate);
    double x = args[0]->NumberValue(isolate->GetCurrentContext()).ToChecked();
    double y = args[1]->NumberValue(isolate->GetCurrentContext()).ToChecked();

    context_2d_scale(GET_CONTEXT2D(), x, y);

    LOGFN("endscale");

}

void defSave(const v8::FunctionCallbackInfo<v8::Value> &args) {
    LOGFN("save");
    Isolate *isolate = getIsolate();
    HandleScope handle_scope(isolate);
    context_2d_save(GET_CONTEXT2D());
    LOGFN("endsave");
}

void defRestore(const v8::FunctionCallbackInfo<v8::Value> &args) {
    LOGFN("restore");
    Isolate *isolate = getIsolate();
    HandleScope handle_scope(isolate);
    context_2d_restore(GET_CONTEXT2D());
    LOGFN("endrestore");
}

void defClear(const v8::FunctionCallbackInfo<v8::Value> &args) {
    LOGFN("clear");
    Isolate *isolate = getIsolate();
    HandleScope handle_scope(isolate);
    context_2d_clear(GET_CONTEXT2D());
    LOGFN("endclear");
}

void defSetGlobalAlpha(const v8::FunctionCallbackInfo<v8::Value> &args) {
    LOGFN("setglobalalpha");
    Isolate *isolate = getIsolate();
    HandleScope handle_scope(isolate);
    double alpha = args[0]->NumberValue(isolate->GetCurrentContext()).ToChecked();
    context_2d_setGlobalAlpha(GET_CONTEXT2D(), alpha);
    LOGFN("endsetglobalalpha");
}

void defGetGlobalAlpha(const v8::FunctionCallbackInfo<v8::Value> &args) {
    LOGFN("getglobalalpha");
    Isolate *isolate =getIsolate();
    HandleScope handle_scope(isolate);
    double alpha = context_2d_getGlobalAlpha(GET_CONTEXT2D());

    LOGFN("endgetglobalalpha");
    args.GetReturnValue().Set(Number::New(isolate, alpha));
}

void defLoadImage(const v8::FunctionCallbackInfo<v8::Value> &args) {
    LOGFN("loadImage");
    Isolate *isolate = getIsolate();
    EscapableHandleScope handle_scope(isolate);

    String::Utf8Value str(isolate, args[0]);
    char *url =(char*) ToCString(str);

    texture_2d *tex = texture_manager_load_texture(texture_manager_get(), url);
    if (!tex || !tex->loaded) {
        return args.GetReturnValue().Set(False(isolate));
    }

    Local<Object> ret(Object::New(isolate));

    ret->Set(STRING_CACHE_width.Get(isolate), Integer::New(isolate, tex->originalWidth));
    ret->Set(STRING_CACHE_height.Get(isolate), Integer::New(isolate, tex->originalHeight));
    ret->Set(STRING_CACHE_name.Get(isolate), Integer::New(isolate, tex->name));

    LOGFN("endloadImage");
    args.GetReturnValue().Set(handle_scope.Escape(ret));
}

void defClearRect(const v8::FunctionCallbackInfo<v8::Value> &args) {
    LOGFN("clearRect");
    Isolate *isolate = getIsolate();
    double x = args[0]->NumberValue(isolate->GetCurrentContext()).ToChecked();
    double y = args[1]->NumberValue(isolate->GetCurrentContext()).ToChecked();
    double width = args[2]->NumberValue(isolate->GetCurrentContext()).ToChecked();
    double height = args[3]->NumberValue(isolate->GetCurrentContext()).ToChecked();

    rect_2d rect = {x, y, width, height};

    context_2d_clearRect(GET_CONTEXT2D(), &rect);

    LOGFN("endclearRect");
}

void defFillRect(const v8::FunctionCallbackInfo<v8::Value> &args) {
    Isolate *isolate = getIsolate();
    double x = args[0]->NumberValue(isolate->GetCurrentContext()).ToChecked();
    double y = args[1]->NumberValue(isolate->GetCurrentContext()).ToChecked();
    double width = args[2]->NumberValue(isolate->GetCurrentContext()).ToChecked();
    double height = args[3]->NumberValue(isolate->GetCurrentContext()).ToChecked();

    String::Utf8Value str_color(isolate, args[4]);
    rgba color;
    rgba_parse(&color, ToCString(str_color));

    rect_2d rect = {x, y, width, height};

    context_2d_fillRect(GET_CONTEXT2D(), &rect, &color);

}

void defStrokeRect(const v8::FunctionCallbackInfo<v8::Value> &args) {
    Isolate *isolate = getIsolate();
    double x = args[0]->NumberValue(isolate->GetCurrentContext()).ToChecked();
    double y = args[1]->NumberValue(isolate->GetCurrentContext()).ToChecked();
    double width = args[2]->NumberValue(isolate->GetCurrentContext()).ToChecked();
    double height = args[3]->NumberValue(isolate->GetCurrentContext()).ToChecked();
    context_2d *ctx = GET_CONTEXT2D();

    String::Utf8Value str_color(isolate, args[4]);
    rgba color;
    rgba_parse(&color, ToCString(str_color));

    double line_width1 = args[5]->Int32Value(isolate->GetCurrentContext()).ToChecked();
    double line_width2 = line_width1 / 2;

    rect_2d left_rect = {x - line_width2, y - line_width2, line_width1, height + line_width1};
    context_2d_fillRect(ctx, &left_rect, &color);

    rect_2d right_rect = {x + width - line_width2, y - line_width2, line_width1, height + line_width1};
    context_2d_fillRect(ctx, &right_rect, &color);

    rect_2d top_rect = {x + line_width2, y - line_width2, width - line_width1, line_width1};
    context_2d_fillRect(ctx, &top_rect, &color);

    rect_2d bottom_rect = {x + line_width2, y + height - line_width2, width - line_width1, line_width1};
    context_2d_fillRect(ctx, &bottom_rect, &color);

}

#define FONT_SCALE	0.9
void defMeasureText(const v8::FunctionCallbackInfo<v8::Value> &args) {
    LOGFN("measuretext");
    Isolate *isolate = getIsolate();
    EscapableHandleScope handle_scope(isolate);
    String::Utf8Value text_str(isolate, args[0]);
    const char* text = ToCString(text_str);
    int size = args[1]->Int32Value(isolate->GetCurrentContext()).ToChecked();
    String::Utf8Value font_str(isolate, args[2]);
    const char *font = ToCString(font_str);

    int width = text_manager_measure_text(font, size * FONT_SCALE, text);
    Handle<Object> metrics =  Object::New(isolate);
    metrics->Set(STRING_CACHE_width.Get(isolate), Number::New(isolate, width));

    LOGFN("endmeasuretext");
    args.GetReturnValue().Set(handle_scope.Escape(metrics));
}

double measureText(Handle<Object> font_info, char **text, Isolate *isolate) {
    double width = 0;
    Handle<Object> custom_font = Handle<Object>::Cast(font_info->Get(STRING_CACHE_customFont.Get(isolate)));
    if (custom_font.IsEmpty()) {
        return 0;
    }

    Handle<Object> dimensions = Handle<Object>::Cast(custom_font->Get(STRING_CACHE_dimensions.Get(isolate)));
    if (dimensions.IsEmpty()) {
        return 0;
    }

    Handle<Object> horizontal = Handle<Object>::Cast(custom_font->Get(STRING_CACHE_horizontal.Get(isolate)));

    float scale = font_info->Get(STRING_CACHE_scale.Get(isolate))->NumberValue(isolate->GetCurrentContext()).ToChecked();
    float space_width = horizontal->Get(STRING_CACHE_width.Get(isolate))->NumberValue(isolate->GetCurrentContext()).ToChecked() * scale;
    float tab_width = 4 * space_width;
    Handle<Object> settings = Handle<Object>::Cast(custom_font->Get(STRING_CACHE_settings.Get(isolate)));
    float spacing = settings->Get(STRING_CACHE_spacing.Get(isolate))->NumberValue(isolate->GetCurrentContext()).ToChecked() * scale;

    char c = '\0';
    for (int i = 0; (c = (*text)[i]) != 0; i++) {
        if (c == ' ') {
            width += space_width;
        } else if (c == '\t') {
            width += tab_width;
        } else {
            Handle<Object> dimension = Handle<Object>::Cast(dimensions->Get(Number::New(isolate, (int)c)));
            if (!dimension.IsEmpty() && dimension->IsObject()) {
                int xadvance = dimension->Get(STRING_CACHE_xadvance.Get(isolate))->Int32Value(isolate->GetCurrentContext()).ToChecked();
                width += xadvance * scale;
            } else {
                return -1;
            }
        }
        width += spacing;
    }

    return width;
}

void defMeasureTextBitmap(const v8::FunctionCallbackInfo<v8::Value> &args) {
    Isolate *isolate = getIsolate();
    EscapableHandleScope handle_scope(isolate);

    String::Utf8Value text_str(isolate, args[0]);
    const char *text = ToCString(text_str);
    Local<Object> font_info(args[1]->ToObject(isolate));
    double width = measureText(font_info, (char**)&text, isolate);

    Handle<Object> metrics = Object::New(isolate);
    metrics->Set(STRING_CACHE_width.Get(isolate), Number::New(isolate, width));
    metrics->Set(STRING_CACHE_failed.Get(isolate), Boolean::New(isolate, width < 0));

    args.GetReturnValue().Set(handle_scope.Escape(metrics));
}

double textBaselineValue(Handle<Object> ctx, Handle<Object> custom_font, double scale, Isolate *isolate) {
            Handle<String> text_baseline = ctx->Get(STRING_CACHE_textBaseline.Get(isolate))->ToString(isolate);
    if (!text_baseline.IsEmpty()) {
        String::Utf8Value text_baseline_str(isolate, text_baseline);
        const char *baseline = ToCString(text_baseline_str);
        Handle<Object> vertical;
        double b;

        if (!strcmp(baseline, "alphabetic")) {
            vertical = Handle<Object>::Cast(custom_font->Get(STRING_CACHE_vertical.Get(isolate)));
            b = vertical->Get(STRING_CACHE_baseline.Get(isolate))->NumberValue(isolate->GetCurrentContext()).ToChecked();
            return -b * scale;
        } else if (!strcmp(baseline, "middle")) {
            vertical = Handle<Object>::Cast(custom_font->Get(STRING_CACHE_vertical.Get(isolate)));
            b = vertical->Get(STRING_CACHE_bottom.Get(isolate))->NumberValue(isolate->GetCurrentContext()).ToChecked();
            return -b / 2 * scale;
        } else if (!strcmp(baseline, "bottom")) {
            vertical = Handle<Object>::Cast(custom_font->Get(STRING_CACHE_vertical.Get(isolate)));
            b = vertical->Get(STRING_CACHE_bottom.Get(isolate))->NumberValue(isolate->GetCurrentContext()).ToChecked();
            return -b * scale;
        }
    }

    return 0;
}

double textAlignValue(Handle<Object> ctx, Handle<Object> font_info, char **text, Isolate *isolate) {
    Handle<String> text_align = ctx->Get(STRING_CACHE_textAlign.Get(isolate))->ToString(isolate);
    if (!text_align.IsEmpty()) {
        String::Utf8Value text_align_str(isolate, text_align);
        const char *align = ToCString(text_align_str);
        if (!strcmp(align, "center")) {
            return -measureText(font_info, text, isolate) / 2;
        } else if (!strcmp(align, "right")) {
            return -measureText(font_info, text, isolate);
        }
    }

    return 0;
}

void defFillTextBitmap(const v8::FunctionCallbackInfo<v8::Value> &args) {
    Isolate *isolate = getIsolate();
    Handle<Object> ctx = Handle<Object>::Cast(args[0]);
    context_2d *context = GET_CONTEXT2D();
    double x = args[1]->NumberValue(isolate->GetCurrentContext()).ToChecked();
    double y = args[2]->NumberValue(isolate->GetCurrentContext()).ToChecked();
    String::Utf8Value text_str(isolate, args[3]);
    double max_width = args[4]->NumberValue(isolate->GetCurrentContext()).ToChecked();
    const char *text = ToCString(text_str);
    // args[5] is color, done by the filter
    Handle<Object> font_info(args[6]->ToObject(isolate));
    Handle<Object> custom_font = Handle<Object>::Cast(font_info->Get(STRING_CACHE_customFont.Get(isolate)));
    Handle<Object> images;
    int is_stroke = args[7]->Int32Value(isolate->GetCurrentContext()).ToChecked();
    if (is_stroke == 1) {
        images = Handle<Object>::Cast(custom_font->Get(STRING_CACHE_strokeImages.Get(isolate)));
    } else {
        images = Handle<Object>::Cast(custom_font->Get(STRING_CACHE_images.Get(isolate)));
    }
    Handle<Object> dimensions = Handle<Object>::Cast(custom_font->Get(STRING_CACHE_dimensions.Get(isolate)));
    Handle<Object> horizontal = Handle<Object>::Cast(custom_font->Get(STRING_CACHE_horizontal.Get(isolate)));

    double width = measureText(font_info, (char**)&text, isolate);

    float scale = 1;
    Handle<Value> scale_value = font_info->Get(STRING_CACHE_scale.Get(isolate));
    if (!scale_value.IsEmpty()) {
        scale = scale_value->NumberValue(isolate->GetCurrentContext()).ToChecked();
    }

    if (width > max_width && width > 0) {
        scale *= max_width / width;
    }

    float space_width = 4;
    Handle<Value> space_width_value = horizontal->Get(STRING_CACHE_width.Get(isolate));
    if (!space_width_value.IsEmpty()) {
        space_width = space_width_value->NumberValue(isolate->GetCurrentContext()).ToChecked() * scale;
    }
    float tab_width = 4 * space_width;

    float spacing = 0;
    Handle<Object> settings = Handle<Object>::Cast(custom_font->Get(STRING_CACHE_settings.Get(isolate)));
    Handle<Value> spacing_value = settings->Get(STRING_CACHE_spacing.Get(isolate));
    if (!spacing_value.IsEmpty()) {
        spacing = spacing_value->NumberValue(isolate->GetCurrentContext()).ToChecked() * scale;
    }

    y += textBaselineValue(ctx, custom_font, scale, isolate);
    x += textAlignValue(ctx, font_info, (char**)&text, isolate);

    int current_sheet_index = -1;
    Handle<Object> image;
    Handle<String> src_tex;
    char *url = NULL;
    char c = '\0';
    for (int i = 0; (c = text[i]) != 0; i++) {
        if (c == ' ') {
            x += space_width + spacing;
        } else if (c == '\t') {
            x += tab_width + spacing;
        } else {
            Handle<Object> dimension = Handle<Object>::Cast(dimensions->Get(Number::New(isolate,(int)c)));
            if (!dimension.IsEmpty() && dimension->IsObject()) {
                int sheet_index = dimension->Get(STRING_CACHE_sheetIndex.Get(isolate))->Int32Value(isolate->GetCurrentContext()).ToChecked();
                int sx = dimension->Get(STRING_CACHE_x.Get(isolate))->Int32Value(isolate->GetCurrentContext()).ToChecked();
                int sy = dimension->Get(STRING_CACHE_y.Get(isolate))->Int32Value(isolate->GetCurrentContext()).ToChecked();
                int sw = dimension->Get(STRING_CACHE_w.Get(isolate))->Int32Value(isolate->GetCurrentContext()).ToChecked();
                int sh = dimension->Get(STRING_CACHE_h.Get(isolate))->Int32Value(isolate->GetCurrentContext()).ToChecked();
                int ox = dimension->Get(STRING_CACHE_ox.Get(isolate))->Int32Value(isolate->GetCurrentContext()).ToChecked();
                int oy = dimension->Get(STRING_CACHE_oy.Get(isolate))->Int32Value(isolate->GetCurrentContext()).ToChecked();
                int xadvance = dimension->Get(STRING_CACHE_xadvance.Get(isolate))->Int32Value(isolate->GetCurrentContext()).ToChecked();

                rect_2d src_rect = {sx, sy, sw, sh};
                rect_2d dest_rect = {x + ox * scale, y + oy * scale, sw * scale, sh * scale};

                if (current_sheet_index != sheet_index) {
                    current_sheet_index = sheet_index;
                    image = Handle<Object>::Cast(images->Get(Number::New(isolate, sheet_index)));
                    src_tex = image->Get(STRING_CACHE__src.Get(isolate))->ToString(isolate);
                    free(url);
                    String::Utf8Value src_tex_str(isolate, src_tex);
                    url = strdup(ToCString(src_tex_str));
                }

                context_2d_drawImage(context, 0, url, &src_rect, &dest_rect);

                x += xadvance * scale + spacing;
            } else {
                x += space_width + spacing;
            }
        }
    }

    free(url);

    args.GetReturnValue().Set(Boolean::New(isolate, true));
}

void defStrokeText(const v8::FunctionCallbackInfo<v8::Value> &args) {
    LOGFN("stroketext");
    Isolate *isolate = getIsolate();
    String::Utf8Value text_str(isolate, args[0]);
    const char* text = ToCString(text_str);
    int x = args[1]->Int32Value(isolate->GetCurrentContext()).ToChecked();
    int y = args[2]->Int32Value(isolate->GetCurrentContext()).ToChecked();
    int max_width = args[3]->Int32Value(isolate->GetCurrentContext()).ToChecked();

    String::Utf8Value str_color(isolate, args[4]);
    rgba color;
    rgba_parse(&color, ToCString(str_color));

    int size = args[5]->Int32Value(isolate->GetCurrentContext()).ToChecked();
    String::Utf8Value font_str(isolate, args[6]);
    const char *font = ToCString(font_str);
    double line_width = args[9]->NumberValue(isolate->GetCurrentContext()).ToChecked();
    texture_2d *texture = text_manager_get_stroked_text(font, size * FONT_SCALE, text, &color, max_width, (float)line_width);

    if (texture) {
        String::Utf8Value str(isolate, args[7]);
        const char *align = ToCString(str);

        int x_offset = 0;
        int y_offset = 0;
        if (!strcmp(align, "left")) {
            x_offset = 0;
        } else if (!strcmp(align, "right")) {
            x_offset = texture->originalWidth;
        } else if (!strcmp(align, "center")) {
            x_offset = texture->originalWidth/2;
        }

        String::Utf8Value str2(isolate, args[8]);
        const char *baseline = ToCString(str2);
        if (!strcmp(baseline, "bottom")) {
            y_offset = texture->originalHeight;
        } else if (!strcmp(baseline, "middle")) {
            y_offset = texture->originalHeight/2;
        } else { // top
            y_offset = 0;
        }
        rect_2d src_rect = {0, 0, texture->originalWidth, texture->originalHeight};
        rect_2d dest_rect = {x - x_offset - (int)line_width, y - y_offset, texture->originalWidth, texture->originalHeight};
        context_2d_fillText(GET_CONTEXT2D(), texture, &src_rect, &dest_rect, color.a);
    }
    LOGFN("endstroketext");
}

void defFillText(const v8::FunctionCallbackInfo<v8::Value> &args) {
    LOGFN("filltext");
    Isolate *isolate = getIsolate();
    String::Utf8Value text_str(isolate, args[0]);
    const char* text = ToCString(text_str);
    int x = args[1]->Int32Value(isolate->GetCurrentContext()).ToChecked();
    int y = args[2]->Int32Value(isolate->GetCurrentContext()).ToChecked();
    int max_width = args[3]->Int32Value(isolate->GetCurrentContext()).ToChecked();

    String::Utf8Value str_color(isolate, args[4]);
    rgba color;
    rgba_parse(&color, ToCString(str_color));

    int size = args[5]->Int32Value(isolate->GetCurrentContext()).ToChecked();
    String::Utf8Value font_str(isolate, args[6]);
    const char *font = ToCString(font_str);
    texture_2d *texture = text_manager_get_filled_text(font, size * FONT_SCALE, text, &color, max_width);

    if (texture) {
        String::Utf8Value str(isolate, args[7]);
        const char *align = ToCString(str);

        int x_offset = 0;
        int y_offset = 0;
        if (!strcmp(align, "left")) {
            x_offset = 0;
        } else if (!strcmp(align, "right")) {
            x_offset = texture->originalWidth;
        } else if (!strcmp(align, "center")) {
            x_offset = texture->originalWidth/2;
        }

        String::Utf8Value str2(isolate, args[8]);
        const char *baseline = ToCString(str2);
        if (!strcmp(baseline, "bottom")) {
            y_offset = texture->originalHeight;
        } else if (!strcmp(baseline, "middle")) {
            y_offset = texture->originalHeight/2;
        } else { // top
            y_offset = 0;
        }
        rect_2d src_rect = {0, 0, texture->originalWidth, texture->originalHeight};
        rect_2d dest_rect = {x - x_offset, y - y_offset, texture->originalWidth, texture->originalHeight};
        context_2d_fillText(GET_CONTEXT2D(), texture, &src_rect, &dest_rect, color.a);
    }
    LOGFN("endfilltext");
}

void defFlushImages(const v8::FunctionCallbackInfo<v8::Value> &args) {
    Isolate *isolate = getIsolate();
    LOGFN("flushImages");
    draw_textures_flush();
    LOGFN("endflushImages");
}

void defNewTexture(const v8::FunctionCallbackInfo<v8::Value> &args) {
    LOGFN("newTexture");
    Isolate *isolate = getIsolate();
    HandleScope handle_scope(isolate);
    int w = args[0]->Int32Value(isolate->GetCurrentContext()).ToChecked();
    int h = args[1]->Int32Value(isolate->GetCurrentContext()).ToChecked();

    texture_2d *tex = texture_manager_new_texture(texture_manager_get(), w, h);

    Handle<Object> tex_data = Object::New(isolate);
    tex_data->Set(STRING_CACHE___gl_name.Get(isolate), Number::New(isolate, tex->name));
    tex_data->Set(STRING_CACHE__src.Get(isolate), String::NewFromUtf8(isolate, tex->url));
    LOGFN("endnewTexture");
    args.GetReturnValue().Set(tex_data);
}

void defEnableScissor(const v8::FunctionCallbackInfo<v8::Value> &args) {
    LOGFN("enableScissor");
    Isolate *isolate = getIsolate();
    double x = args[0]->NumberValue(isolate->GetCurrentContext()).ToChecked();
    double y = args[1]->NumberValue(isolate->GetCurrentContext()).ToChecked();
    double width = args[2]->NumberValue(isolate->GetCurrentContext()).ToChecked();
    double height = args[3]->NumberValue(isolate->GetCurrentContext()).ToChecked();
    rect_2d bounds = {x, y, width, height};
    context_2d_setClip(GET_CONTEXT2D(), bounds);
    LOGFN("endenableScissor");
}

void defDisableScissor(const v8::FunctionCallbackInfo<v8::Value> &args) {
    Isolate *isolate = getIsolate();
    disable_scissor(GET_CONTEXT2D());
}

void defAddFilter(const v8::FunctionCallbackInfo<v8::Value> &args) {
    LOGFN("addFilter");
    Isolate *isolate = getIsolate();
    Handle<Value> filter = args[1];
    if (filter.IsEmpty() || !filter->IsObject()) {
        LOG("{context} WARNING: Invalid filter provided");
    } else {
        Handle<Object> filter_object(filter->ToObject(isolate));

        String::Utf8Value type_str(isolate, filter_object->Get(STRING_CACHE_type.Get(isolate))->ToString(isolate));
        const char *type = ToCString(type_str);
        if(strncmp(type,"LinearAdd", strlen("LinearAdd"))==0) {
            context_2d_set_filter_type(GET_CONTEXT2D(), FILTER_LINEAR_ADD);
        } else if(strncmp(type,"Multiply",strlen("Multiply"))==0) {
            context_2d_set_filter_type(GET_CONTEXT2D(), FILTER_MULTIPLY);
        }

        double r = filter_object->Get(STRING_CACHE_r.Get(isolate))->NumberValue(isolate->GetCurrentContext()).ToChecked();
        double g = filter_object->Get(STRING_CACHE_g.Get(isolate))->NumberValue(isolate->GetCurrentContext()).ToChecked();
        double b = filter_object->Get(STRING_CACHE_b.Get(isolate))->NumberValue(isolate->GetCurrentContext()).ToChecked();
        double a = filter_object->Get(STRING_CACHE_a.Get(isolate))->NumberValue(isolate->GetCurrentContext()).ToChecked();
        //convert the 0-255 values to floats
        r /= 255;
        g /= 255;
        b /= 255;
        rgba color = {r, g, b, a};
        context_2d_add_filter(GET_CONTEXT2D(), &color);
    }
}

void defClearFilters(const v8::FunctionCallbackInfo<v8::Value> &args) {
    Isolate *isolate = getIsolate();
    GET_CONTEXT2D()->filter_type = FILTER_NONE;
    context_2d_clear_filters(GET_CONTEXT2D());
}

Local<ObjectTemplate> get_context_2d_class_template(Isolate *isolate);

// Old, now using weakCallbackForObjectHolder below
static void context_2d_class_finalize(const v8::WeakCallbackInfo<context_2d> &data) {
    Isolate *isolate = data.GetIsolate();
    LOGFN("ctx2d dtor");
    context_2d *_ctx = static_cast<context_2d*>( data.GetParameter());
    context_2d_delete(_ctx);

    int size = _ctx->backing_width * _ctx->backing_height * 4;
    isolate->AdjustAmountOfExternalAllocatedMemory(-size);
    //Old v8
    //ctx.Dispose();
    //ctx.Clear();

    LOGFN("endctx2d dtor");
    delete data.GetParameter();
}

static void weakCallbackForObjectHolder(const v8::WeakCallbackInfo<view_animation> &data) {
    Isolate *isolate = data.GetIsolate();
    HandleScope scope(isolate);

    view_animation_release(static_cast<view_animation*>( data.GetParameter()), isolate);
    delete data.GetParameter();
}

void context_2d_class_ctor(const v8::FunctionCallbackInfo<v8::Value> &args) {
    LOGFN("ctx2d ctor");
    Isolate *isolate = getIsolate();
    Local<Object> canvas(args[0]->ToObject(isolate));
    String::Utf8Value str(isolate, args[1]);
    const char *url = ToCString(str);
    int destTex = args[2]->Int32Value(isolate->GetCurrentContext()).ToChecked();
    //Todo verify should Persistent SetWeak be used or simply Local instead Persistent below on line 709
    Local<Object> ctx = get_context_2d_class_template(isolate)->NewInstance();
    ctx->Set(STRING_CACHE_canvas.Get(isolate), canvas);
    context_2d *_ctx = context_2d_new(tealeaf_canvas_get(), url, destTex);
    ctx->SetInternalField(0, External::New(isolate, _ctx));

    //now make it weak
    Persistent<Object> persCtx(isolate, ctx);
    // Todo test canvas works well
    persCtx.SetWeak(_ctx, context_2d_class_finalize, v8::WeakCallbackType::kParameter);

    int size = _ctx->backing_width * _ctx->backing_height * 4;
    isolate->AdjustAmountOfExternalAllocatedMemory(size);

    LOGFN("endctx2d ctor");
    args.GetReturnValue().Set(ctx);
}

void js_gl_delete_textures(const v8::FunctionCallbackInfo<v8::Value> &args) {
    Isolate *isolate = getIsolate();
    LOGFN("start js_gl_delete_textures");
    texture_manager_clear_textures(texture_manager_get(), true);
    LOGFN("end js_gl_delete_textures");
}

void js_gl_touch_texture(const v8::FunctionCallbackInfo<v8::Value> &args) {
    Isolate *isolate = getIsolate();
    LOGFN("end js_gl_touch_texture");
    String::Utf8Value url_str(isolate, args[0]);
    const char *url = ToCString(url_str);
    texture_manager_touch_texture(texture_manager_get(), url);
    LOGFN("start js_gl_touch_texture");
}

void defResize(const v8::FunctionCallbackInfo<v8::Value> &args) {
    Isolate *isolate = getIsolate();
    int width = args[0]->Int32Value(isolate->GetCurrentContext()).ToChecked();
    int height = args[1]->Int32Value(isolate->GetCurrentContext()).ToChecked();
    context_2d *ctx = GET_CONTEXT2D();
    context_2d_resize(ctx, width, height);
    // texture may have changed, so return tex info to client js
    texture_2d *tex = texture_manager_get_texture(texture_manager_get(), ctx->url);
    Handle<Object> tex_data = Object::New(isolate);
    tex_data->Set(STRING_CACHE___gl_name.Get(isolate), Number::New(isolate, tex->name));
    tex_data->Set(STRING_CACHE__src.Get(isolate), String::NewFromUtf8(isolate, tex->url));
    args.GetReturnValue().Set(tex_data);
}

void defFillTextBitmapDeprecated(const v8::FunctionCallbackInfo<v8::Value> &args) {
    Isolate *isolate = getIsolate();
    String::Utf8Value str(isolate, args[0]);
    const char *text = ToCString(str);
    double x = args[1]->NumberValue(isolate->GetCurrentContext()).ToChecked();
    double y = args[2]->NumberValue(isolate->GetCurrentContext()).ToChecked();
    float scale = args[3]->NumberValue(isolate->GetCurrentContext()).ToChecked();
    String::Utf8Value str2(isolate, args[4]);
    const char *src_tex = ToCString(str2);
    int tex_name = args[5]->Int32Value(isolate->GetCurrentContext()).ToChecked();
    Handle<Object> defs(args[6]->ToObject(isolate));
    //int composite_op = args[7]->Int32Value(isolate->GetCurrentContext()).ToChecked();


    int space_width = defs->Get(STRING_CACHE_spaceWidth.Get(isolate))->Int32Value(isolate->GetCurrentContext()).ToChecked();
    char c = '\0';
    char buf[2] = {'\0'};
    for (int i = 0; (c = text[i]) != 0; i++) {
        if (c == ' ') {
            x += space_width * scale;
        } else {
            snprintf(buf, sizeof(buf), "%c", c);
            Handle<Object> def = Handle<Object>::Cast(defs->Get(String::NewFromUtf8(isolate, buf)));
            if (!def.IsEmpty()) {
                int a = def->Get(STRING_CACHE_a.Get(isolate))->Int32Value(isolate->GetCurrentContext()).ToChecked();
                int c = def->Get(STRING_CACHE_c.Get(isolate))->Int32Value(isolate->GetCurrentContext()).ToChecked();
                int x1 = def->Get(STRING_CACHE_x1.Get(isolate))->Int32Value(isolate->GetCurrentContext()).ToChecked();
                int y1 = def->Get(STRING_CACHE_y1.Get(isolate))->Int32Value(isolate->GetCurrentContext()).ToChecked();
                int w = def->Get(STRING_CACHE_w.Get(isolate))->Int32Value(isolate->GetCurrentContext()).ToChecked();
                int h = def->Get(STRING_CACHE_h.Get(isolate))->Int32Value(isolate->GetCurrentContext()).ToChecked();

                rect_2d src_rect = {x1, y1, w, h};
                rect_2d dest_rect = {x, y, w * scale, h * scale};
                x += a * scale;
                context_2d_drawImage(GET_CONTEXT2D(), tex_name, src_tex, &src_rect, &dest_rect);
                x += c * scale;
            }
        }
    }
}

void defSetGlobalCompositeOperation(const v8::FunctionCallbackInfo<v8::Value> &args) {
    Isolate *isolate = getIsolate();
    HandleScope handle_scope(isolate);
    LOGFN("setGlobalCompositeOperation");
    int composite_op = args[0]->Int32Value(isolate->GetCurrentContext()).ToChecked();
    context_2d_setGlobalCompositeOperation(GET_CONTEXT2D(), composite_op);
    LOGFN("endsetGlobalCompositeOperation");
}

void defGetGlobalCompositeOperation(const v8::FunctionCallbackInfo<v8::Value> &args) {
    LOGFN("getGlobalCompositeOperation");
    Isolate *isolate = getIsolate();
    HandleScope handle_scope(isolate);
    int composite_op = context_2d_getGlobalCompositeOperation(GET_CONTEXT2D());

    LOGFN("endgetGlobalCompositeOperation");
}

/**
   Retrieves the given context

   @param	args[0] => the given context2d, can be connected to an on/off-screen buffer
   @param	args[1] => filename to save the on/off-screen buffer with
   @return 	Undefined
**/
void defSaveBufferToFile(const v8::FunctionCallbackInfo<v8::Value> &args) {
    Isolate *isolate = getIsolate();
    //get this context 2d instance
//	Handle<Object> js_ctx = Handle<Object>::Cast(args[0]);
//	Handle<Object> _ctx = Handle<Object>::Cast(js_ctx->Get(String::New("_ctx")));
//	context_2d *ctx = GET_CONTEXT2D_FROM(_ctx);
//	//get filename for the fbo to be saved to
//	String::Utf8Value filename_str(args[1]);
//	const char *filename = ToCString(filename_str);
//	bool did_save = context_2d_save_buffer_to_file(ctx, filename);
    args.GetReturnValue().Set(Boolean::New(isolate, true));
}

/**
   Retrieves the given context
   @param	args[0] => the given context2d, can be connected to an on/off-screen buffer
   @return 	Undefined
**/
void defToDataURL(const v8::FunctionCallbackInfo<v8::Value> &args) {
    Isolate *isolate = getIsolate();
    //get this context 2d instance
    Handle<Object> js_ctx = Handle<Object>::Cast(args[0]);
    Handle<Object> _ctx = Handle<Object>::Cast(js_ctx->Get(String::NewFromUtf8(isolate, "_ctx")));
    context_2d *ctx = GET_CONTEXT2D_FROM(_ctx);
    char * data = context_2d_save_buffer_to_base64(ctx, "PNG");
    Handle<Value> str;
    if (data != NULL) {
        str = String::NewFromUtf8(isolate, data);
        free(data);
    } else {
        str = String::NewFromUtf8(isolate,"");
    }
    args.GetReturnValue().Set(str);
}

void defSetTransform(const v8::FunctionCallbackInfo<v8::Value> &args) {
    Isolate *isolate = getIsolate();
    double m11 = args[0]->NumberValue(isolate->GetCurrentContext()).ToChecked();
    double m21 = args[1]->NumberValue(isolate->GetCurrentContext()).ToChecked();
    double m12 = args[2]->NumberValue(isolate->GetCurrentContext()).ToChecked();
    double m22 = args[3]->NumberValue(isolate->GetCurrentContext()).ToChecked();
    double dx = args[4]->NumberValue(isolate->GetCurrentContext()).ToChecked();
    double dy = args[5]->NumberValue(isolate->GetCurrentContext()).ToChecked();

    context_2d_setTransform(GET_CONTEXT2D(), m11, m21, m12, m22, dx, dy);
}


void js_gl_init() {
}

Local<ObjectTemplate> get_context_2d_class_template(Isolate *isolate) {
    Handle<ObjectTemplate> context_2d_class_template;
    context_2d_class_template = ObjectTemplate::New(isolate);
    context_2d_class_template->SetInternalFieldCount(1);

    context_2d_class_template->Set(STRING_CACHE_loadIdentity.Get(isolate), FunctionTemplate::New(isolate, defLoadIdentity));
    context_2d_class_template->Set(STRING_CACHE_drawImage.Get(isolate), FunctionTemplate::New(isolate, defDrawImage));
    context_2d_class_template->Set(STRING_CACHE_flushDrawImage.Get(isolate), FunctionTemplate::New(isolate, defFlushImages));
    context_2d_class_template->Set(STRING_CACHE_newTexture.Get(isolate), FunctionTemplate::New(isolate, defNewTexture));
    context_2d_class_template->Set(STRING_CACHE_rotate.Get(isolate), FunctionTemplate::New(isolate, defRotate));
    context_2d_class_template->Set(STRING_CACHE_scale.Get(isolate), FunctionTemplate::New(isolate, defScale));
    context_2d_class_template->Set(STRING_CACHE_translate.Get(isolate), FunctionTemplate::New(isolate, defTranslate));
    context_2d_class_template->Set(STRING_CACHE_save.Get(isolate), FunctionTemplate::New(isolate, defSave));
    context_2d_class_template->Set(STRING_CACHE_restore.Get(isolate), FunctionTemplate::New(isolate, defRestore));
    context_2d_class_template->Set(STRING_CACHE_clear.Get(isolate), FunctionTemplate::New(isolate, defClear));
    context_2d_class_template->Set(STRING_CACHE_setGlobalAlpha.Get(isolate), FunctionTemplate::New(isolate, defSetGlobalAlpha));
    context_2d_class_template->Set(STRING_CACHE_getGlobalAlpha.Get(isolate), FunctionTemplate::New(isolate, defGetGlobalAlpha));
    context_2d_class_template->Set(STRING_CACHE__loadImage.Get(isolate), FunctionTemplate::New(isolate, defLoadImage));
    context_2d_class_template->Set(STRING_CACHE_clearRect.Get(isolate), FunctionTemplate::New(isolate, defClearRect));
    context_2d_class_template->Set(STRING_CACHE_fillRect.Get(isolate), FunctionTemplate::New(isolate, defFillRect));
    context_2d_class_template->Set(STRING_CACHE_strokeRect.Get(isolate), FunctionTemplate::New(isolate, defStrokeRect));
    context_2d_class_template->Set(STRING_CACHE_measureText.Get(isolate), FunctionTemplate::New(isolate, defMeasureText));
    context_2d_class_template->Set(STRING_CACHE_fillText.Get(isolate), FunctionTemplate::New(isolate, defFillText));
    context_2d_class_template->Set(STRING_CACHE_strokeText.Get(isolate), FunctionTemplate::New(isolate, defStrokeText));
    context_2d_class_template->Set(STRING_CACHE_enableScissor.Get(isolate), FunctionTemplate::New(isolate, defEnableScissor));
    context_2d_class_template->Set(STRING_CACHE_disableScissor.Get(isolate), FunctionTemplate::New(isolate, defDisableScissor));
    context_2d_class_template->Set(STRING_CACHE_drawPointSprites.Get(isolate), FunctionTemplate::New(isolate, defDrawPointSprites));
    context_2d_class_template->Set(String::NewFromUtf8(isolate, "setGlobalCompositeOperation"), FunctionTemplate::New(isolate, defSetGlobalCompositeOperation));
    context_2d_class_template->Set(String::NewFromUtf8(isolate, "getGlobalCompositeOperation"), FunctionTemplate::New(isolate, defGetGlobalCompositeOperation));
    context_2d_class_template->Set(String::NewFromUtf8(isolate, "setTransform"), FunctionTemplate::New(isolate, defSetTransform));
    context_2d_class_template->Set(STRING_CACHE_resize.Get(isolate), FunctionTemplate::New(isolate, defResize));

    // bitmap fonts
    context_2d_class_template->Set(STRING_CACHE_measureTextBitmap.Get(isolate), FunctionTemplate::New(isolate, defMeasureTextBitmap));
    context_2d_class_template->Set(STRING_CACHE_fillTextBitmap.Get(isolate), FunctionTemplate::New(isolate, defFillTextBitmap));

    // deprecated
    context_2d_class_template->Set(STRING_CACHE_fillTextBitmapDeprecated.Get(isolate), FunctionTemplate::New(isolate, defFillTextBitmapDeprecated));

    context_2d_class_template->Set(STRING_CACHE_addFilter.Get(isolate), FunctionTemplate::New(isolate, defAddFilter));
    context_2d_class_template->Set(STRING_CACHE_clearFilters.Get(isolate), FunctionTemplate::New(isolate, defClearFilters));

    return context_2d_class_template;
}

Local<ObjectTemplate> js_gl_get_template(Isolate *isolate) {
    Local<ObjectTemplate> gl = ObjectTemplate::New(isolate);
    gl->Set(String::NewFromUtf8(isolate, "toDataURL"), FunctionTemplate::New(isolate, defToDataURL));
    gl->Set(STRING_CACHE_Context2D.Get(isolate), FunctionTemplate::New(isolate, context_2d_class_ctor));
    gl->Set(STRING_CACHE_flushImages.Get(isolate), FunctionTemplate::New(isolate, defFlushImages));
    gl->Set(STRING_CACHE__loadImage.Get(isolate), FunctionTemplate::New(isolate, defLoadImage));
    gl->Set(STRING_CACHE_newTexture.Get(isolate), FunctionTemplate::New(isolate, defNewTexture));
    gl->Set(STRING_CACHE_deleteTexture.Get(isolate), FunctionTemplate::New(isolate, defDestroyImage));
    gl->Set(STRING_CACHE__fillText.Get(isolate), FunctionTemplate::New(isolate, defFillTextBitmap));
    gl->Set(STRING_CACHE_deleteAllTextures.Get(isolate), FunctionTemplate::New(isolate, js_gl_delete_textures));
    gl->Set(STRING_CACHE_touchTexture.Get(isolate), FunctionTemplate::New(isolate, js_gl_touch_texture));

    return gl;
}
