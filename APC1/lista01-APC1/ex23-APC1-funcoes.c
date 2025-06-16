#include <stdio.h>

int incrementaVetor(int *v);

int main(){
    int i, vt[10];
    printf("Digite os valores do vetor: ");
    for(i=0;i<10;i++){
        scanf("%d", &vt[i]);
    }
    printf("Vetor Original: [ ");
    for(i=0;i<10;i++){
        printf("%d ", vt[i]);
    }
    printf("]\n");
    incrementaVetor(&vt[0]);
    printf("Vetor Modificado: [ ");
    for(i=0;i<10;i++){
        printf("%d ", vt[i]);
    }
    printf("]\n");
}

int incrementaVetor(int *v){
    int i;
    for(i=0;i<10;i++){
        v[i]+=1;
    }
}