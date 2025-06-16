#include <stdio.h>

int main(){
    int i, j, soma, m1[3][3];
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            scanf("%d", &m1[i][j]);
        }
    }
    printf("Matriz: ");
    for(i=0;i<3;i++){
        printf("\n|");
        for(j=0;j<3;j++){
            printf(" %d ", m1[i][j]);
        }
        printf("|");
    }
    soma = m1[0][0] + m1[1][1] + m1[2][2];
    printf("\nSoma da diagonal principal: %d\n", soma);
}