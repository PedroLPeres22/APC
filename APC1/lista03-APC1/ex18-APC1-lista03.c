#include <stdio.h>

    float precosMercadorias[100], f;
    int i, j, vendasMercadorias[100];

int main(){
    j=1;
    for(i=0;i<100;i++){
        printf("Digite o preço da mercadoria %d: ", j);
        scanf("%f", &precosMercadorias[i]);
        j++;
    }
    j=1;
    for(i=0;i<100;i++){
        printf("Digite as vendas mensais da mercadoria %d: ", j);
        scanf("%f", &vendasMercadorias[i]);
        j++;
    }
    for(i=0;i<100;i++){
        vendasMercadorias[i] *= precosMercadorias[i];
    }
    for(i=1;i<100;i++){
        vendasMercadorias[0] += vendasMercadorias[i];
    }
    printf("O faturamento mensal da padaria foi de R$%.2f.\n", vendasMercadorias[0]);
}