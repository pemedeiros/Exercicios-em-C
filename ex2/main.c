#include <stdio.h>

int main() {
    int vetor[7], mult2[7],mult3[7],mult2e3[7],i,x,y,z,show;
    for(i=0;i<7;i++) {
        printf("Digite o valor: ");
        scanf("%d", &vetor[i]);
    }
    for(x=0;x<i;x++) {
        if(vetor[i] % 2 == 0){
            mult2[x] = vetor[i];
        }
    }
    for(y=0;y<i;y++) {
        if(vetor[i] % 3 == 0){
            mult3[y] = vetor[i];
        }
    }
    for(z=0;z<i;z++) {
        if((vetor[i] % 3 == 0) && (vetor[i] % 2 == 0)){
            mult2e3[z] = vetor[i];
        }
    }

    printf("Multiplos de 2\n");
    for(show=0;show<x;show++){
        printf("%d\n", mult2[show]);
    }

    printf("Multiplos de 3\n");
    for(show=0;show<y;show++){
        printf("%d\n", mult3[show]);
    }

    printf("Multiplos de 2 e 3\n");
    for(show=0;show<z;show++){
        printf("%d\n", mult2e3[show]);
    }

}
