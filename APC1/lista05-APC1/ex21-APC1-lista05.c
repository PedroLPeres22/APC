#include <stdio.h>

    float saldo, saque, deposito;

int depositar(){
    printf("Digite a quantidade a ser depositada: ");
    scanf("%f", &deposito);
    saldo += deposito;
    printf("Depósito realizado com sucesso.\n");
    main();
}

int sacar(){
    printf("Digite a quantidade a ser sacada: ");
    scanf("%f", &saque);
    if (saque > saldo){
        printf("Saldo indisponível. Digite outra quantidade: ");
        scanf("%f", &saque);
    }
    else if (saque == 0){
        printf("Nenhum dinheiro foi sacado.");
    }
    else{
        printf("Saque realizado com sucesso.\n");
    }
    saldo -= saque;
    main();
}

int main(){
    int op;
    printf("[1] - DEPÓSITO");
    printf("\n[2] - VER SALDO");
    printf("\n[3] - SAQUE");
    printf("\n[4] - SAIR");
    printf("\nDigite a opção desejada: ");
    scanf("%d", &op);
    switch (op){
        case 1: depositar();
        case 2: printf("O saldo disponível é de R$%.2f\n", saldo); main();
        case 3: sacar();
        case 4: break;
        default: printf("Opção inválida. Digite outra opção: "); scanf("%d", &op);
    }
}