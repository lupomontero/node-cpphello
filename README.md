# The simplest possible "hello world" node.js module written in C++

[![Build Status](https://travis-ci.org/lupomontero/node-cpphello.svg?branch=master)](https://travis-ci.org/lupomontero/node-cpphello)

This is a super simple module written as a C++ binding. It does not show how to
handle async io, but at least it illustrates how the code hooks into _node_ and
_v8_. This is just a place to start...

Download, build and test instructions:

```sh
# Install node-gyp globally if not installed yet
npm install -g node-gyp

# Clone, build and test
git clone git://github.com/lupomontero/node-cpphello.git
cd node-cpphello
node-gyp configure build
npm test
```

More info here:
[Writing node.js modules in C++](http://www.lupomontero.com/writing-node-js-modules-in-cpp/)

Further reading:

* [node-gyp](https://github.com/TooTallNate/node-gyp)
* [Node.js Addons API](https://nodejs.org/api/addons.html)
* [rvagg/node-addon-examples](https://github.com/rvagg/node-addon-examples)

