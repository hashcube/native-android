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
#include "js/js_socket.h"

#include "platform/socket.h"

#include "include/v8.h"
using namespace v8;

void js_socket_send(const v8::FunctionCallbackInfo<v8::Value> &args) {
    Isolate *isolate = args.GetIsolate();
    LOGFN("socket send");
    int id = args.This()->Get(STRING_CACHE___id.Get(isolate))->Int32Value(isolate->GetCurrentContext()).ToChecked();
    String::Utf8Value data(isolate, args[0]);
    const char *data_str = ToCString(data);
    socket_send(id, data_str);
    LOGFN("end socket send");
}

void js_socket_close(const v8::FunctionCallbackInfo<v8::Value> &args) {
    Isolate *isolate = args.GetIsolate();
    LOGFN("socket close");
    int id = args.This()->Get(STRING_CACHE___id.Get(isolate))->Int32Value(isolate->GetCurrentContext()).ToChecked();
    socket_close(id);
    LOGFN("end socket close");
}

Local<ObjectTemplate> get_socket_template(Isolate *isolate) {
    Handle<ObjectTemplate> socket = ObjectTemplate::New(isolate);
    socket->Set(STRING_CACHE_send.Get(isolate), FunctionTemplate::New(isolate, js_socket_send));
    socket->Set(STRING_CACHE_close.Get(isolate), FunctionTemplate::New(isolate, js_socket_close));
    socket->Set(STRING_CACHE_onConnect.Get(isolate), FunctionTemplate::New(isolate, js_socket_default_callback));
    socket->Set(STRING_CACHE_onRead.Get(isolate), FunctionTemplate::New(isolate, js_socket_default_callback));
    socket->Set(STRING_CACHE_onClose.Get(isolate), FunctionTemplate::New(isolate, js_socket_default_callback));
    return socket;
}

void js_socket_ctor(const v8::FunctionCallbackInfo<v8::Value> &args) {
    Isolate *isolate = args.GetIsolate();
    String::Utf8Value host(isolate, args[0]);
    const char *host_str = ToCString(host);
    int port = args[1]->Int32Value(isolate->GetCurrentContext()).ToChecked();

    int id = socket_create(host_str, port);

    Handle<Object> socket = get_socket_template(isolate)->NewInstance();
    socket->Set(STRING_CACHE___id.Get(isolate), Number::New(isolate, id));
    args.GetReturnValue().Set(socket);
}

void js_socket_default_callback(const v8::FunctionCallbackInfo<v8::Value> &args) {

}
