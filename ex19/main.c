#include <stdio.h>

int main() {
    int v1[10],v2[10], v3[10], i;
    for (i=0;i<10; i++){
        printf("Insira o valor para o primeiro vetor: ");
        scanf("%d", &v1[i]);
    }
    for (i=0;i<10; i++){
        printf("Insira o valor para o segundo vetor: ");
        scanf("%d", &v2[i]);
    }
    for(i=0;i<10;i++){
        v3[i] = v1[i] * v2[i];
    }
    printf("Produto dos vetores.");
    for(i=0;i<10;i++){
        printf("%d\n", v3[i]);
    }
}
