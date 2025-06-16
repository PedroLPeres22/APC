#include <stdio.h>

    float peso, alt, imc;

int main(){
    printf("Digite seu peso: ");
    scanf("%f", &peso);
    printf("Digite sua altura (em m): ");
    scanf("%f", &alt);
    imc = peso/(alt*alt);
    printf("seu IMC é de %.2f.", imc);
    if (imc < 18.5){
        printf("Você está abaixo do peso.");
    }
    else if (imc<18.5 && imc<25){
        printf("Você está com peso normal.");
    }
    else if (imc>25 && imc<=30){
        printf("Você está com sobrepeso.");
    }
    else{
        printf("Você está obeso.");
    }
}