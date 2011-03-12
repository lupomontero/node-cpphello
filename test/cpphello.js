var
  util = require('util'),
  cpphello = require('../cpphello');

console.log(cpphello.foo());
console.log(util.inspect(cpphello, true, null));
