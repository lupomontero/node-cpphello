#include <v8.h>
#include <node.h>

using namespace v8;

Handle<Value> foo(const Arguments& args) {
  HandleScope scope;
  return scope.Close(String::New("Hello World"));
}

void init(Handle<Object> exports) {
  NODE_SET_METHOD(exports, "foo", foo);
}

NODE_MODULE(cpphello, init)

