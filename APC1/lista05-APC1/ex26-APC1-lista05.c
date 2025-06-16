#include <stdio.h>

    float cotDol, quantMoeda, conv;
    int op;

int rpd(){
    printf("Digite a quantidade em reais: ");
    scanf("%f", &quantMoeda);
    conv = quantMoeda/cotDol;
    printf("R$%.2f --> US$%.2f\n", quantMoeda, conv);
}

int dpr(){
    printf("Digite a quantidade em dólares: ");
    scanf("%f", &quantMoeda);
    conv = quantMoeda*cotDol;
    printf("US$%.2f --> R$%.2f\n", quantMoeda, conv);
}

int menu(){
    printf("[1] - Real p/ Dólar; [2] - Dólar p/ Real\n");
    printf("Digite uma opção: ");
    scanf("%d", &op);
    switch (op){
        case 1: rpd(); break;
        case 2: dpr(); break;
        default: printf("Opção inválida.\n"); menu();
    }
}

int main(){
    printf("Qual é a cotação atual do dolár?: ");
    scanf("%f", &cotDol);
    menu();
}