var resultado, total = 0;

for (var i = 0; i < 6; i++) {
    scanf("%c\n", "resultado");

    if (resultado === 'V') {
        total += 1;
    }
}

var grupo = -1;
if (total >= 5) {
    grupo = 1;
} else if (total >= 3) {
    grupo = 2;
} else if (total >= 1) {
    grupo = 3;
}

printf("%d\n", grupo);