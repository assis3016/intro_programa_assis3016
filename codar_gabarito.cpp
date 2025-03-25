
/*#include <stdio.h>
#include<stdlib.h>
#include <time.h>

int main() {
    int numeroJogador, numeroComputador, resultado;
    char tipoComparacao;
    
    srand(time(0));
    numeroComputador = rand() % 100 + 1;
    printf("bem vindo ao jogo maior, menor ou igual!\n");
    printf("voce deve escolher um numero e seu tipo de comparacao.\n");
    printf("M. maior\n");
    printf("N. menor\n");
    printf("N. menor\n");
    printf("I. igual\n");
 
    printf("escolha a comparacao: ");
    scanf(" %c", &tipoComparacao);
    printf("digite seu numero (entre 1 e100): ");
    scanf("%d" , &numeroJogador);
    
    printf(" o numero do computador e: %d\n",  numeroComputador);

    switch (tipoComparacao)
    {
        case 'M':
        case 'm':
            resultado = numeroJogador > numeroComputador ? 1: 0;
            break;
            case 'N':
            case 'n':
                resultado = numeroJogador < numeroComputador ? 1 :  0;
                break;
            case 'I':
            case 'i':
                resultado = numeroJogador == numeroComputador ? 1 :0;
            break;
            default:
                printf("opcao invalida\n");
                break;
        }
                printf("o numero do computador e : %d, e o numero do jogador e: %d\n", numeroComputador, numeroJogador);
                    if(resultado == 1)
                    {
                        printf("parrabrns , voce venceu!\n");
                        } else {
                            printf("infelizmente, voce perdeu!\n");
                        }print#include <stdio.h>
                        #include <stdlib.h>
                        #include <time.h>
                        
                        int main() {
                            int numeroJogador, numeroComputador, resultado = -1; // Inicializa resultado para evitar lixo de memória
                            char tipoComparacao;
                            
                            srand(time(0));
                            numeroComputador = rand() % 100 + 1;
                        
                            printf("Bem-vindo ao jogo Maior, Menor ou Igual!\n");
                            printf("Você deve escolher um número e seu tipo de comparação.\n");
                            printf("M - Maior\n");
                            printf("N - Menor\n");
                            printf("I - Igual\n");
                         
                            printf("Escolha a comparação: ");
                            scanf(" %c", &tipoComparacao);  // Adicionado um espaço antes de %c para ignorar '\n' pendente
                        
                            printf("Digite seu número (entre 1 e 100): ");
                            scanf("%d", &numeroJogador);
                        
                            if (numeroJogador < 1 || numeroJogador > 100) {
                                printf("Número inválido! Escolha um número entre 1 e 100.\n");
                                return 1;  // Encerra o programa com código de erro
                            }
                        
                            printf("O número do computador é: %d\n", numeroComputador);
                        
                            switch (tipoComparacao) {
                                case 'M':
                                case 'm':
                                    resultado = (numeroJogador > numeroComputador) ? 1 : 0;
                                    break;
                                case 'N':
                                case 'n':
                                    resultado = (numeroJogador < numeroComputador) ? 1 : 0;
                                    break;
                                case 'I':
                                case 'i':
                                    resultado = (numeroJogador == numeroComputador) ? 1 : 0;
                                    break;
                                default:
                                    printf("Opção inválida!\n");
                                    return 1;  // Encerra o programa com código de erro
                            }
                        
                            // Exibe os números novamente
                            printf("O número do computador é: %d, e o número do jogador é: %d\n", numeroComputador, numeroJogador);
                        
                            if (resultado == 1) {
                                printf("Parabéns, você venceu!\n");
                            } else {
                                printf("Infelizmente, você perdeu!\n");
                            }
                        
                            return 0;  // Indica que o programa finalizou corretamente
                        }
         }

         */
        /*
         #include <stdio.h>
         #include <stdlib.h>
         #include <time.h>
     
         int main() {
             int i = 1;
             while (i <= 10){
                 printf("%d", i);
             i++;
         }
         }*/
        /* #include <stdio.h>
         #include <stdlib.h>
         #include <time.h>
     
         int main() {
             int i = 1;
             while (i <= 10){
                 printf("%d", i);
             i++;
         }
         }*/
         #include <stdio.h>
         #include <stdlib.h>
         #include <time.h>
     
         int main () {
         
         int i = 1;
         while (i <= 10) {
             printf("%d", i);
             i++;
     }
     }
    
