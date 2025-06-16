#include <stdio.h>
#include <math.h>

float calculaMedia(float *v);
float calculaVariancia(float *v, float m);

int i;

int main(){
    float vt[10], m;
    printf("Digite os valores do vetor: ");
    for(i=0;i<10;i++){
        scanf("%f", &vt[i]);
    }
    m = calculaMedia(vt);
    printf("\nA média dos valores desse vetor é igual a: %.2f", m);
    printf("\nA variância dos valores desse vetor é igual a: %.2f\n", calculaVariancia(vt, m));    
}

float calculaMedia(float *v){
    float media;
    media = *v;
    for(i=1;i<10;i++){
        media+=v[i];
    }
    media /= 10;
    return media;
}

float calculaVariancia(float *v, float m){
    int var;
    var = powf(v[0]-m, 2);
    for(i=0;i<10;i++){
        var += powf(v[i]-m, 2);
    }
    var/=10;
    return var;
}

