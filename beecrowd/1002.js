var input = parseFloat(require('fs').readFileSync('/dev/stdin', 'utf8'));
var area = 3.14159 * Math.pow(input, 2);
console.log(`A=${area.toFixed(4)}`);