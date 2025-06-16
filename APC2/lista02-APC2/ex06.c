#include <stdio.h>

float calcula(float *a, float *r);

int main(){
    float alt, rai;
    printf("Digite a altura e o raio do cilindro (metros): ");
    scanf("%f%f", &alt, &rai);
    calcula(&alt, &rai);
}

float calcula(float *a, float *r){
    float area, litros, custo, latas;
    area = (2*(3.14*(*r)*(*r)))+(2*3.14*(*r));
    litros = area/3;
    latas = litros/5;
    custo = latas*20;
    printf("O custo para pintar esse cilindro será de R$%.2f", custo);
}