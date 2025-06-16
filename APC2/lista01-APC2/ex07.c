#include <stdio.h>

int imprima(float *v);

int i;

int main(){
    float vt[50];
    for(i=0;i<50;i++){
        vt[i] = (i+5*i)%(i+1);
    }
    imprima(vt);
}

int imprima(float *v){
    printf("\nVetor: [ ");
    for(i=0;i<50;i++){
        printf("%.2f ", v[i]);
    }
    printf(" ]\n");
}