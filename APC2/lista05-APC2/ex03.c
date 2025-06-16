#include <stdio.h>

typedef struct Aluno{
    int nota;
    int num;
    int stat;
    char resp[10];
}Aluno;

int registraluno(Aluno v[], char gab[]);
int imprimealuno(Aluno v[]);
int i, j;

int main(){
    Aluno turma[20];
    char gabarito[10];
    for(i=0;i<10;i++){
        printf("Digite a resposta da questão %d: ", i+1);
        scanf("%c", &gabarito[i]);
    }
    registraluno(turma,gabarito);
    imprimealuno(turma);
}

int registraluno(Aluno v[], char gab[]){
    for(i=0;i<20;i++){
        do{
            v[i].nota = 0;
            v[i].stat = 0;
            printf("\nDigite o número da matrícula do aluno: ");
            scanf("%d", &v[i].num);
            for(j=0;j<10;j++){
                printf("\nDigite a resposta da Questão %d: ", j+1);
                scanf("%c", &v[i].resp[j]);
                if(v[i].resp[j] == gab[j]){
                    v[i].nota++;
                }
            }
            if(v[i].nota >= 7){
                v[i].stat = 1;
            }
        }while(v[i].num != 9999);
    }
}

int imprimealuno(Aluno v[]){
    int aprovados = 0, contfreq = 0, freqaux = 0, notafreq;
    for(i=0;i<20;i++){
        printf("\n\tAluno %d | Nota: %d");
        if(v[i].stat){
            aprovados++;
        }
        for(j=0;j<20;j++){
            if(v[i].nota == v[j].nota){
                contfreq++;
            }
        }
        if(contfreq > freqaux){
            freqaux = contfreq;
            notafreq = v[i].nota;
        }
    }
    aprovados = (aprovados/20)*100;
    printf("Porcentagem de aprovação da turma: %d porcento", aprovados);
    printf("Nota mais frequente: %d pontos", notafreq);
}