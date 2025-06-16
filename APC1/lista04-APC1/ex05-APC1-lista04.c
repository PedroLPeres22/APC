#include <stdio.h>

int main(){
    int i, j;
    float m1[2][3], m2[3][2];
    for(i=0;i<3;i++){
        for(j=0;j<2;j++){
            scanf("%f", &m1[i][j]);
        }
    }
    printf("\nMatriz 1: ");
    for(i=0;i<3;i++){
        printf("\n|");
        for(j=0;j<2;j++){
            printf(" %.2f ", m1[i][j]);
        }
        printf("|");
    }
    printf("\nMatriz Transposta: ");
    for(i=0;i<2;i++){
        printf("\n|");
        for(j=0;j<3;j++){
            m2[i][j] = m1[j][i];
            printf(" %.2f ", m2[i][j]);
        }
        printf("|");
    }
    printf("\n");
}