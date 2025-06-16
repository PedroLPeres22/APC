#include <stdio.h>

    float n1, n2;

int main(){
    printf("Digite dois números: ");
    scanf("%f%f", &n1, &n2);
    if (n1>n2)
        printf("%.2f %.2f", n2, n1);
    else
        printf("%.2f %.2f", n1, n2);
}