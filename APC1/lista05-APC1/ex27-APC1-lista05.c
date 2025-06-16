#include <stdio.h>

    float dist, comb, reais, valComb, consumo;

int main(){
    printf("Digite a distância percorrida (em km): ");
    scanf("%f", &dist);
    printf("DIgite o combustível gasto (em L): ");
    scanf("%f", &comb);
    printf("Digite o valor do litro de combustível (em R$): ");
    scanf("%f", &valComb);
    consumo = comb/dist;
    reais = valComb*comb;
    printf("Você percorreu %.2fKm e gastou %.2fL de combustível.\n", dist, comb);
    printf("O consumo médio do veículo é de %.2fL/Km.\n", consumo);
    printf("Você gastou R$%.2f com essa viagem.\n", reais);
}