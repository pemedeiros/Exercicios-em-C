#include <stdio.h>

int main() {
    char nome[6][10], sit;
    float nota1[6],nota2[6], mediaAluno, mediaTot,totMedia;
    int i,qtdA,qtdR;
    mediaTot = totMedia = 0.0;
    qtdA = qtdR = 0;
    for(i=0;i<6;i++){
        printf("Digite o nome do aluno: ");
        scanf("%s", &nome[i]);
        printf("Digite a nota 1 do aluno: ");
        scanf("%f", &nota1[i]);
        printf("Digite a nota 2 do aluno: ");
        scanf("%f", &nota2[i]);
        mediaAluno = (nota1[i] + nota2[i])/2;
        totMedia = totMedia + mediaAluno;
        if(mediaAluno>=5.0){
            sit = 'a';
            qtdA = qtdA + 1;
        }
        else{
            sit = 'r';
            qtdR = qtdR + 1;
        }

    }
    mediaTot = totMedia / 6;
    printf("Relatorio da classe\n");
    printf("Media da sala ... %f\n", mediaTot);
    printf("Qtd aprovado ... %d\n", qtdA);
    printf("Qtd reprovado .. %d\n", qtdR);

}
