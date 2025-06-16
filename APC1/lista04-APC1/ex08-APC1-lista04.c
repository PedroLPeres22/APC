#include <stdio.h>

int main(){
    int i, j, l, c, m[4][3];
    for(i=0;i<4;i++){
        for(j=0;j<3;j++){
            scanf("%d", &m[i][j]);
        }
    }
    do{
        printf("\nDigite o n da linha e da coluna, separado por vírgula: ");
        scanf("%d,%d", &l, &c);
    }while(l>3 || l<0 || c>2 || c<0);
    printf("Valor da linha %d, coluna %d: %d", l, c, m[l][c]);
}