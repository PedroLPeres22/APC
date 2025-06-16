#include <stdio.h>

    int id, anonasc, anoat, op;
    char *nome[1];

int main(){
    printf("Digite seu nome: ");
    scanf("%s", &nome);
    printf("Em que ano você nasceu?: ");
    scanf("%d", &anonasc);
    printf("Em que ano estamos?: ");
    scanf("%d", &anoat);
    printf("Você já fez aniversário esse ano? (1 - SIM, 2 - NÃO)");
    scanf("%d", &op);
    switch (op){
        case 1: id = anoat-anonasc; break;
        case 2: id = anoat-anonasc-1; break;
    }
    printf("Seu nome é %s e você tem %d anos", nome, id);
}