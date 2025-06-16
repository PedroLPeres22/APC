#include <stdio.h>

    float comp, larg, alt, ar, vol;

int main(){
    printf("Digite o comprimento da caixa (em cm): ");
    scanf("%f", &comp);
    printf("Digite a largura da caixa (em cm): ");
    scanf("%f", &larg);
    ar = comp*larg;
    printf("Digite a altura da caixa (em cm): ");
    scanf("%f", &alt);
    vol = ar*alt;
    printf("O volume dessa caixa é igual a %.2fcm³\n", vol);
    vol /= 1000000;
    printf("O volume dessa caixa, em m³, é igual a %.2fm³\n", vol);
}