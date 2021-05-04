#include <stdio.h>



int main() {

    char Nome[7][10];
    float media[7];
    signed char nomeMaior;
    float maior = 0.0, necessaria = 0.0;
    int i;
    for (i = 0; i < 7; i++) {
        printf("Digite o nome do aluno: ");
        scanf(" %s", &Nome[i]);
        printf("Digite a media desse aluno: ");
        scanf("%f", &media[i]);
        if (media[i] > maior) {
            maior = media[i];
            nomeMaior= Nome[i];
        }
        if(media[i] < 5.0){
            necessaria = 10 - media[i];
            printf("Voce esta sendo reprovado e precisa tirar %f para ser aprovado", necessaria);
        }

    }
    printf("A maior nota foi %f e pertence ao %s", maior, nomeMaior);
}
