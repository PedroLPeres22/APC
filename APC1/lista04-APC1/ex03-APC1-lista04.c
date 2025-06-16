#include <stdio.h>

int main(){
    int i, j, m1[3][4];
    for(i=0;i<3;i++){
        for(j=0;j<4;j++){
            scanf("%d", &m1[i][j]);
        }
    }
    printf("Matriz: ");
    for(i=0;i<3;i++){
        printf("\n|");
        for(j=0;j<4;j++){
            printf(" %d ", m1[i][j]);
        }
        printf("|");
    }
    printf("\nElemento do canto superior esquerdo: [ %d ]", m1[0][0]);
    printf("\nElemento do canto inferior direito: [ %d ]\n", m1[2][3]);
}