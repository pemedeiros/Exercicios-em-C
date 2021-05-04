#include <stdio.h>

int main() {
    int vetor[5],i, maior, menor, posiMaior, posiMenor;
    maior = menor = posiMaior = posiMenor = 0;
    for(i=0;i<5;i++){
        printf("Digite o valor para o vetor: ");
        scanf("%d", &vetor[i]);
        if( i == 1){
            maior = vetor[i];
            menor = vetor[i];
            posiMaior = i;
            posiMenor = i;
        }
        else{
            if(vetor[i]> maior){
                maior = vetor[i];
                posiMaior = i;
            }
            if(vetor[i] < menor){
                menor = vetor[i];
                posiMenor = i;
            }
        }
    }
    printf("O maior elemento eh %d e esta na posicao %d\n", maior, posiMaior);
    printf("O menor elemento eh %d e esta na posicao %d", menor, posiMenor);


}
