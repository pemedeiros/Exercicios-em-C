#ifndef CLIENTE_H
#define CLIENTE_H

struct cliente {
    int codigo;
    char nome[50];
    int idade;
    char CPF[11];
    char email[70];
    int ativo;
};

struct lista_cliente {
    struct cliente lista[1000];
    int indice;
};

void cadastrarCliente(struct lista_cliente *l);
void exibirClientes(struct lista_cliente *l);
void excluirCliente(struct lista_cliente *l);
struct cliente *procurarCliente(struct lista_cliente *l,int cod);
#endif