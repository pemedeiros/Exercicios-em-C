#include<stdio.h>

#include<stdlib.h>

#define TAM 10

typedef struct prod{

    char produtos[20];

}Desc;

int main(){
    int i, j, k;
    Desc vet1[TAM];
    int vet2[TAM];
    float vet3[TAM], novo[TAM];
    for(i=0; i<TAM; i++){
        printf("Digite o nome do produto\n");
        setbuf(stdin, NULL);
        scanf("%s", &vet1[i]);
        printf("Digite o codigo do produto\n");
        scanf("%d", &vet2[i]);
        printf("Digite o preco dos produtos\n");
        scanf("%f", &vet3[i]);
    }
    for(j=0; j<TAM; j++){
        if((vet2[j]%2==0) && (vet3[j]>1000)){
            novo[j]=vet3[j];
            novo[j]+=novo[j]*0.2;
        }
        if(vet2[i]%2==0){
            novo[j]=vet3[j];
            novo[j]+=novo[j]*0.15;
        }
        if(vet3[j]>1000){
            novo[j]=vet3[j];
            novo[j]+=novo[j]*0.1;
        }
    }
    for(k=0; k<TAM; k++){
        printf("Nome do produto: %s\t O codigo: %d\t O preco: %.2f\t Novo preco: %.2f\n", vet1[k].produtos, vet2[k], vet3[k], novo[k]);
    }
    return 0;
}