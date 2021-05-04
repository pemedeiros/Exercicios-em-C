#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL,"Portuguese_Brazil");
    int v[5],i,soma;
    for(i=0;i<5;i++){
        printf("Digite o %d ° número: ", i+1);
        scanf("%d", &v[i]);
    }
    soma= 0;
    for(i=0;i<5;i++){
        soma = soma + v[i];
    }

    printf("%d + %d + %d + %d + %d = %d", v[0],v[1],v[2],v[3],v[4], soma);




}
