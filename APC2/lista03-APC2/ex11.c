#include <stdio.h>

int main(){
    int i, j, n;
    printf("Digite o número de linhas do triângulo a ser gerado: ");
    scanf("%d", &n);
    int tp[n][n];
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            if(i==j || j==0){
                tp[i][j] = 1;
            }
            else if(j>i){
                tp[j][i] = 0;
            }
            else{
                tp[i][j] = tp[i-1][j-1]+tp[i-1][j];
            }
        }
    }
    for(i=0;i<n;i++){
            for(j=0;j<=i;j++){
                printf("%d ", tp[i][j]);
            }
            printf("\n");
        }
}