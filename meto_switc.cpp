#include <stdio.h>
#include <stdlib.h>

int main()
{
    int opcao;
    printf("menu principal\n");
    printf("1. iniciar o jogo\n");
    printf("2. ver regra \n");
    printf("3. sair\n");
    printf("escolha uma opcao: \n");
    scanf("%d", &opcao);
    switch (opcao)
    {
            case 1:
                printf("saldo atual: 1.000,00\n");
                break;
            case 2:
                printf("deposito realizado com sucesso\n");
                break;
            case 3:
                printf("saque realizado com sucesso\n");
                break;
            default:
                printf("opcao invalida\n");
    }
		return 0;
}