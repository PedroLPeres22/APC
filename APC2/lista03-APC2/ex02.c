#include <stdio.h>

int exibir(int *v);

int i;

int main(){
    int vt[20];
    printf("Digite 20 números para o vetor: ");
    for(i=0;i<20;i++){
        scanf("%d", &vt[i]);
    }
    exibir(vt);
}

int exibir(int *v){
    int somapar, quantimpar = 0;
    printf("\nNúmeros pares: [ ");
    for(i=0;i<20;i++){
        if(v[i]%2 == 0){
            printf("%d ", v[i]);
            somapar += v[i];
        }
    }
    printf("]");
    printf("\nSoma dos números pares: %d", somapar);
    printf("\nNúmeros ímpares: [ ");
    for(i=0;i<20;i++){
        if(v[i]%2 != 0){
            printf("%d ", v[i]);
            quantimpar++;
        }
    }
    printf("]");
    printf("\nQuantidade de números ímpares: %d", quantimpar);
}