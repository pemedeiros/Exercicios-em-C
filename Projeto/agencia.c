#include "cliente.h"
#include "carro.h"
#include "venda.h"
#include <stdio.h>
#include <stdlib.h>


void exibirMenu();

void salvarDados(struct lista_carro *p,
                struct lista_cliente *c,
                        struct lista_venda *v
                );

void carregarDados(struct lista_carro *p,
                   struct lista_cliente *c,
                   struct lista_venda *v

               );


int main(int argc, char * argv[]) {
    struct lista_carro produtos;
    struct lista_cliente clientes;
    struct lista_venda vendas;
    int opcao;

    produtos.indice = 0;
    clientes.indice = 0;
    vendas.indice = 0;

    carregarDados(&produtos, &clientes, &vendas
     );

    while(1) {
        exibirMenu();
        scanf("%d", &opcao);
        fflush(stdin);
        switch(opcao) {
            case 1:
                cadastrarCarro(&produtos);
                salvarDados(&produtos, &clientes, &vendas
                 );
                break;
            case 2:
                exibirCarros(&produtos);

                getchar();
                break;
            case 3:
                cadastrarCliente(&clientes);
                salvarDados(&produtos, &clientes, &vendas
                );
                break;
            case 4:
                exibirClientes(&clientes);
                break;
            case 5:
                lancarVenda(&vendas, &produtos,&clientes);
                salvarDados(&produtos,&clientes, &vendas);
                break;
            case 6:
                exibirVendas(&vendas);
                break;
            case 7 :
                filtrarVendas(&vendas);
                break;
            case 8 :
                excluirCarro(&produtos);
                break;
            case 9 :
                excluirCliente(&clientes);
                break;
            case 10:
                salvarDados(&produtos, &clientes, &vendas
                 );
                break;
            case 100:
                exit(0);
            default:
                puts("Opcao incorreta");
                getchar();
        }
    }
}

void exibirMenu(){
    puts("---- Concessionaria 0KM ----");
    puts("1 - Cadastrar Carro");
    puts("2 - Listar Carros");
    puts("3 - Cadastrar Cliente");
    puts("4 - Listar Clientes");
    puts("5 - Lancar Venda");
    puts("6 - Listar Vendas");
    puts("7 - Relatorios");
    puts("8 - Excluir carro");
    puts("9 - Excluir cliente");
    puts("10 - Salvar Listas");
    puts("100 - Sair");
    puts("Escolha uma opcao: ");
}

void salvarDados(struct lista_carro *p,
                struct lista_cliente *c,
                 struct lista_venda *v

                 ) {
    FILE *arquivo;

    arquivo = fopen("listas.dat", "wb");

    if(arquivo != NULL) {

        fwrite(p, sizeof(struct lista_carro), 1, arquivo);
        fwrite(c, sizeof(struct lista_cliente), 1, arquivo);
        fwrite(v, sizeof(struct lista_venda), 1, arquivo);


        fclose(arquivo);
    }
}

void carregarDados(struct lista_carro *p,
                   struct lista_cliente *c,
                   struct lista_venda *v

                  ) {

    FILE *arquivo;
    //Abrir um arquivo
    arquivo = fopen("listas.dat", "rb");

    if(arquivo != NULL) {
        //Escrever os bytes
        fread(p, sizeof(struct lista_carro), 1, arquivo);
        fread(c, sizeof(struct lista_cliente), 1, arquivo);
        fread(v, sizeof(struct lista_venda), 1, arquivo);



        fclose(arquivo);
    }

}
