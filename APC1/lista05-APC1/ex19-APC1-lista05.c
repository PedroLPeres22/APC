#include <stdio.h>

    float horasNormais, horasExtras, salario, imposto;

int main(){
    printf("Digite as horas trabalhadas do funcionário no ano: ");
    scanf("%f", &horasNormais);
    printf("Digite as horas extras do funcionário no ano: ");
    scanf("%f", &horasExtras);
    salario = (10*horasNormais)+(15*horasExtras);
    if (salario>12000){
        imposto = ((salario-12000)*0.25)+1200;
    }
    else{
        imposto = salario*0.1;
    }
    printf("O salário anual do funcionário é R$%.2f e ele deve pagar R$%.2f de imposto.", salario, imposto);
}