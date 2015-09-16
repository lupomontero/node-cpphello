#include <node.h>

namespace cpphello {

  using v8::FunctionCallbackInfo;
  using v8::Isolate;
  using v8::Local;
  using v8::Object;
  using v8::String;
  using v8::Value;

  void Foo(const FunctionCallbackInfo<Value>& args) {
    Isolate* isolate = args.GetIsolate();
    args.GetReturnValue().Set(String::NewFromUtf8(isolate, "Hello World"));
  }

  void Init(Local<Object> exports) {
    NODE_SET_METHOD(exports, "foo", Foo);
  }

  NODE_MODULE(cpphello, Init)

}

