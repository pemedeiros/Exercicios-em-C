#include <stdio.h>

int main() {
    float v[10];
    float soma;
    int i,qtdNeg;
    qtdNeg = 0;
    soma= 0.0;
    for(i=0;i<10;i++){
        printf("Digite o valor para o vetor: ");
        scanf("%f",&v[i]);
        if (v[i]<0) {
            qtdNeg = qtdNeg + 1;
        } else {
            soma = soma + v[i];
        }

    }
    printf("Existem %d numeros negativos\n", qtdNeg);
    printf("A soma dos positivos : %d ", soma);
}
