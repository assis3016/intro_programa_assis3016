#include <stdio.h>
#include <stdlib.h>

int main() {
    int idade;
    printf("Digite sua idade:\n");
    scanf("%d", &idade);

    if (idade < 12) {
        printf("Voce e uma crianca\n");
    } else if (idade >= 12 && idade < 18) {
        printf("Voce e um adolescente\n");
    } else if (idade >= 18 && idade < 60) {
        printf("Voce e um adulto\n");
    } else {
        printf("Voce e um idoso\n");
    }

    return 0;
}
    
    