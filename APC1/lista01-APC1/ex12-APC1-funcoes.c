#include <stdio.h>

int ordemCrescente(int v[4]);

int main(){
    int i, vt[4];
    for(i=0;i<4;i++){
        scanf("%d", &vt[i]);
    }
    printf("\nValores digitados: [");
    for(i=0;i<4;i++){
        printf("%d ", vt[i]);
    }
    printf("]");
    ordemCrescente(&vt);
}

int ordemCrescente(int v[]){
    int i, j, temp;
    printf("\nValores em ordem: [");
    for(i=0;i<4;i++){
        for(j=i+1;j<4;j++){
            if(v[i]>v[j]){
                temp = v[i];
                v[i] = v[j];
                v[j] = temp;
            }
        }
    }
    for(i=0;i<4;i++){
        printf("%d ", v[i]);
    }
    printf("]\n");
}