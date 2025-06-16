//PROVA A - APC 2 - 12/02/25
//Pedro Leonardo Soares da Silva de Oliveira Peres
//Matrícula: 202400185

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct aluno{
    char nome[100];
    int matricula;
    int nota1;
    int nota2;
    int nota3;
    int media;
    int situacao;    
}aluno;

void menu();
void init(aluno v[], int aluno);
void cadastro(aluno v[]);
int verificar(int n, aluno v[], int op, char nome[]);
void buscaAluno(aluno v[]);
void imprimir(aluno v[], int b);
void excluir(aluno v[]);

int main(){
    menu();
    return 0;
}

void menu(){
    aluno turma[50];
    int op;
    init(turma, -1);
    do{
        
        printf("\tMENU");
        printf("\n\t1 - Cadastrar Alunos\t");
        printf("\n\t2 - Exibir Aluno\t");
        printf("\n\t3 - Mostrar Turma\t");
        printf("\n\t4 - Excluir Aluno\t");
        printf("\n\nDigite uma opção:");
        scanf("%d", &op);
        fflush(stdin);
    }while(op<1 || op>4);
    switch (op){
        case 1: cadastro(turma); break;
        case 2: buscaAluno(turma); break;
        case 3: imprimir(turma, -1); break;
        case 4: excluir(turma); break;
    }
}

void init(aluno v[], int aluno){
    int i;
    if(aluno!=(-1)){
        v[aluno].nome[0] = '\0';
        v[aluno].matricula = 0;
        v[aluno].media = 0;
        v[aluno].nota1 = 0;
        v[aluno].nota3 = 0;
        v[aluno].media = 0;
        v[aluno].situacao = 0;
    }
    else{
        for(i=0;i<50;i++){
            v[i].nome[0] = '\0';
            v[i].matricula = 0;
            v[i].media = 0;
            v[i].nota1 = 0;
            v[i].nota3 = 0;
            v[i].media = 0;
            v[i].situacao = 0;
        }
    }
}

void cadastro(aluno v[]){
    int i;
    
    printf("\t\tCADASTRO\t\t");
    for(i=0;i<50;i++){
        int matricula, matricula2;
        printf("\nDigite o nome do aluno: ");
        scanf("%s", v[i].nome);
        fflush(stdin);
        printf("\nDigite a matrícula do aluno: ");
        scanf("%d", &matricula);
        fflush(stdin);
        if (verificar(matricula, v, 2, '\0')){
            do{
            printf("\nNúmero de matrícula já cadastrado.");
            printf("\nDigite outro número: ");
            scanf("%d", &matricula2);
            fflush(stdin);
            }while(matricula2 == matricula);
            v[i].matricula = matricula2;
        }
        else{
            v[i].matricula = matricula;
        }
        printf("\nDigite as notas do aluno (N1, N2, N3): ");
        scanf("%d%d%d", &v[i].nota1, &v[i].nota2, &v[i].nota3);
        fflush(stdin);
        v[i].media = (v[i].nota1 + v[i].nota2 + v[i].nota3)/3;
        if(v[i].media < 6){
            v[i].situacao = 0;
        }
        else{
            v[i].situacao = 1;
        }
    }
    printf("\nCadastros realizados com sucesso.\n");
    getchar();
    menu();
}

int verificar(int n, aluno v[], int op, char nome[]){
    int i;
    if(op == 1){
        for(i=0;i<50;i++){
            if(n == v[i].matricula){
                return i;
            }
        }
    }
    else if(op == 2){
        for(i=0;i<50;i++){
            if(n == v[i].matricula){
                return 1;
            }
        }
        return 0;
    }
    else if(op == 3){
        for(i=0;i<50;i++){
            if(!(strcmp(nome, v[i].nome))){
                return i;
            }
        }
    }
}

void buscaAluno(aluno v[]){
    int busca, mat;
    char nome[100];
    do{
        
        printf("\tBUSCA");
        printf("\n\n1 - Matrícula");
        printf("\n2 - Nome");
        printf("\n\nDigite a opção de busca desejada: ");
        scanf("%d", &busca);
    }while(busca<1 || busca>2);
    switch (busca){
        case 1: {
            printf("Digite a matrícula: ");
            scanf("%d", &mat);
            imprimir(v, verificar(mat, v, 1, '\0'));
        }
        case 2: {
            printf("Digite o nome do aluno: ");
            scanf("%[^\n]s", nome);
            imprimir(v, verificar(0, v, 3, nome));
        }
    }
    getchar();
    menu();
}

void imprimir(aluno v[], int b){
    int i;
    if(b != (-1)){
        printf("Nome: %s | Matrícula: %d | N1: %d | N2: %d | N3: %d | Média: %d | Situação: ",
                    v[b].nome,v[b].matricula,v[b].nota1, v[b].nota2, v[b].nota3, v[b].media);
        if(v[b].situacao){
            printf("APROVADO\n");
        }
        else{
            printf("REPROVADO\n");
        }
    }
    else{
        for(i=0;i<50;i++){
                printf("Nome: %s | Matrícula: %d | N1: %d | N2: %d | N3: %d | Média: %d | Situação: ",
                        v[i].nome,v[i].matricula,v[i].nota1, v[i].nota2, v[i].nota3, v[i].media);
            if(v[i].situacao){
                printf("APROVADO\n");
            }
            else{
                printf("REPROVADO\n");
            }
        }
    }
    getchar();
    menu();
}

void excluir(aluno v[]){
    int op3, mat2;
    char nome2[100];
    do{
        printf("\t\tEXCLUIR ALUNO");
        printf("\n\n1 - Matrícula");
        printf("\n2 - Nome");
        printf("Digite a opção desejada: ");
        scanf("%d", &op3);
    }while(op3<1 || op3>2);
    switch (op3){
        case 1: {
            printf("\nDigite a matrícula: ");
            scanf("%d", &mat2);
            init(v, verificar(mat2, v, 1, '\0'));
        }
        case 2: {
            printf("\nDigite o nome do aluno: ");
            scanf("%[^\n]s", nome2);
            init(v, verificar(0, v, 3, nome2));
        }
    }
    printf("\nExclusão concluída com sucesso.");
    getchar();
    menu();
}   
