#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct pessoa{
    char nome[200];
    char rua[100];
    int numero;
    char cidade[100];
    char estado[100];
}endereco[5];

int menu();
int cadastrar();
int listar(int a);
int deletar();
int inicializar(int i);

int i, j;

int main(){
    for(i=0;i<5;i++){
        inicializar(i);
    }
    menu();
    return 0;
}

int inicializar(int i){
    endereco[i].nome[0] = '\0';
    endereco[i].rua[0] = '\0';
    endereco[i].cidade[0] = '\0';
    endereco[i].estado[0] = '\0';
}

int menu(){
    int op;
    do{
        system("clear");
        printf("\t\tMenu\n");
        printf("\t\t1 - Cadastrar\n");
        printf("\t\t2 - Listar\n");
        printf("\t\t3 - Deletar\n");
        printf("\t\t4 - Sair\n");
        printf("\tDigite uma opção: ");
        scanf("%d", &op);
    }while(op<1 || op>4);
    switch (op){
        case 1: cadastrar(); break;
        case 2: listar(0); break;
        case 3: deletar(); break;
        case 4: return 0; break;
    }
}

int cadastrar(){
    for(i=0;i<5;i++){
        system("clear");
        printf("\t\tCadastro\n\n");
        if(!(endereco[i].nome[0] == '\0')){
            printf("\nEssa posição da lista já está preenchida.");
            return 0; 
        }
        printf("\nDigite o Nome do Endereço %d: ", i);
        scanf("%s", endereco[i].nome);
        fflush(stdin);
        printf("\nDigite a Rua do Endereço %d: ", i);
        scanf("%s", endereco[i].rua);
        fflush(stdin);
        printf("\nDigite o Número do Endereço %d: ", i);
        scanf("%d", &endereco[i].numero);
        fflush(stdin);
        printf("\nDigite a Cidade do Endereço %d: ", i);
        scanf("%s", endereco[i].cidade);
        fflush(stdin);
        printf("\nDigite o Estado do Endereço %d: ", i);
        scanf("%s", endereco[i].estado);
    }
    fflush(stdin);
    printf("Cadastro finalizado. Pressione qualquer tecla.");
    getch();
    menu();
}

int listar(int a){
    float ent;
    system("clear");
    if(a == 0){
        printf("\t\tLista");
    }
    for(i=0;i<5;i++){
        if(endereco[i].nome[0] == '\0'){
            printf("\nPosição %d vazia.", i);
            continue;
        }
        else{
            printf("\nEndereço [%d]:", i);
            printf("\n\tNome: %s\tRua: %s\tNúmero: %d\tCidade: %s\tEstado: %s\n", endereco[i].nome, endereco[i].rua, endereco[i].numero, 
                                                                                endereco[i].cidade, endereco[i].estado);
        }
    }
    if(a == 0){
        fflush(stdin);
        printf("\n\nAperte Enter para voltar ao menu.");
        getchar();
        menu();
    }
    return 0;
}

int deletar(){
    int pos;
    printf("\t\tDeletar");
    listar(1);
    printf("\nDigite a posição que deseja deletar: ");
    scanf("%d", &pos);
    inicializar(pos);
}
