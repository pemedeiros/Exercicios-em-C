#include <stdio.h>

int main() {
    int cod[10], tot[10],i,codCli,codProd, qtd,x,check;
    char status;
    for(i=0;i<10;i++){
        printf("Insira o codigo do produto: \n");
        scanf("%d", &cod[i]);
        printf("Insira a quantidade total do produto: \n");
        scanf("%d", &tot[i]);
    }
    while(1){
        printf("Insira o codigo do cliente: (0 para finalizar) \n");
        scanf("%d", &codCli);
        if(codCli == 0){
            printf("ENCERRANDO...");
            break;
        }
        printf("Insira o codigo do produto que deseja: \n");
        scanf("%d", &codProd);
        printf("Insira a quantidade do cliente: \n");
        scanf("%d", &qtd);
        status= "f";
            for(check=0;check<i;check++) {
                if (codProd == cod[check]) {
                    if (qtd <= tot[check]) {
                        printf("Pedido atendido.Obrigado e volte sempre\n");
                        tot[check] -= qtd;
                        status = "v";
                        printf("Estoque atualizado\n");
                        for(i=0; i<10; i++) {
                            printf("Cod Produto: %d - Qtd: %d\n", cod[i], tot[i]);
                        }
                    } else {
                        printf("Não temos estoque suficiente desta mercadoria\n");
                    }
                }
                if((check==10) && (status == "f")){
                    printf("Código inexistente. \n");
                }

            }

        break;
    }
}
