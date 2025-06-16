#include <stdio.h>
#include <math.h>

float calculaDistancia(float p1, float p2, float p3, float p4);

int main(){
    float x, y, a, b;
    printf("Digite as coordenadas do primeiro ponto, separadas por vírgula: ");
    scanf("%f,%f", &x, &y);
    printf("Digite as coordenadas do segundo ponto, separadas por vírgula: ");
    scanf("%f,%f", &a, &b);
    printf("A distância entre esses pontos é igual a %.2f u.d.", calculaDistancia(x, y, a, b));
}

float calculaDistancia(float p1, float p2, float p3, float p4){
    return sqrt(pow(p3-p1, 2)+pow(p4-p2, 2));
}