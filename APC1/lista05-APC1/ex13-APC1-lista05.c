#include <stdio.h>

    float c, f;

int main(){
    printf("Digite uma temperatura em Celsius: ");
    scanf("%f", c);
    f = (9*c+160)/5;
    printf("%.2f°C em Fahrenheit equivale a %.2f°F.", c, f);
}