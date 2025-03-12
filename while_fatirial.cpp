#include <stdio.h>
#include <stdlib.h>

int main() {
    int fat = 1, i, n;
    printf("entre com um numero para calcular o fatorial: ");
    scanf("%d", &n);
    i = n;
    while (i > 1) {
        fat = fat * i;
        i--;
    }
    printf("O fatorial de %d é %d.\n", n, fat);
    return 0;
}