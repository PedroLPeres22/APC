#include <stdio.h>

int troca(int *x, int *y);

int main(){
    int x, y;
    printf("Digite dois valores inteiros (x e y): ");
    scanf("%d%d", &x, &y);
    printf("\nValor de X: %d", x);
    printf("\nValor de Y: %d", y);
    troca(&x, &y);
    printf("\nValor de X (Troca): %d", x);
    printf("\nValor de Y (Troca): %d\n", y);
}

int troca(int *x, int *y){
    int temp;
    temp = *x;
    *x = *y;
    *y = temp;
}

