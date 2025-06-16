#include <stdio.h>

    int num, i = 1, s;

int main(){
    printf("Digite um número: ");
    scanf("%d", &num);
    if (num<=0){
        printf("Número inválido. Digite outro número.");
        scanf("%d", &num);
    }
    for (i=1;i<=num;i++){
        s += i;
    }
    printf("A soma dos %d primeiros números inteiros positivos é igual a %d\n", num, s);
}