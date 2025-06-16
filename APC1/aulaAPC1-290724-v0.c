#include <stdio.h>

int na, nb, m;

int main(){

    printf("Digite as notas do aluno: ");
    scanf("%d %d", &na, &nb);
    m = (na+nb)/2;
    printf("A média desse aluno foi %d\n", m);
    if (m >= 6){
        printf("Aluno Aprovado\n");
    }
    else if (m == 5){
        printf("Aluno em recuperação\n");
    }
        else{
                printf("Aluno reprovado\n");
            }
        }

