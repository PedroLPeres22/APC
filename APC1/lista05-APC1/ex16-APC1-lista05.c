#include <stdio.h>

    int i;
    float n, nmaior;

int main(){
    printf("Digite 10 números: ");
    for(i=1;i<=10;i++){
        scanf("%f", &n);
        if (i==1){
            nmaior = n;
        }
        else if(n>nmaior){
            nmaior = n;
        }
    }
    printf("O maior dos números digitados é %.2f", nmaior);
}