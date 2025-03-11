#include <stdio.h>
#include <stdlib.h>

int main()
{
    int dia = 3;
    if (dia == 1)
    {
        printf("domingo\n");
    } else if (dia == 2) {
        printf("segunda\n");
    } else if (dia == 3){
        printf("terca\n");
    } else if (dia == 4) {
        printf("quarta\n");
    } else if (dia == 5){
        printf("quinta\n");
    } else if (dia == 6) {
        printf("sexta\n");
    } else if (dia == 7) {
        printf("sabado\n");
    } else {
        printf("dia invalido\n");
    }
     return 0;
}

