#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>
#define MAXALUN 50
#define MAXTURM 10
#define MAXCHAR 150
#ifdef _WIN32
    #define tela "cls"
    #define sistema "Windows"
    #include <conio.h>
    #include <windows.h>
#elif __linux__
    #define tela "clear"
    #define sistema "Linux"
    #include <unistd.h>
#endif


typedef struct{
    char nomeAluno[MAXCHAR];
    int matriculaAluno, freqAluno, sitAluno;
    float P1, P2, E1, E2, T1, mediaAluno;
}Aluno;

typedef struct{
    char nomeTurma[MAXCHAR], Prof[MAXCHAR];
    int tamTurma, numTurma;
    Aluno discentesTurma[MAXALUN];
}Turma;

int cadastroTurmas(), pesquisaAluno(), imprimirAlunos(int sit), cadastroAlunos(), menu(), sairPrograma();
int i, j, k, l, m, n;
Turma classes[MAXTURM];

int main(){
    system("color 0A");
    setlocale(LC_ALL, "");
    menu();
    return 0;
}

int menu(){
    int op;
    do{
        system(tela);
        printf("\t   Programa rodando no %s!", sistema);
        printf("\n\t*****************************************");
        printf("\n\t****  GERENCIADOR DE TURMAS E ALUNOS  ***");
        printf("\n\t*****************************************");
        printf("\n######\t\t\tOPÇÕES\t\t\t######");
        printf("\n######\t\t[ 1 ] - CADASTRAR TURMAS \t######");
        printf("\n######\t\t[ 2 ] - CADASTRAR ALUNOS \t######");
        printf("\n######\t\t[ 3 ] - ALUNOS APROVADOS \t######");
        printf("\n######\t\t[ 4 ] - ALUNOS REPROVADOS \t######");
        printf("\n######\t\t[ 5 ] - TODOS OS ALUNOS  \t######");
        printf("\n######\t\t[ 6 ] - PESQUISAR ALUNO \t######");
        printf("\n######\t\t[ 7 ] - SAIR DO PROGRAMA \t######");
        printf("\n\tDIGITE A OPÇÃO DESEJADA: ");
        scanf("%d", &op);
    }while(op>7 || op<1);
    switch (op){
        case 1: cadastroTurmas(); break;
        case 2: cadastroAlunos(); break;
        case 3: imprimirAlunos(1); break;
        case 4: imprimirAlunos(2); break;
        case 5: imprimirAlunos(3); break;
        case 6: pesquisaAluno(); break;
        case 7: return 0; break;
        default: menu(); break;
    }
}

int cadastroTurmas(){
    int n;
    do{
        system(tela);
        printf("\nCadastro de Turmas \n\n");
        printf("Digite o número de turmas que deseja cadastrar(no máximo 10): ");
        scanf("%d", &n);
    }while(n<0 || n>10);
    for(i=0;i<n;i++){
        classes[i].numTurma = i+1;
        printf("Digite o nome da turma %d: ", i+1);
        fflush(stdin);
        scanf("%[^\n]s", &classes[i].nomeTurma);
        printf("Digite o tamanho da turma %d: ", i+1);
        scanf("%d", &classes[i].tamTurma);
        fflush(stdin);
        printf("Digite o professor da turma %d: ", i+1);
        scanf("%[^\n]s", &classes[i].Prof);
    }
    sairPrograma();
}

int cadastroAlunos(){
	int trm;
    printf("\nCadastro de Alunos: ");
    do{
        system(tela);
        for(i=0;i<10;i++){
            if(classes[i].numTurma!=0)
            printf("\nTurma %d - %s || Prof. %s", classes[i].numTurma, classes[i].nomeTurma, classes[i].Prof);
        }
        printf("\nQual turma deseja cadastrar os alunos? ");
        scanf("%d", &trm);
    }while(trm<0 || trm>10);
    		for(j=0;j<classes[trm-1].tamTurma;j++){
                fflush(stdin);
    			printf("\nDigite o nome do aluno: ");
    			scanf("%[^\n]s",&classes[trm-1].discentesTurma[j].nomeAluno);
    			printf("\nDigite a matrícula do aluno: ");
    			scanf("%d",&classes[trm-1].discentesTurma[j].matriculaAluno);
    			do{
                    printf("Digite a frequência do aluno: ");
                    scanf("%d", &classes[trm-1].discentesTurma[j].freqAluno);
    			}while(classes[trm-1].discentesTurma[j].freqAluno<0 || classes[trm-1].discentesTurma[j].freqAluno>64);
    			do{
                    printf("Digite a nota do aluno(P1): \n");
                    scanf("%f",&classes[trm-1].discentesTurma[j].P1);
                }while(classes[trm-1].discentesTurma[j].P1 < 0 ||classes[trm-1].discentesTurma[j].P1>30);
    			do{
                    printf("Digite a nota do aluno(P2): \n");
                    scanf("%f",&classes[trm-1].discentesTurma[j].P2);
                }while(classes[trm-1].discentesTurma[j].P2 < 0 ||classes[trm-1].discentesTurma[j].P2>50);
    			do{
                    printf("Digite a nota do aluno(E1): \n");
                    scanf("%f",&classes[trm-1].discentesTurma[j].E1);
                }while(classes[trm-1].discentesTurma[j].E1 < 0 ||classes[trm-1].discentesTurma[j].E1>5);
    			do{
                    printf("Digite a nota do aluno(E2): \n");
                    scanf("%f",&classes[trm-1].discentesTurma[j].E2);
                }while(classes[trm-1].discentesTurma[j].E2 < 0 ||classes[trm-1].discentesTurma[j].E2>30);
    			do{
                    printf("Digite a nota do aluno(T1): \n");
                    scanf("%f",&classes[trm-1].discentesTurma[j].T1);
                }while(classes[trm-1].discentesTurma[j].T1 < 0 ||classes[trm-1].discentesTurma[j].T1>10);
    			system(tela);
    			classes[trm-1].discentesTurma[j].mediaAluno = classes[trm-1].discentesTurma[j].P1 +
                                                              classes[trm-1].discentesTurma[j].P2 +
                                                              classes[trm-1].discentesTurma[j].E1 +
                                                              classes[trm-1].discentesTurma[j].E2 +
                                                              classes[trm-1].discentesTurma[j].T1;
                if(classes[trm-1].discentesTurma[j].mediaAluno>=60 && classes[trm-1].discentesTurma[j].freqAluno>=50){
                    classes[trm-1].discentesTurma[j].sitAluno = 1;
                }
                else{
                    classes[trm-1].discentesTurma[j].sitAluno = 2;
                }
			}
        sairPrograma();
}

int imprimirAlunos(int sit){
    system(tela);
    printf("\nDados dos Alunos: ");
    if(sit == 3){
    for(i=0;i<MAXTURM;i++){
        for(j=0;j<classes[i].tamTurma; j++){
            printf("\nALUNO: %s  || MATRÍCULA: %d || TURMA: %s || P1: %.2f  P2: %.2f E1: %.2f E2: %.2f T1: %.2f || MÉDIA: %.2f% || SITUAÇÃO: ",
                classes[i].discentesTurma[j].nomeAluno,classes[i].discentesTurma[j].matriculaAluno, classes[i].nomeTurma,
                classes[i].discentesTurma[j].P1, classes[i].discentesTurma[j].P2,
                classes[i].discentesTurma[j].E1, classes[i].discentesTurma[j].E2,
                classes[i].discentesTurma[j].T1, classes[i].discentesTurma[j].mediaAluno);
                if(classes[i].discentesTurma[j].sitAluno == 1){
                        printf(" APROVADO");
                           }
                else if (classes[i].discentesTurma[j].sitAluno == 2){
                        printf(" REPROVADO");
                           }
            }
        }
    }
    else{
    for(i=0;i<MAXTURM;i++){
        for(j=0;j<classes[i].tamTurma; j++){
            if(classes[i].discentesTurma[j].sitAluno == sit){
                printf("\nALUNO: %s  || MATRÍCULA: %d || TURMA: %s || P1: %.2f  P2: %.2f E1: %.2f E2: %.2f T1: %.2f || MÉDIA: %.2f% || SITUAÇÃO: ",
                classes[i].discentesTurma[j].nomeAluno, classes[i].discentesTurma[j].matriculaAluno, classes[i].nomeTurma,
                classes[i].discentesTurma[j].P1, classes[i].discentesTurma[j].P2,
                classes[i].discentesTurma[j].E1, classes[i].discentesTurma[j].E2,
                classes[i].discentesTurma[j].T1, classes[i].discentesTurma[j].mediaAluno);
                        if(sit == 1){
                        printf(" APROVADO");
                        }
                        else if (sit == 2){
                        printf(" REPROVADO");
                        }
                }
            }
        }
    }
    sairPrograma();
}

int pesquisaAluno(){
    int opc, matPesq;
    char nomePesq[100];
    do{
        system(tela);
        printf("\nDeseja pesquisar pelo nome ou pela matrícula? 1 - NOME / 2 - MATRÍCULA\n");
        scanf("%d", &opc);
        fflush(stdin);
    }while(opc<1 || opc>2);
    if(opc == 1){

        printf("\nDigite o nome do aluno: ");
      scanf("%[^\n]s",&nomePesq);

        for(i=0;i<MAXTURM;i++){
            for(j=0;j<classes[i].tamTurma;j++){
                if(strcmp(classes[i].discentesTurma[j].nomeAluno, nomePesq) == 0){
                    printf("\nALUNO: %s  || MATRÍCULA: %d || TURMA: %s || P1: %.2f  P2: %.2f E1: %.2f E2: %.2f T1: %.2f || MÉDIA: %.2f% || SITUAÇÃO: ",
                    classes[i].discentesTurma[j].nomeAluno, classes[i].discentesTurma[j].matriculaAluno, classes[i].nomeTurma,
                    classes[i].discentesTurma[j].P1, classes[i].discentesTurma[j].P2,
                    classes[i].discentesTurma[j].E1, classes[i].discentesTurma[j].E2,
                    classes[i].discentesTurma[j].T1, classes[i].discentesTurma[j].mediaAluno);
                    if(classes[i].discentesTurma[j].sitAluno == 1){
                            printf(" APROVADO");
                        }
                    else if (classes[i].discentesTurma[j].sitAluno == 2){
                            printf(" REPROVADO");
                        }
                }
            }
        }
    }
    else if(opc == 2){
        printf("\nDigite a matrícula do Aluno");
        scanf("%d", &matPesq);
        for(i=0;i<MAXTURM;i++){
            for(j=0;j<classes[i].tamTurma;j++){
                if(classes[i].discentesTurma[j].matriculaAluno == matPesq){
                    printf("\nALUNO: %s  || MATRÍCULA: %d || TURMA: %s || P1: %.2f  P2: %.2f E1: %.2f E2: %.2f T1: %.2f || MÉDIA: %.2f% || SITUAÇÃO: ",
                    classes[i].discentesTurma[j].nomeAluno, classes[i].discentesTurma[j].matriculaAluno, classes[i].nomeTurma,
                    classes[i].discentesTurma[j].P1, classes[i].discentesTurma[j].P2,
                    classes[i].discentesTurma[j].E1, classes[i].discentesTurma[j].E2,
                    classes[i].discentesTurma[j].T1, classes[i].discentesTurma[j].mediaAluno);
                    if(classes[i].discentesTurma[j].sitAluno == 1){
                        printf(" APROVADO");
                           }
                    else if (classes[i].discentesTurma[j].sitAluno == 2){
                        printf(" REPROVADO");
                           }
                }
            }

        }
    }
    sairPrograma();
}

int sairPrograma(){
    int q;
    do{
    printf("\nVocê deseja sair do programa? 1 - SIM / 2 - NÃO\n");
    scanf("%d", &q);
    }while(q<1 || q>2);
    switch(q){
        case 1: return 0; break;
        case 2: menu(); break;
    }
}