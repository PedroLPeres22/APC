#include <stdio.h>

    char *nome[1];
    int matricula, i;
    float n1, n2, n3, m;

int main(){
    printf("Digite o nome do aluno: ");
    scanf("%s", &nome);
    printf("Digite o número da matrícula: ");
    scanf("%d", &matricula);
    printf("Digite as notas do aluno: ");
    scanf("%f%f%f", &n1, &n2, &n3);
    m = (n1+n2+n3)/3;
    printf("Nome: %s\n", nome);
    printf("Matrícula: %d\n", matricula);
    printf("Média: %.2f\n", m);
    if (m>=6){
        printf("O aluno está aprovado.\n");
    }
    else{
        printf("O aluno está reprovado.\n");
    }
}