#include <stdio.h>

    int op;
    float t, tconv;

int hpm(){
    printf("Digite o tempo em horas: ");
    scanf("%f", &t);
    tconv = t*60;
    printf("%.2f horas são %.2f minutos\n", t, tconv);
}

int mph(){
    printf("Digite o tempo em minutos: ");
    scanf("%f", &t);
    tconv = t/60;
    printf("%.2f minutos são %.2f hora(s)\n", t, tconv);
}

int main(){
    printf("[1] - Horas p/ Minutos ");
    printf("[2] - Minutos p/ Horas ");
    printf(" [3] - SAIR");
    printf("\nDigite a opção desejada: ");
    scanf("%d", &op);
    switch (op){
        case 1: hpm(); break;
        case 2: mph(); break;
        case 3: break;
        default: printf("Opção inválida.\n"); main();
    }
}