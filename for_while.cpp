#include <stdio.h>
#include <stdlib.h>

int main () {
    int fat = 1, i, n; // Declaração de variáveis
    do { //inicio do laço de repetição
        printf("entre com um numero para calcular o fatorial:\n"); 8/ mensagem ao usuário
        scanf("%d", &n); //entrada de dados
    } while (n < 0); //condição de parada do laço de repetição
    for (i = 2; i <= n; i++) {// inicio do laço de repetição
        fat = fat * i; //calculo do fatorial
    }
    printf("O fatorial  de %d e %d.\n", n, fat); // mensagem ao usuário
} // mensagem do usuário
    
    
    