#include <stdio.h>

    float a, b, al, bl;

int main(){
    printf("Digite dois valores: ");
    scanf("%f%f", &a, &b);
    al = a;
    bl = b;
    printf("Valores antes da mudança: \n A = %.2f B = %.2f", al, bl);
    a = a + b;
    b = a - b;
    a = a - b;
    printf("\nValores após a mudança: \n A = %.2f B = %.2f\n", a, b);
}