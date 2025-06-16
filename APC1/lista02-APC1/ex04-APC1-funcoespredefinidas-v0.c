#include <stdio.h>

    float diam, raio, alt, vol;

int main(){
    printf("Digite o diâmetro de uma das faces do cilindro (em cm): ");
    scanf("%f", &diam);
    raio = diam/2;
    raio*=raio;
    raio*=3.14;
    printf("Digite a altura/comprimento do cilindro (em cm): ");
    scanf("%f", &alt);
    vol = raio*alt;
    printf("O volume do cilindro é igual a %.2fcm³.\n", vol);
    vol /= 1000000;
    printf("O volume do cilindro, em m³, é igual a %.2fm³.\n", vol);
}