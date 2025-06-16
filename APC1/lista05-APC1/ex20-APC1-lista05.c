#include <stdio.h>

    float salario, aumento;

int main(){
    printf("Digite o valor do salário do funcionário: ");
    scanf("%f", &salario);
    printf("Digite o valor da porcentagem do aumento: ");
    scanf("%f", &aumento);
    salario += salario*(aumento/100);
    printf("O salário desse funcionário, com aumento de %.2f porcento será de R$%.2f", aumento, salario);
}