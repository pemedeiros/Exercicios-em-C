#include "venda.h"
#include "carro.h"
#include "item_venda.h"
#include <stdio.h>

void lancarVenda(struct lista_venda *lista_v, struct lista_produto *lista_p, struct lista_item_venda *lista_i) {
    int cod;
    system("clear");
    printf("Cadastro de Vendas\n");
    printf("Digite o codigo: ");
    scanf("%d", &cod);
    lista_v->lista[lista_v->indice].codigo = cod;

    printf("Digite a data (d/m/a): ");
    scanf("%d/%d/%d",
          &lista_v->lista[lista_v->indice].dia,
          &lista_v->lista[lista_v->indice].mes,
          &lista_v->lista[lista_v->indice].ano);

    lista_v->lista[lista_v->indice].total =

            adicionarItens(lista_i, lista_p, cod);

    printf("Total: R$ %.2f\n", lista_v->lista[lista_v->indice].total);

    lista_v->indice++;

}
