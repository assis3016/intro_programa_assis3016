
/*#include <stdio.h>
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
    */
   
    #include <stdio.h>
   #include <stdlib.h>
   #include <time.h>
   
   int main(){
       int fat = 1, i, n;
       do {
           printf("entre com um numero para calcular o fatorial:\n");
           scanf("%d", &n);
        
       } while (n < 0);
       for (i = 2; i <= n; i++){
           fat *= i;
           i++;
       }
           printf("o fatorial de %d e %d.\n", n, fat);
            return 0;
       }
   */
  #include<stdio.h>
  int main(){
  int fat = 1, n, temp;
  printf("entre com um numero fatorial:\n");
  scanf("%d", &n);
  if(n < 0){
  printf("numeros negativos são invalidodos para fatorial.\n");
  return 1;
  }
  temp = n;
  while(n > 1){
  fat = fat * n;
  n--;
  }
  printf("o fatorial de %d e %d.\n", temp, fat);
  return 0;
  }