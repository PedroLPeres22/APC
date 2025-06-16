#include <stdio.h>

int main(){
    int i, j, m[7][8];
    printf("Matriz (ij = i+j): ");
    for(i=0;i<7;i++){
        printf("\n|");
        for(j=0;j<8;j++){
            m[i][j] = i+j;
            printf(" %d ", m[i][j]);
        }
        printf("|");
    }
    printf("\n");
}