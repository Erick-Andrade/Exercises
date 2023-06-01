#include <stdio.h>
#include <stdlib.h>

int main() {

    double n;
    int notas[] = {10000, 5000, 2000, 1000, 500, 200}, centavos[] = {100, 50, 25, 10, 5, 1};
    scanf("%lf", &n);

    int centavo = (n * 100 + 0.5);
    printf("NOTAS:\n");
    for (int i = 0; i < 6; i++) {
        int qtd = centavo / notas[i];
        centavo %= notas[i];
        printf("%d nota(s) de R$ %d.00\n", qtd, notas[i] / 100);
    }

    printf("MOEDAS:\n");
     for (int i = 0; i < 6; i++) {
        int qtd = centavo / centavos[i];
        centavo %= centavos[i];
        printf("%d moeda(s) de R$ %.2lf\n", qtd, (centavos[i] / 100.0));
    }
    return 0;
}