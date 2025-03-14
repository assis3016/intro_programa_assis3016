#include <stdio.h>
#include <stdlib.h>

int main () {
    int fat = 1, i, n;
    do {
        printf(" entre com um numero para calcular o  fatorial: ");
        scanf("%d", &n);
        } while (n < 0);
    i = n;
    while (i > 1 ) {
        fat = fat * i;
        i--;
    }
        printf("o fatorial de %d e %d.\n", n, fat);
        return 0;
}