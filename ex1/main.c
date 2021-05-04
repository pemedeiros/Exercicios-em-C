#include <stdio.h>

int main() {
    int vetor[6], qtdPar, par[6], qtdImpar, impar[6], i, p,imp,show;
    for (i = 0; i < 6; i++) {
        printf("Digite um valor inteiro: \n");
        scanf("%d", &vetor[i]);
        qtdPar = qtdImpar = p=  0;
        for (p = 0; p < i; p++) {
            if (vetor[i] % 2 == 0) {
                par[p] = vetor[i];
                qtdPar = qtdPar + 1;
                p = p + 1;
            }
        }

        for (p = 0; p < i; p++) {
            if (vetor[i] % 2 != 0) {
                impar[p] = vetor[i];
                qtdImpar = qtdImpar + 1;
                imp = imp + 1;
            }
        }
    }
    printf("============ MENU ============\n");
    printf("Qtd pares ................. %d\n", qtdPar);
    printf("Qtd impares ............... %d\n", qtdImpar);
     printf("============ PARES ===========\n");
    for(show=0; show<i;show++){
        printf("%d\n", par[show]);
    }
    printf("=========== IMPARES ==========\n");
    for(show=0; show<i;show++){
        printf("%d\n", impar[show]);
    }

}