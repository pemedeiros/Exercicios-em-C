#include <stdio.h>

int main() {
    int v[5], posi[5],i,x;
   for(i=0;i<5;i++){
       printf("Digite o numero para o vetor: ");
       scanf("%d", &v[i]);
   }
    for(x=0;x<i;x++){
        if (v[x] == 30){
            posi[x]=x;
        }

    }
    printf("Posicoes de valores iguais a 30 \n");
   for(i=0;i<x;i++){
    printf("%d\n",posi[i]);
   }
}
//Professor, aparece esse valor (-858993460) quando o vetor está vazio, eu não soube resolver.