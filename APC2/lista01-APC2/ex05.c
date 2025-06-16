#include <stdio.h>

int i, j;

int repetidos(int *v, int num);

int main(){
    int vt[20];
    printf("\nDigite 20 valores para o vetor: ");
    for(i=0;i<20;i++){
        scanf("%d", &vt[i]);
    }
    printf("\nVetor sem números repetidos: [ ");
    for(i=0;i<20;i++){
        if(repetidos(&vt[0], vt[i])){
            printf("%d ", vt[i]);
        }
    }
    printf(" ]\n");
}

int repetidos(int *v, int num){
    int cont;
    for(i=0;i<20;i++){
        if(num == v[i]){
            cont++;
        }
    }
    if(cont>=1){
        return 1;
    }
    else{
        return 0;
    }
}