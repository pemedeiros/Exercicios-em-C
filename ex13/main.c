#include <stdio.h>

int main() {
    char nome[8][10];
    float nota[8];
    int i;

    for(i=0;i<8;i++){
        printf("Digite o nome do aluno: ");
        scanf("%s", &nome[i]);
        printf("Digite a nota do aluno: ");
        scanf("%f", &nota[i]);
    }
    printf("Relatorio de notas\n");
    printf("Aluno       Nota  \n");
    for(i=0;i<8;i++){
        printf("%s       %f\n", nome[i],nota[i]);
    }
}
