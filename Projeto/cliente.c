#include "cliente.h"
#include <stdio.h>
#include <stdlib.h>

void cadastrarCliente(struct lista_cliente *l) {
    printf("Cadastro de Cliente\n");
    printf("Digite o codigo: ");
    scanf("%d", &l->lista[l->indice].codigo);
    printf("Digite o nome do cliente: ");
    scanf("%s",l->lista[l->indice].nome, 50, stdin);
    fflush(stdin);
    printf("Digite o e-mail do cliente: ");
    fflush(stdin);
    scanf("%s",l->lista[l->indice].email, 70, stdin);
    printf("Digite a idade do cliente: ");
    scanf("%d", &l->lista[l->indice].idade);
    printf("Digite o CPF do cliente: ");
    scanf("%s", &l->lista[l->indice].CPF);
    l->indice++;
}
void exibirClientes(struct lista_cliente *l) {
    int i;
    printf("Clientes Cadastrados\n");

    for(i = 0; i < l->indice; i++) {
        printf("%d - %s - %d - %s - %s\n", l->lista[i].codigo, l->lista[i].nome, l->lista[i].idade, l->lista[i].CPF, l->lista[i].email );
    }
}

struct cliente * procurarCliente(struct lista_cliente *l,
                             int cod) {
    int i;
    for(i=0; i < l->indice; i++) {
        if(l->lista[i].codigo == cod)
            return &l->lista[i];
    }
    //O produto não existe
    return NULL;
}

void excluirCliente(struct lista_cliente *l){
    int cod;
    struct cliente *p;
    printf("Digite o codigo do cliente que deseja excluir: ");
    scanf("%d",&cod);
    p = procurarCliente(l,cod);
    p->ativo = 0;
    printf("Abaixo a lista atualizada\n ");
    exibirClientes(l);
}