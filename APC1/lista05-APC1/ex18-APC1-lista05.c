#include <stdio.h>

    float horasNormal, horasExtra, salario;

int main(){
    printf("Digite as horas trabalhadas do funcionário no ano: ");
    scanf("%f", &horasNormal);
    printf("Digite as horas extras trabalhadas do funcionário no ano: ");
    scanf("%f", &horasExtra);
    salario = (horasNormal*10)+(horasExtra*15);
    printf("O salário anual desse funcionário será de R$%.2f.", salario);
}