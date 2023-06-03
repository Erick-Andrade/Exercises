#include <stdio.h>
#include <stdlib.h>

int main() {

    double salario, aumento, novo;
    int percentual;
    scanf("%lf", &salario);

    if (salario > 2000) {
        percentual = 4;
    } else if (salario > 1200) {
        percentual = 7;
    } else if (salario > 800) {
        percentual = 10;
    } else if (salario > 400) {
        percentual = 12;
    } else {
        percentual = 15;
    }
    aumento = salario * (percentual / 100.0);
    novo = salario + aumento;
    
    printf("Novo salario: %.2lf\n", novo);
    printf("Reajuste ganho: %.2lf\n", aumento);
    printf("Em percentual: %d %%\n", percentual);
    return 0;
}