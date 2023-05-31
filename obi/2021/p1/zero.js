var n, numeros = [], total = 0;
scanf("%d", "n");

while (n--) {
   var num;
   scanf("%d", "num");
   if (num !== 0) {
        numeros.push(num);
   } else {
        if (numeros.length !== 0) {
            numeros.pop();
        }
   }
}

for (var i = 0; i < numeros.length; i++) {
    total += numeros[i];
}

printf("%d\n", total);