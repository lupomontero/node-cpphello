# The simplest possible "hello world" node.js module written in C++

This is a super simple module written as a C++ binding. It does not show how to
handle async io, but at least it illustrates how the code hooks into _node_ and
_v8_. This is just a place to start...

Download, build and test instructions:

    $ git clone git://github.com/lupomontero/node-cpphello.git
    $ cd node-cpphello
    $ node-waf configure build
    $ node test/cpphello.js

More info here:
[Writing node.js modules in C++](http://www.lupomontero.com/writing-node-js-modules-in-cpp/)

A more detailed article on the _How To Node_ website:
[http://howtonode.org/how-to-module](http://howtonode.org/how-to-module)

Other basic examples (using async io):

* [https://github.com/pkrumins/node-async](https://github.com/pkrumins/node-async)
* [https://github.com/isaacs/node-async-simple](https://github.com/isaacs/node-async-simple)


[![Bitdeli Badge](https://d2weczhvl823v0.cloudfront.net/lupomontero/node-cpphello/trend.png)](https://bitdeli.com/free "Bitdeli Badge")

