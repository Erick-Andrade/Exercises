#include <stdio.h>
#include <stdlib.h>

int main() {
    double num, average = 0;

    for (int i = 0; i < 2; i++){
        scanf("%lf", &num);
        while (num < 0 || num > 10){
            printf("nota invalida\n");
            scanf("%lf", &num);
        }

        average += num;
    }

    average /= 2;
    printf("media = %.2lf\n", average);
    return 0;
}