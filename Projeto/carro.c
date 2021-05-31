#include "carro.h"
#include <stdio.h>
#include <stdlib.h>


void cadastrarCarro(struct lista_carro *l){
    printf("Cadastro de Carro\n");
    printf("Digite o codigo: ");
    scanf("%d", &l->lista[l->indice].codigo);
    printf("Digite o modelo do carro: ");
    scanf("%s",l->lista[l->indice].modelo, 20, stdin);
    fflush(stdin);
    printf("Digite a marca do carro: ");
    fflush(stdin);
    scanf("%s",l->lista[l->indice].marca, 20, stdin);
    printf("Digite o preco do carro: ");
    scanf("%f", &l->lista[l->indice].preco);
    printf("Digite o ano do carro: ");
    scanf("%d", &l->lista[l->indice].ano);
    l->lista[l->indice].ativo = 1;
    l->indice++;
}

void exibirCarros(struct lista_carro *l) {
    int i;
    printf("Carros Cadastrados\n");
    for(i = 0; i < l->indice; i++) {
        if (l->lista[i].ativo == 1) {
            printf("%d - %s - %s - %.2f - %d\n", l->lista[i].codigo, l->lista[i].modelo, l->lista[i].marca,
                   l->lista[i].preco, l->lista[i].ano);
        }
    }
}
//
struct carro * procurarCarro(struct lista_carro *l,
                                    int cod) {
    int i;
    for(i=0; i < l->indice; i++) {
        if(l->lista[i].codigo == cod)
            return &l->lista[i];
    }
    //O produto não existe
    return NULL;
}

void excluirCarro(struct lista_carro *l){
    int cod;
    struct carro *p;
    printf("Digite o codigo do carro que deseja excluir: ");
    scanf("%d",&cod);
    p = procurarCarro(l,cod);
    p->ativo = 0;
    printf("Abaixo a lista atualizada\n ");
    exibirCarros(l);
}
