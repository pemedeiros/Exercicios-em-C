#ifndef CARRO_H
#define CARRO_H
struct carro {
    int codigo;
    char modelo[20];
    char marca[20];
    float preco;
    int ano;
    int ativo;
};

struct lista_carro {
    struct carro lista[1000];
    int indice;
};

void cadastrarCarro(struct lista_carro *l);
void exibirCarros(struct lista_carro *l);
void excluirCarro(struct lista_carro *l);
struct carro *procurarCarro(struct lista_carro *l,int cod);
#endif
