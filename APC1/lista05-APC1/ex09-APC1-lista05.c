#include <stdio.h>

    int n;

int main(){
    printf("Digite um número: ");
    scanf("%d", &n);
    if (n%2 == 0)
        printf("O número digitado é par.");
    else
        printf("O número digitado é ímpar.");
}