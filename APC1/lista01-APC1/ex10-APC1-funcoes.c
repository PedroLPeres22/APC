#include <stdio.h>

float soma(float a, float b);
float subtracao(float a, float b);
float multiplicacao(float a, float b);
float divisao(float a, float b);

int main(){
    float x, y;
    printf("Digite dois números: ");
    scanf("%f%f", &x, &y);
    printf("\nSoma: %.2f", soma(x, y));
    printf("\nSubtração: %.2f", subtracao(x, y));
    printf("\nMultiplicação: %.2f", multiplicacao(x, y));
    printf("\nDivisão: %.2f\n", divisao(x, y));
    return 0;
}

float soma(float a, float b){
    return a+b;
}

float subtracao(float a, float b){
    return a-b;
}

float multiplicacao(float a, float b){
    return a*b;
}

float divisao(float a, float b){
    return a/b;
}