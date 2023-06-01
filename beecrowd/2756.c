#include <stdio.h>
#include <stdlib.h>

int main () {

    char c = 'A';
    int espacos = 7, meio = 0;

    for (int i = 0; i < 9; i++) {
        for (int j = 0; j < espacos; j++) {
            printf(" ");
        }
        printf("%c", c);

        for (int j = 0; j < meio; j++) {
            printf(" ");
        }

        if (meio != 0) {
            printf("%c", c);
        }
        if (i < 4) {
            if (i == 0) {
                meio++;
            } else {
                meio += 2;
            }
            espacos--;
        } else {
            if (i < 7) {
                meio -= 2;
            } else {
                meio = 0;
            }
            espacos++;
        }




        printf("\n");

        if (i < 4) {
            c++;
        } else {
            c--;
        }

    }
    return 0;
}