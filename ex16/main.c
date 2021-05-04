#include <stdio.h>

int main() {
    char prod[5], entre50e100[5];
    float preco[5], media, totPreco;
    int i,qtdM50,qtdM100;
    qtdM50 = qtdM100 = 0;
    totPreco = 0.0;
    for (i=0;i<5;i++){
        printf("Digite o nome do produto: ");
        scanf("%s",&prod[i]);
        printf("Digite o preco do produto: ");
        scanf("%f",&preco[i]);
        if(preco[i] < 50.0){
            qtdM50 = qtdM50 + 1;

        }
        if((preco[i] > 50.0) && (preco[i]< 100.0)){
            entre50e100[i] = prod[i];
        }
        if(preco[i]>100.0){
            qtdM100 = qtdM100 +1;
            totPreco = totPreco + preco[i];
        }
    }
    media = totPreco / qtdM100;
    printf("Qtd menor R$50 ..... %d", qtdM50);
    for(i=0;i<5;i++){
        printf("Nomes entre 50 e 100 ..... %s", entre50e100[i]);
    }
    printf("Media mais R$100 ........ %f", media);

}
