#include <stdio.h>

float media(float *v);
float var(float *v, float m);

int i;

int main(){
    float vt[10];
    printf("\nDigite 10 valores para o vetor: ");
    for(i=0;i<10;i++){
        scanf("%f", &vt[i]);
    }
    media(vt);
}

float media(float *v){
    float media;
    for(i=0;i<10;i++){
        media += v[i];
    }
    media /= 10;
    printf("\nMédia do vetor: %.2f", media);
    var(v, media);
}

float var(float *v, float m){
    printf("\nVariância do vetor: [");
    for(i=0;i<10;i++){
        printf("%.2f ", (v[i]-m));
    }
    printf("]\n");
}