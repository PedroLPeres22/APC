#include <stdio.h>

    float n, nmaior;
    int i, vzs = 1;

int main(){
    printf("Digite 10 números: ");
    for (i=1;i<=10;i++){
        scanf("%f", &n);
        if (n == nmaior){
            vzs++;
        }
        if (i==1){
            nmaior = n;
        }
        else if (n>nmaior){
            nmaior = n;
        }
    }
    printf("O maior número digitado foi %.2f e ele foi lido %d vez(es)", nmaior, vzs);
}