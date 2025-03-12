//escreva o valor de i + 1 e repita o precesso só que agora o volor de i é 2, e assim por diante até que o  valor de i seja 10.
//O código abaixo é um exemplo de um laço de repetição com a estrutura switch-case.
#include <stdio.h>
#include <stdlib.h>

int main() {
    int i = 1;
    while (i <= 10) {
        printf("%d", i);
        i++;
    }
}