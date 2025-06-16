#include <stdio.h>

int trocaVariavel(int *a, int *b);

int main(){
    int x, y;
    printf("Digite dois números: ");
    scanf("%d%d", &x, &y);
    printf("\nValor de X (antes): %d", x);
    printf("\nValor de Y(antes): %d", y);
    trocaVariavel(&x, &y);
    printf("\nvalor de X(depois): %d", x);
    printf("\nValor de Y(depois): %d\n", y);
}

int trocaVariavel(int *a, int *b){
    int tempa, tempb;
    tempa = *a;
    tempb = *b;
    *a = tempb;
    *b = tempa;
}