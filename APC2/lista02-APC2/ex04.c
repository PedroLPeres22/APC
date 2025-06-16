#include <stdio.h>

int verifica(int *v, int *x, int n);

int i;

int main(){
    int vt[10], a, b;
    printf("Digite 10 valores para o vetor: ");
    for(i=0;i<10;i++){
        scanf("%d", &vt[i]);
    }
    printf("Digite valores para verificar: ");
    scanf("%d%d", &a, &b);
    verifica(vt, &a, b);
    printf("\n");
}

int verifica(int *v, int *x, int n){
    for(i=0;i<10;i++){
        if(v[i] == *x || v[i] == n){
            printf("\nValor encontrado: %d\tPosição no vetor: %d", v[i], i);
        }
    }
}