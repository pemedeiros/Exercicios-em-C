#include <stdio.h>

int main() {
    int v1[15],i,maior,j;
    float v2[15];

    maior= 0;

        for (i=0;i<15;i++){
            printf("Digite o valor: ");
            scanf("%d", &v1[i]);
            if(v1[i]> maior){
                maior = v1[i];
            }

    }
    for (j=0;j<15;j++){
        v2[j] = (v1[j]/maior);
    }

    for (j=0;j<15;j++){
        printf("%f\n", v2[j]);
    }
}
