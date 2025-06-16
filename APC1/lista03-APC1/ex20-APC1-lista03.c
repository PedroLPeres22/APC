#include <stdio.h>

    int i, vendasMarco[31], maior, quant;

int main(){
    for(i=0;i<31;i++){
        printf("Digite os discos vendidos no dia %d: ", i+1);
        scanf("%d", &vendasMarco[i]);
    }
    quant = vendasMarco[0];
    for(i=0;i<31;i++){
        if (vendasMarco[i]>quant){
            quant = vendasMarco[i];
            maior = i+1;
        }
    }
    printf("O dia com mais vendas foi o dia %d, com %d vendas.\n", maior, quant);
}