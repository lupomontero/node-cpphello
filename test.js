var assert = require('assert');
var cpphello = require('./');

assert.equal(typeof cpphello.foo, 'function');
assert.equal(cpphello.foo(), 'Hello World');
