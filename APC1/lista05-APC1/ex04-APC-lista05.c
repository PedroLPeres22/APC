#include <stdio.h>

    int n, i, imp = 1;

int main(){
    printf("Digite um número: ");
    scanf("%d", &n);
    while (n<=0){
        printf("Número inválido. Digite outro número: ");
        scanf("%d", &n);
    }
    printf("Os %d primeiros números inteiros ímpares são: \n", n);
    while(i<n){
        printf("%d ", imp);
        imp+=2;
        i++;
    }
    printf("\n");
}