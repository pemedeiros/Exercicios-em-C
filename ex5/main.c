#include <stdio.h>

int main() {
    int logica[15], lp[15],ambos[15], matricula, opcao, i,x,ver,matriLog,matriLp,j,k,show;
    for (i = 0; i < 15; i++) {
        printf("Digite sua matricula: ");
        scanf("%d", &matricula);
        printf("=========== Opcao ===========\n");
        printf("          1. Logica          \n");
        printf(" 2. Linguagem de Programacao \n");
        printf("          3. Ambas           \n");
        printf("=============================\n");
        printf("Digite a opcao em que vc se enquadra: ");
        scanf("%d", &opcao);
        if (opcao == 1) {
            logica[i]= matricula;
        }

        if (opcao == 2) {
            lp[i]= matricula;
        }

        if (opcao == 3) {
            logica[i]= matricula;
            lp[i] = matricula;
            ambos[i] = matricula;

        }

        /*for(x=0;x<10;x++){

            if (opcao == 3) {
                lp[x]= matricula;
            }
        }
    }
    for(ver=0;ver<15;ver++){
        matriLog = logica[ver];
        for(j=0;j<10;j++){
            matriLp = lp[j];
        }
        for(k=0;k<10;k++){
            if(matriLog == matriLp){
                ambos[k] = matriLp;
                printf("%d\n", ambos[k]);
            }

        }*/


    }
    for(x=0;x<=i;x++){
        printf("%d\n", ambos[x]);
    }



}