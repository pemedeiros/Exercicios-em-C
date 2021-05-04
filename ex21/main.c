#include <stdio.h>

int main() {
    int v1[30],v2[30], i;

    for(i=0;i<30;i++){
        printf("Digite o valor: ");
        scanf("%d", &v1[i]);
        v2[i] = v1[i];
        if(v2[i] == 0){
            v2[i] = 1;
        }
    }
    for(i=0;i<30;i++){
        printf("%d\n", v2[i]);
    }
}
