#include <stdio.h>

int quadrado(int v[]);
int imprimir(int v[]);

int i;

int main(){
    int v[10];
    printf("Digite 10 valores:");
    for(i=0;i<10;i++){
        scanf("%d", &v[i]);
    }
    printf("\nVetor original: ");
    imprimir(&v[0]);
    printf("\nVetor dos quadrados: ");
    quadrado(v);
}

int quadrado(int v[]){
    int quadrado[10];
    for(i=0;i<10;i++){
        quadrado[i] = (v[i]*v[i]);
    }
    imprimir(&quadrado[0]);
}

int imprimir(int v[]){
    printf("\n[ ");
    for(i=0;i<10;i++){
        printf("%d ", v[i]);
    }
    printf("]\n");
}