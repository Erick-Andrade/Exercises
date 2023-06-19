var input = require('fs').readFileSync('/dev/stdin', 'utf8');
var valores = input.split('\n');
var a = parseInt(valores.shift());
var b = parseInt(valores.shift());
var x = a + b;
console.log(`X = ${x}`);