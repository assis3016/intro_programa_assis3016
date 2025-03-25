#include<stdio.h>
int main() {
int idade;
printf("entre com sua idade:\n");
scanf("%d", &idade);
if(idade >= 18) {
printf("voce e maior de idade\n");
}else {
printf("voce e menor de idade\n");
return 0;
}
}
