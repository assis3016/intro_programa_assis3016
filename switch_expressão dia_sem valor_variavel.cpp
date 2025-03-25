#include<stdio.h>
#include <stdlib.h>

int main () {
int dia;
printf("entre com o numero do dia:\n");
scanf("%d", &dia);
switch (dia) {
case 1:
	printf("domingo\n");
	break;
case 2:
	printf("segunda-feira\n");
	break;
case 3:
	printf("terca-feira\n");
	break;
case 4:
	printf("quarta-feira");
	break;
case 5:
	printf("quinta-feira\n");
	break;
case 6:
	printf("sexta-feira\n");
	break;
case 7:
	printf("sabado\n");
	break;
default:
	printf("dia invalido\n");
	break;
}
return 0;
}
