#include "venda.h"
#include "carro.h"
#include <stdio.h>

void lancarVenda(struct lista_venda *lista_v, struct lista_carro *lista_p, struct lista_cliente *lista_c) {
    int cod;
    printf("Cadastro de Vendas\n");
    printf("Digite o codigo: ");
    scanf("%d", &cod);
    lista_v->lista[lista_v->indice].codVenda = cod;
    printf("Digite a data (d/m/a): ");
    scanf("%d/%d/%d",
          &lista_v->lista[lista_v->indice].dia,
          &lista_v->lista[lista_v->indice].mes,
          &lista_v->lista[lista_v->indice].ano);
    lista_v->lista[lista_v->indice].total =

            adicionarItens(lista_v, lista_p, cod);

    lista_v->lista[lista_v->indice].codCliente =

            adicionarCliente(lista_v, lista_c, cod);

    printf("1. A vista\n");
    printf("2. Cartao de credito\n");
    printf("3. Cartao de debito\n");
    printf("4. Financiamento\n");
    printf("Digite o codigo da forma de pagamento:\n ");
    scanf("%d", &lista_v->lista[lista_v->indice].formaPgto);
    lista_v->indice++;
}

float adicionarItens(struct lista_venda *l,
                     struct lista_carro *lp,
                     int codVenda){
    float total = 0;
    int cod, quant;
    struct carro *p;


        printf("Digite o codigo do carro (0 para listar):");
        scanf("%d", &cod);


        if(cod == 0) {
            exibirCarros(lp);

        }
        p = procurarCarro(lp, cod);

        if(p == NULL){
            printf("Erro!!! produto não cadastrado\n\n");
        }

        printf("%s \n", p->modelo);


        l->lista[l->indice].codCarro = cod;
        l->lista[l->indice].codVenda = codVenda;
        l->lista[l->indice].total = p->preco;
        l->indice ++;

    }



int adicionarCliente(struct lista_venda *l,
                     struct lista_cliente *lp,
                     int codVenda){
    float total = 0;
    int cod, quant;
    struct cliente *p;

    while(1) {
        printf("Digite o codigo do cliente (-1 para terminar, 0 para listar):");
        scanf("%d", &cod);

        if(cod == -1)
            break;
        if(cod == 0) {
            exibirClientes(lp);
            continue;
        }
        p = procurarCliente(lp, cod);

        if(p == NULL){
            printf("Erro!!! cliente não cadastrado\n\n");
            continue;
        }

        printf("%s \n", p->nome);


        l->lista[l->indice].codCliente = cod;
        l->lista[l->indice].codVenda = codVenda;
        l->indice ++;

    }
    return cod;
}

void exibirVendas(struct lista_venda *l) {
    int i,c;
    printf("Vendas Cadastradas\n");

    for(i = 0; i < l->indice; i++) {

        printf("\nCod venda: %d - Data: %d/%d/%d - Cod Carro: %d - Cod Cliente: %d - Forma Pgto: %d - Valor Final: %.2f \n", l->lista[i].codVenda, l->lista[i].dia, l->lista[i].mes, l->lista[i].ano, l->lista[i].codCarro, l->lista[i].codCliente, l->lista[i].formaPgto, l->lista[i].total );
        for (c = 0; c < 120; c++) {
            printf("=");
        }
    }
}
struct venda * filtrarVendas(struct lista_venda *l) {
    int i,opc,codCli, codV, codVeiculo,c;
    printf("1. Filtro por cliente\n");
    printf("2. Filtro por carro\n");
    printf("3. Filtro por codigo venda\n");
    printf("Digite sua escolha: ");
    scanf("%d", &opc);
    if(opc == 1){
        printf("Digite o codigo do cliente:");
        scanf("%d", &codCli);
        for(i=0; i < l->indice; i++) {
            if (l->lista[i].codCliente == codCli) {
                for (c = 0; c < 60; c++) {
                    printf("=");
                }
                printf("\nCod venda: %d - Data: %d/%d/%d - Cod Carro: %d - Cod Cliente: %d - Forma Pgto: %d - Valor Final: %.2f \n",
                       l->lista[i].codVenda, l->lista[i].dia, l->lista[i].mes, l->lista[i].ano, l->lista[i].codCarro,
                       l->lista[i].codCliente, l->lista[i].formaPgto, l->lista[i].total);
            }
        }
    }
    if(opc==2){
        printf("Digite o codigo do carro:");
        scanf("%d", &codVeiculo);
        for(i=0; i < l->indice; i++) {
            if (l->lista[i].codCarro == codVeiculo) {
                for (c = 0; c < 60; c++) {
                    printf("=");
                }
                printf("\nCod venda: %d - Data: %d/%d/%d - Cod Carro: %d - Cod Cliente: %d - Forma Pgto: %d - Valor Final: %.2f \n",
                       l->lista[i].codVenda, l->lista[i].dia, l->lista[i].mes, l->lista[i].ano, l->lista[i].codCarro,
                       l->lista[i].codCliente, l->lista[i].formaPgto, l->lista[i].total);
            }
        }
    }
    if(opc==3){
        printf("Digite o codigo da venda:");
        scanf("%d", &codV);
        for(i=0; i < l->indice; i++) {
            if (l->lista[i].codVenda == codV) {
                for (c = 0; c < 60; c++) {
                    printf("=");
                }
                printf("\nCod venda: %d - Data: %d/%d/%d - Cod Carro: %d - Cod Cliente: %d - Forma Pgto: %d - Valor Final: %.2f \n",
                       l->lista[i].codVenda, l->lista[i].dia, l->lista[i].mes, l->lista[i].ano, l->lista[i].codCarro,
                       l->lista[i].codCliente, l->lista[i].formaPgto, l->lista[i].total);
            }
        }
    }
}

//float total;



