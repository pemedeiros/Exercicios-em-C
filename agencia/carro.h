#ifndef PRODUTO_H
#define PRODUTO_H
struct carro {
    int codigo;
    char modelo[20];
    char marca[20];
    float preco;
    int ano;
};

struct lista_carro {
    struct carro lista[1000];
    int indice;
};

void cadastrarProduto(struct lista_carro *l);
void exibirProdutos(struct lista_carro *l);
struct carro * procurarProdutoCod(struct lista_carro *l,
                                  int cod);
#endif
