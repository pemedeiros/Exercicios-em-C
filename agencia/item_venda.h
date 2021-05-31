#ifndef ITEM_VENDA_H
#define ITEM_VENDA_H

#include "carro.h"

struct item_venda {
    int codigo_produto;
    int codigo_venda;
    int quantidade;
    float preco;
};

struct lista_item_venda {
    struct item_venda lista[1000];
    int indice;
};

float adicionarItens(struct lista_item_venda *l,
                     struct lista_carro *lp,
                     int codVenda);
#endif
