#include <stdio.h>

int main(){
    int i, j, s, l, m[4][3];
    for(i=0;i<4;i++){
        for(j=0;j<3;j++){
            scanf("%d", &m[i][j]);
        }
    }
    printf("\nDigite uma linha da matriz: ");
    scanf("%d", &l);
    s = m[l][0] + m[l][1] + m[l][2];
    printf("Soma dos elementos da linha %d: %d\n", l, s);
}