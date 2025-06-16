#include <stdio.h>

void menu(void){
    char ch;
    printf("1. Checar Ortografia\n");
    printf("2. Corrigir Erros de Ortografia\n");
    printf("3. Mostrar Erros de Ortografia\n");
    printf("Pressione Qualquer Outra Tecla para Abandonar\n");
    printf("    Entre com sua escolha:  ");
    ch=getchar();
    switch(ch){
        case 1: check_spelling(); break;
        case 2: correct_errors(); break;
        case 3: display_errors(); break;
        default: printf("nenhuma opção selecionada");
    }
}

void main(){
    menu();
}

check_spelling(){
    return 0;
}

correct_errors(){
    return 0;
}

display_errors(){
    return 0;
}