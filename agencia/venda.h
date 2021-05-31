#ifndef VENDA_H
#define VENDA_H
#include "item_venda.h"

struct venda{
    int dia, mes, ano;
    float total;
    int codigo;
    float desconto;

} ;

struct lista_venda {
    struct venda lista[1000];
    int indice;
};

void lancarVenda(struct lista_venda *lista_v, struct lista_carro *lista_p, struct lista_item_venda *lista_i);

#endif

