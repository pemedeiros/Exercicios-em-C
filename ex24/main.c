#include <stdio.h>

int main() {
    int v1[15], v2[15],i,divisor,j;

    for(i=0;i<15;i++){
        printf("Digite o valor: ");
        scanf("%d", &v1[i]);
        divisor = 0;
        for(j=1;j<=v1[i];j++){
            if(v1[i] % j == 0){
                divisor = divisor + 1;
            }
        }
        //for(j=0;j<15;j++){
            if(divisor == 2){
                v2[j]= v1[i];
            }
        //}
    }

    printf("Vetor do primos");
    for(i=0;i<j;i++){
        printf("%d\n", v2[i]);
    }
}
