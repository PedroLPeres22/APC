#include <stdio.h>

    float n1, n2;

int main(){
    printf("Digite dois números: ");
    scanf("%f%f", &n1, &n2);
    if (n1>n2)
        printf("O maior dos números digitados é %.2f", n1);
    else
        printf("O maior dos números digitados é %.2f", n2);
}