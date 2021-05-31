#include "carro.h"
#include <stdio.h>
#include <stdlib.h>


void cadastrarProduto(struct lista_carro *l){
    //system("clear");
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

    l->indice++;
}

void exibirProdutos(struct lista_carro *l) {
    int i;
    system("clear");
    printf("Cadastro de Carro\n");

    for(i = 0; i < l->indice; i++) {
        printf("%d - %s", l->lista[i].codigo, l->lista[i].descricao);
    }
}

struct produto * procurarProdutoCod(struct lista_produto *l,
                                    int cod) {
    int i;
    for(i=0; i < l->indice; i++) {
        if(l->lista[i].codigo == cod)
            return &l->lista[i];
    }
    //O produto não existe
    return NULL;
}
