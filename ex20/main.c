#include <stdio.h>

int main() {
    int v1[50],i;

    for(i=0;i<50;i++){
        printf("Digite o valor: ");
        scanf("%d", &v1[i]);

    }
    printf("Valores positivos ");
    for(i=0;i<50;i++){
        if(v1[i]>0){
            printf("%d\n", v1[i]);
        }
    }
}