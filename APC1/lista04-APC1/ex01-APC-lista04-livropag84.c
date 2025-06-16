#include <stdio.h>

void check_spelling();
void correct_errors();
void display_errors();

void menu(void){
    char ch;
    printf("1. verificar ortografia\n");
    printf("2. corrigir erros de ortografia\n");
    printf("3. mostrar erros de ortografia\n");
    printf("    Digite sua escolha:     ");
    do{
        ch = getchar();
        switch(ch){
            case 1: check_spelling(); break;
            case 2: correct_errors(); break;
            case 3: display_errors(); break;
        }
    }while(ch!='1' && ch!='2' && ch!='3');
}

int main(){
    menu();
}

void check_spelling(){
    printf("check_spelling");
}

void correct_errors(){
    printf("correct_errors");
}

void display_errors(){
    printf("display_errors");
}