#include<stdio.h>
#include<stdlib.h>
int main(){
    int idade;
    printf("digite sua idade:\n");
    scanf("%d", &idade);
    if (idade < 12){
        printf("voce e uma crianca\n");
    }else if (idade >= 12 && idade < 18){
        printf("voce e um adolescente\n");
    } else if (idade >= 18 && idade < 60) {
        printf("voce e um adulto\n");
    } else {
        printf("voce e um idoso\n");
    }
    return 0;
    }
    
    