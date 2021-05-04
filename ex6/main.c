#include <stdio.h>

int main() {

    int i, v[10], maior=0, menor=99999, pos1=0, pos2=0, total=0;
    char vend [10][100]; //vendedores


    //float total; //total vendas

    for(i=0;i<10;i++){
        printf("Digite o nome do %d vendedor: ", i+1 );
        fflush(stdin);
        scanf("%s",vend[i]);
        printf("Digite o %d valor: R$ ", i+1);
        scanf("%d",&v[i]);
        printf("\n");
        total+=v[i];
    }
    maior = v[0];
    menor = v[0];
    for(i=0;i<10;i++){
        if (v[i] > maior)
            maior = v[i];
        if (v[i] < menor)
            menor = v[i];
    }
    printf ("EXTRATO:\n");
    printf ("\n");
    for(i=0;i<10;i++)
    {
        printf ("vendedor: %s comissao %d \n", vend[i], v[i]);
    }
    printf("A soma total das comissoes é %d\n", total);
    printf("A maior comissao é %d\n", maior );
    printf("A menor comissao é %d\n", menor );
}

