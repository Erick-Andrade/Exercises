/*
Branca:
    se linha for impar e coluna impar
    se linha for par e coluna par
Preta:
    se a paridade da linha e coluna forem diferentes
*/

var l, c, resultado = 0; // assumindo que o resultado é preto (0)
scanf("%d%d", "l", "c");

if (l % 2 === 0 && c % 2 === 0) {
    resultado = 1;
} else if (l % 2 === 1 && c % 2 === 1) {
    resultado = 1;
}

printf("%d\n", resultado);