#include <stdio.h>

void troca(int *a, int *b);

int main(){
    int a = 2, b = 3;
    printf("Valor de a: %d\tValor de b: %d\n", a, b);
    troca(&a, &b);
    printf("Valor de a: %d\tValor de b: %d\n", a, b);
}

void troca(int *a, int *b){
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}