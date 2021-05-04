#include <stdio.h>

int main() {
    int v1[10],v2[10],i,j;

    for(i=0;i<10;i++){
        printf("Digite o valor: ");
        scanf("%d", &v1[i]);
    }
    j=0;
    for(i=0;i<10;i++){
        if(v1[i] > 0){
            j=j+1;
            v2[j-1] = v1[i];
        }
    }
    printf("Vetor digitado ");
    for(i=0;i<10;i++){
        printf("%d\n", v1[i]);
    }

    printf("Vetor resultante ");
    for(i=0;i<j;i++){
        printf("%d\n", v1[i]);
    }

}
