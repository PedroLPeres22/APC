#include <stdio.h>

int main(){
    int i, j, m1[3][4], m2[3][4];
    for(i=0;i<3;i++){
        for(j=0;j<4;j++){
            scanf("%d", &m1[i][j]);
            m2[i][j] = m1[i][j]*2;
        }
    }
    printf("\nMatriz 1: ");
    for(i=0;i<3;i++){
        printf("\n|");
        for(j=0;j<4;j++){
            printf(" %d ", m1[i][j]);
        }
        printf("|");
    }
    printf("\nMatriz 2: ");
    for(i=0;i<3;i++){
        printf("\n|");
        for(j=0;j<4;j++){
            printf(" %d ", m2[i][j]);
        }
        printf("|");
    }
    printf("\n");
}