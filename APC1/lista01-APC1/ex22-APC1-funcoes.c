#include <stdio.h>
#include <math.h>

float calcularCusto(float a, float r);

int main(){
    float alt, raio;
    printf("Digite a altura e o raio do cilindro a ser pintado: ");
    scanf("%f%f", &alt, &raio);
    calcularCusto(alt, raio);
}

float calcularCusto(float a, float r){
    float area, custo, litros, temp;
    int latas;
    area = 2*3.14*r*a + 2*3.14*(r*r);
    litros = area/3;
    custo = litros*20;
    modf(litros, &latas);
    latas = (int)(litros)/5;
    if (litros!=0){
        latas +=1;
    }
    printf("\nO custo para pintar esse cilindro será de R$%.2f", custo);
    printf("\nSerão necessários %.2f litros de tinta", litros);
    printf("\nSerão necessárias %d latas\n", latas);
}