#include <stdio.h>
#include <stdlib.h>
#include <math.h>


int main(){
    int i, j, a[10], b[10], c[20], ax;

    for(i=0; i<10; i++){
        printf("\nDigite um valor para A: ");
        scanf("%i", &a[i]);
    }
    for(i=0; i<10; i++){
        printf("\nDigite um valor para B: ");
        scanf("%i", &b[i]);
    }

    for (i = 0; i < 20; ++i){
        if(i<10){
            c[i] = a[i];
        } else {
            c[i] = b[i-10];
        }
    }


    for(i=0; i<20; i++){
        for (j = 0; j < 20-1; ++j){
            if(c[j]<=c[j+1]){
                ax = c[j+1];
                c[j+1] = c[j];
                c[j] = ax;
            }
        }
    }

    printf("Vetor em ordem decrescente\n");
    for (i = 0; i < 20; ++i){
        printf("C[%i] = %i\n", i, c[i]);
    }

    return 0;
}