#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX 25

typedef struct paciente{
    char nome[MAX];
    unsigned long int cpf;
    int idade;
    char t_sanguineo[3];
    int doador;
}paciente;

int menu(paciente v[]);
int pacienteInit(paciente v[], int op, int n);
int pacienteVerif(paciente v[], int op, unsigned long int cpf, char nome[]);
int pacienteCadastrar(paciente v[]);
int pacienteExibir(paciente v[]);
int pacienteImprimir(paciente v[], int op, int n);
int pacienteExcluir(paciente v[]);

int main(){
    paciente alaHospital[MAX];
    pacienteInit(alaHospital, 0, 0);
    menu(alaHospital);
}

int menu(paciente v[]){
    int op;
    do{
        printf("\n\tMENU");
        printf("\n\n\t1 - Cadastrar Paciente");
        printf("\n\t2 - Pesquisar Paciente");
        printf("\n\t3 - Imprimir Pacientes");
        printf("\n\t4 - Excluir Paciente");
        printf("\n\nDigite a opção desejada: ");
        scanf("%d", &op);
    }while(op<1 || op>4);
    switch(op){
        case 1: pacienteCadastrar(v); menu(v); break;
        case 2: pacienteExibir(v); menu(v); break;
        case 3: pacienteImprimir(v,0, 0); menu(v); break;
        case 4: pacienteExcluir(v); menu(v); break;
    }
}

int pacienteCadastrar(paciente v[]){
    int i;
    unsigned long int cpf_temp, cpf_temp2;
    printf("\n\tCADASTRO");
    for(i=0;i<MAX;i++){
        printf("\nDigite o nome do paciente: ");
        scanf("%s", v[i].nome);
        printf("\nDigite o cpf do paciente: ");
        scanf("%lu", &cpf_temp);
        if(pacienteVerif(v, 0, cpf_temp, NULL)){
            do{
                printf("\nCPF já registrado, digite outro CPF: ");
                scanf("%lu", &cpf_temp2);
            }while(cpf_temp2 == cpf_temp);
            v[i].cpf = cpf_temp2;
        }
        else{
            v[i].cpf = cpf_temp;
        }
        printf("\nDigite a idade do paciente: ");
        scanf("%d", &v[i].idade);
        printf("\nDigite o tipo sanguíneo do paciente: ");
        scanf("%s", v[i].t_sanguineo);
        printf("\nO paciente é doador? (1 - SIM | 2 - NÃO)");
        scanf("%d", &v[i].doador);
    }
}

int pacienteInit(paciente v[], int op, int n){
    int i;
    if(!op){
        for(i=0;i<MAX;i++){
            v[i].nome[0] = '\0';
            v[i].cpf = 0;
            v[i].idade = 0;
            v[i].t_sanguineo[0] = '\0';
            v[i].doador = 0;
        }
    }
    else{
        v[n].nome[0] = '\0';
        v[n].cpf = 0;
        v[n].idade = 0;
        v[n].t_sanguineo[0] = '\0';
        v[n].doador = 0;
    }
}

int pacienteVerif(paciente v[], int op, unsigned long int cpf, char nome[]){
    int i;
    if(op == 0){
        for(i=0;i<MAX;i++){
            if(v[i].cpf == cpf){
                return 1;
            }
        }
    }
    else if(op == 1){
        for(i=0;i<MAX;i++){
            if(v[i].cpf == cpf){
                return i;
            }
        }
    }
    else if(op == 2){
        for(i=0;i<MAX;i++){
            if(!(strcmp(nome, v[i].nome))){
                return i;
            }
        }
    }
}

int pacienteExibir(paciente v[]){
    int op;
    unsigned long int cpf;
    char nome[MAX];
    printf("\n\tBUSCA");
    do{
    printf("\n\t1 - CPF");
    printf("\n\t2 - Nome");
    printf("\n\nDIgite a opção de busca desejada: ");
    scanf("%d", &op);
    }while(op<1 || op>2);
    switch(op){
        case 1:{
            printf("\n\nDigite o CPF para buscar: ");
            scanf("%lu", &cpf);
            pacienteImprimir(v, op, pacienteVerif(v, op, cpf, '\0'));
        }
        case 2:{
            printf("\n\nDigite o nome para buscar: ");
            scanf("%s", nome);
            pacienteImprimir(v, op, pacienteVerif(v, op, 0, nome));
        }
    }
    getchar();
}

int pacienteImprimir(paciente v[], int op, int n){
    int i;
    if(!op){
        for(i=0;i<MAX;i++){
            printf("\nNOME: %s || CPF: %lu || IDADE: %d || TIPO SANGUÍNEO: %s || DOADOR:", 
            v[i].nome, v[i].cpf, v[i].idade, v[i].t_sanguineo);
            if(v[i].doador == 1){
                printf(" SIM");
            }
            else{
                printf(" NÃO");
            }
        }
    }
    if(op == 1){
        printf("\nNOME: %s || CPF: %lu || IDADE: %d || TIPO SANGUÍNEO: %s || DOADOR:", 
        v[n].nome, v[n].cpf, v[n].idade, v[n].t_sanguineo);
        if(v[n].doador == 1){
            printf(" SIM");
        }
        else{
            printf(" NÃO");
        }
    }
    getchar();
}

int pacienteExcluir(paciente v[]){
    int op;
    unsigned long int cpf;
    char nome[MAX];
    printf("\n\tEXCLUIR");
    do{
    printf("\n\n\t1 - CPF");
    printf("\n2 - Nome");
    printf("\n\nDigite a opção desejada: ");
    scanf("%d", &op);
    }while(op<1 || op>2);
    switch(op){
        case 1:{
            printf("\n\nDigite o CPF para excluir: ");
            scanf("%lu", &cpf);
            pacienteInit(v, op, pacienteVerif(v, op, cpf, '\0'));
        }
        case 2:{
            printf("\n\nDigite o nome para excluir: ");
            scanf("%s", nome);
            pacienteInit(v, op, pacienteVerif(v, op, 0, nome));
        }
    }
    printf("\nExclusão feita com sucesso.");
    getchar();
}