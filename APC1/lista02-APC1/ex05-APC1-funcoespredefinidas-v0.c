#include <stdio.h>

    float ladoBase, altBase, areaBase, altPir, volPir;

int main(){
    printf("Digite o valor da base do triângulo da pirâmide (em cm): ");
    scanf("%f", &ladoBase);
    printf("Digite a altura do triângulo da base da pirâmide (em cm): ");
    scanf("%f", &altBase);
    areaBase = (ladoBase*altBase)/2;
    printf("Digite a altura da pirâmide (em cm): ");
    scanf("%f", &altPir);
    volPir = (areaBase * altPir)/3;
    printf("O volume da pirâmide, em cm³, é igual a %.2fcm³\n", volPir);
    volPir /= 1000000;
    printf("O volume da pirâmide, em m³, é igual a %.2fm³\n", volPir);
}