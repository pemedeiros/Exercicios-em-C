#include <stdio.h>

int main() {
    int num[10];
    int par[10];
    int impar[10];
    int i,x;

    for(i=0;i<10;i++){
        printf("Digite o numero: ");
        scanf("%d", &num[i]);
        if(num[i] % 2 == 0) {
            //for (x = 0; x < 10; x++) {
                par[i] = num[i];
           // }
        }
        else{
           // for (x = 0; x < 10; x++) {
                impar[i] = num[i];
            //}
        }
    }

    printf("Numeros pares: \n");
    for (x = 0; x < 10; x++) {
        printf("%d\n", par[x]);
    }

    printf("Numeros impares: \n");
    for (x = 0; x < 10; x++) {
        printf("%d\n", impar[x]);
    }
}
