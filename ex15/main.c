#include <stdio.h>
#include <math.h>

int main() {
    char nome[8][20];
    int qtd[8],i;
    float brinde[8];

    for(i=0;i<8;i++){
        printf("Digite o nome: ");
        scanf("%s", &nome[i]);
        printf("Digite a quantidade de fitas: ");
        scanf("%d", &qtd[i]);

        brinde[i] = floor(qtd[i]/10);


    }
    printf("Brinde por pessoa\n");
    for(i=0;i<8;i++){
        printf("%s      %f\n", nome[i],brinde[i] );
    }
}
