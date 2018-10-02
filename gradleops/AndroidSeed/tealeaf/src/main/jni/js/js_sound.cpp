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
#include "js/js_sound.h"
#include "platform/sound_manager.h"
#include "include/v8.h"
using namespace v8;

void defLoadSound(const v8::FunctionCallbackInfo<v8::Value> &args) {
    Isolate *isolate = args.GetIsolate();
    LOGFN("load sound");
    String::Utf8Value str(isolate, args[0]);
    const char *url = ToCString(str);
    sound_manager_load_sound(url);
    LOGFN("end load sound");;
}

void defPlaySound(const v8::FunctionCallbackInfo<v8::Value> &args) {
    Isolate *isolate = args.GetIsolate();
    LOGFN("play sound");
    String::Utf8Value str(isolate, args[0]);
    double volume = args[1]->NumberValue(isolate->GetCurrentContext()).ToChecked();
    bool loop = args[2]->IsTrue();
    const char *url = ToCString(str);
    sound_manager_play_sound(url, volume, loop);
    LOGFN("end play sound");
}

void defStopSound(const v8::FunctionCallbackInfo<v8::Value> &args) {
    Isolate *isolate = args.GetIsolate();
    LOGFN("stop sound");
    String::Utf8Value str(isolate, args[0]);
    const char *url = ToCString(str);
    sound_manager_stop_sound(url);
    LOGFN("end stop sound");
}

void defPauseSound(const v8::FunctionCallbackInfo<v8::Value> &args) {
    Isolate *isolate = args.GetIsolate();
    LOGFN("pause sound");
    String::Utf8Value str(isolate, args[0]);
    const char *url = ToCString(str);
    sound_manager_pause_sound(url);
    LOGFN("end pause sound");
}

void defSetVolume(const v8::FunctionCallbackInfo<v8::Value> &args) {
    Isolate *isolate = args.GetIsolate();
    LOGFN("set volume sound");
    String::Utf8Value str(isolate, args[0]);
    float volume = args[1]->NumberValue(isolate->GetCurrentContext()).ToChecked();
    const char *url = ToCString(str);
    sound_manager_set_volume(url, volume);
    LOGFN("end set volume sound");
}


void defPlayBackgroundMusic(const v8::FunctionCallbackInfo<v8::Value> &args) {
    Isolate *isolate = args.GetIsolate();
    LOGFN("play bg music");
    String::Utf8Value str(isolate, args[0]);
    double volume = args[1]->NumberValue(isolate->GetCurrentContext()).ToChecked();
    bool loop = args[2]->IsTrue();
    const char *url = ToCString(str);
    sound_manager_play_background_music(url, volume, loop);
    LOGFN("end play bg music");
}

void defLoadBackgroundMusic(const v8::FunctionCallbackInfo<v8::Value> &args) {
    Isolate *isolate = args.GetIsolate();
    LOGFN("load bg music");
    String::Utf8Value str(isolate, args[0]);
    const char *url = ToCString(str);
    sound_manager_load_background_music(url);
    LOGFN("end load bg music");
}

void defSeekTo(const v8::FunctionCallbackInfo<v8::Value> &args) {
    Isolate *isolate = args.GetIsolate();
    LOGFN("seek to position");
    String::Utf8Value str(isolate, args[0]);
    float position = args[1]->NumberValue(isolate->GetCurrentContext()).ToChecked();
    const char *url = ToCString(str);
    sound_manager_seek_to(url, position);
    LOGFN("end seek to position");
}

Local<ObjectTemplate> js_sound_get_template() {
    Isolate *isolate = Isolate::GetCurrent();
    Local<ObjectTemplate> sound = ObjectTemplate::New(isolate);
    sound->Set(STRING_CACHE_playSound.Get(isolate), FunctionTemplate::New(isolate, defPlaySound));
    sound->Set(STRING_CACHE_loadSound.Get(isolate), FunctionTemplate::New(isolate, defLoadSound));
    sound->Set(STRING_CACHE_playBackgroundMusic.Get(isolate), FunctionTemplate::New(isolate, defPlayBackgroundMusic));
    sound->Set(STRING_CACHE_loadBackgroundMusic.Get(isolate), FunctionTemplate::New(isolate, defLoadBackgroundMusic));
    sound->Set(STRING_CACHE_stopSound.Get(isolate), FunctionTemplate::New(isolate, defStopSound));
    sound->Set(STRING_CACHE_pauseSound.Get(isolate), FunctionTemplate::New(isolate, defPauseSound));
    sound->Set(STRING_CACHE_setVolume.Get(isolate), FunctionTemplate::New(isolate, defSetVolume));
    sound->Set(STRING_CACHE_seekTo.Get(isolate), FunctionTemplate::New(isolate, defSeekTo));
    return sound;
}
