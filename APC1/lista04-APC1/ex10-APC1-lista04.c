#include <stdio.h>

int main(){
    int i, j, m1[2][3], m2[2][3], m3[2][3];
    printf("Digite os elementos da matriz 1: ");
    for(i=0;i<2;i++){
        for(j=0;j<3;j++){
            scanf("%d", &m1[i][j]);
        }
    }
    printf("Digite os elementos da matriz 2: ");
    for(i=0;i<2;i++){
        for(j=0;j<3;j++){
            scanf("%d", &m2[i][j]);
        }
    }
    printf("\n\nMatriz 1: ");
    for(i=0;i<2;i++){
        printf("\n|");
        for(j=0;j<3;j++){
            printf(" %d ", m1[i][j]);
        }
        printf("|");
    }
    printf("\nMatriz 2: ");
    for(i=0;i<2;i++){
        printf("\n|");
        for(j=0;j<3;j++){
            printf(" %d ", m2[i][j]);
        }
        printf("|");
    }
    printf("\nMatriz 3: ");
    for(i=0;i<2;i++){
        printf("\n|");
        for(j=0;j<3;j++){
            m3[i][j] = m1[i][j] + m2[i][j];
            printf(" %d ", m3[i][j]);
        }
        printf("|");
    }
    printf("\n");
}