#include "item_venda.h"
#include "carro.h"
#include <stdio.h>

float adicionarItens(struct lista_item_venda *l,
                     struct lista_produto *lp,
                     int codVenda){
    float total = 0;
    int cod, quant;
    struct produto *p;

    while(1) {
        printf("Digite o codigo do produto (-1 para terminar, 0 para listar):");
        scanf("%d", &cod);

        if(cod == -1)
            break;
        if(cod == 0) {
            exibirProdutos(lp);
            continue;
        }
        p = procurarProdutoCod(lp, cod);

        if(p == NULL){
            printf("Erro!!! produto não cadastrado\n\n");
            continue;
        }

        printf("%s - R$ %.2f\n", p->descricao, p->preco);

        printf("Digite a quantidade");
        scanf("%d",&quant);

        l->lista[l->indice].codigo_produto = cod;
        l->lista[l->indice].codigo_venda = codVenda;
        l->lista[l->indice].quantidade = quant;
        l->lista[l->indice].preco = p->preco;
        l->indice ++;
        total += p->preco * quant;
    }
    return total;
}
