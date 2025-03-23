#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int numeroJogador, numeroComputador, resultado;
    char tipoComparacao;
    srand(time(0));
    numeroComputador = rand() % 100 +1;
    printf("bem vindo ao jogo maior, menor ou igual&!\n");
    printf("voce deve escolher um numero e seu tipo de comparacao.\n");
    printf("M. maior\n");
    printf("N. menor\n");
    printf("I. iguakl\n");
    printf("escolha a comparacao: ");
    scanf("%c", &tipoComparacao);
    printf("digite seu numero ((entre 1 e100): ");
    scanf("%d", &numeroJogador);
    print("o numero do computador  e: %d\n", numeroComputador);

    switch (tipoComparacao)
    {
        case 'M':
        case 'm':
                resultado = numeroJogador ? 1 : 0;
            break;
            case 'N':
            case 'n':
                resultado = numeroJogador < numeroComputador ? 1 : 0;
                break;
            case 'I':
            case 'i':
                resultado = numeroJogador == numeroComputador ? 1 : 0;
                break;
            default:
                printf("opcao invalida\n");
                break;
                
        }
        printf("o numero do computador e: %d\n", numeroComputador, numeroJogador);
        if (resultado == 1)
        {
            printf("parabens, voce venceu!\n");
        } else {
            printf("infelismente, voce perdeu!\n");
            
        }
        }
        


/**/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int numeroJogador, numeroComputador, resultado;
    char tipoComparacao;
    srand(time(0));
    numeroComputador = rand() % 100 + 1;
    printf("Bem vindo ao jogo maior, menor ou igual!\n");
    printf("voco deve escolher um numero e seu tipo de comparacao.\n");
    printf("M. maior\n");
    prinrf("N. menor\n");
}