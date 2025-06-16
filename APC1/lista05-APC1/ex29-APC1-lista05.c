#include <stdio.h>

    float b, h;

int main(){
    printf("Digite o valor da base: ");
    scanf("%f", &b);
    printf("Digite o valor da altura: ");
    scanf("%f", &h);
    printf("O valor da área desse retângulo é igual a: %.2f", b*h);
}