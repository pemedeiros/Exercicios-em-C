#include <stdio.h>

int main() {
    int a[5];
    int b[5];
    int i, soma,c;
    soma = 0;


    for(i=0;i<5;i++) {
        printf("Digite o numero do vetor A: \n");
        scanf("%d", &a[i]);
    }

    for(i=0 ;i<5;i++) {
        printf("Digite o numero do vetor B: \n");
        scanf("%d", &b[i]);
    }

    for(i=0,c = 4;i<5;i++, c--){
        soma = soma + (a[i] - b[c]);

    }
    printf("O resultado da soma: %d ", soma);
}





