#include <stdio.h>

int main() {
    int primVetor[]= {4,7,5,8,2,15,9,6,10,11};
    int segVetor[] = {3,4,5,8,2};
    int v1[10];
    int v2[25];
    int i,x,y,somaSegVetor,divisor,num,final;
    somaSegVetor = 0;
    for(x=0;x<5;x++){
        somaSegVetor = somaSegVetor + segVetor[x];
    }
    for(i=0;i<10;i++){
        if(primVetor[i] % 2 == 0){
            final = primVetor[i] + somaSegVetor;
            //printf("%d\n", final);
            //for(y=0;y<5;y++) {
                v1[i] = final;

           // }
        }
        else{
            v1[i] = 0;
        }

        if (primVetor[i] % 2 != 0){
            divisor=0;
            for(num = 0; num<5;num++){

                if(primVetor[i] % segVetor[num] == 0){
                    divisor = divisor + 1;
                    printf("DIVISOR FINAL %d",divisor);
                    v2[num]= divisor;
                }
            }
        }
    }
    printf("Primeiro vetor\n");
    for(i=0;i<10;i++){
        printf("%d\n", v1[i]);
    }
    printf("Segundo vetor\n");
    for(i=0;i<10;i++){
        printf("%d\n", v2[i]);
    }

}
