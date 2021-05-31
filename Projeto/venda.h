#ifndef VENDA_H
#define VENDA_H
#include "cliente.h"
#include "carro.h"

struct venda{
    int dia, mes, ano;
    float total;
    int codVenda;
    int codCarro;
    int codCliente;
    int formaPgto;
} ;

struct lista_venda {
    struct venda lista[1000];
    int indice;
};



float adicionarItens(struct lista_venda *l, struct lista_carro *lp, int codVenda);
void lancarVenda(struct lista_venda *lista_v, struct lista_carro *lista_p, struct lista_cliente *lista_c);
int adicionarCliente(struct lista_venda *l, struct lista_cliente *lp, int codVenda);
void exibirVendas(struct lista_venda *l);
struct venda *filtrarVendas(struct lista_venda *l);
#endif