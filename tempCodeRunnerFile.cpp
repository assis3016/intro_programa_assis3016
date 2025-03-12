#include <stdio.h>
#include <stdlib.h>

int main() {
    int opcao;
    printf("1. menu principal\n");
    printf("2. iniciar o jogo\n");
    printf("3.ver regras\n");
    printf("4. escolha uma opcao\n");
    scanf("%d", &opcao);

switch (opcao){
case 1:
    printf("iniciando o jogo...\n");
    // codigo pra iniciar o jogo
    break;
case 2:
    printf("regras do jogo:\n");
    printf("1. regra1\n");
    printf("2. regra2\n");
    printf("3. regra3\n");
    // codigo a exibir regras
    break;
case 3:
    printf("saindo...\n");
	break;
    default:
	printf("opcao invalida. tente novamente\n");
    break;
}
return 0;
}