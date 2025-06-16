#include <stdio.h>

int main(){
    int i, j, s, m1[4][4];
    for(i=0;i<4;i++){
        for(j=0;j<4;j++){
            scanf("%d", &m1[i][j]);
        }
    }
    s = m1[1][0] + m1[2][0] + m1[2][1] + m1[3][0] + m1[3][1] + m1[3][2];
    printf("Soma dos elementos abaixo da diagonal principal: %d\n", s);
}