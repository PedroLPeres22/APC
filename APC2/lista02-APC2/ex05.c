#include <stdio.h>
#include <math.h>

float distancia(float *p, float *q);

int main(){
    float p1[2], p2[2];
    printf("Digite dois valores para P1: ");
    scanf("%f%f", &p1[0], &p1[1]);
    printf("Digite dois valores para P2: ");
    scanf("%f%f", &p2[0], &p2[1]);
    distancia(p1, p2);
}

float distancia(float *p, float *q){
    float dist;
    dist = sqrtf(powf(p[0]-q[0], 2)+powf(p[1]+q[1], 2));
    printf("Distância entre os pontos: %.2f\n", dist);
}