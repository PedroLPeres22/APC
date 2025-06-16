#include <stdio.h>

    int num, i = 1, j;

int main(){
    int vt[i];
    printf("Digite um número: ");
    scanf("%d", &num);
    vt[0] = num;
    while (num!=0){
        scanf("%d", &num);
        vt[i] = num;
        i++;
    }
    for (j=0; j<i; j++){
        vt[j] *= vt[j];
        if (vt[j]!=0){
            printf(" %d ", vt[j]);
        }
    }
}