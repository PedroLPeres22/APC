#include <stdio.h>

    float temp;

int main(){
    printf("Digite o valor da temperatura em graus Celsius: ");
    scanf("%f", &temp);
    if (temp<20){
        printf("Está frio.");
    }
    else if (temp>20 && temp<30){
        printf("Está agradável.");
    }
    else
        printf("Está quente.");
}