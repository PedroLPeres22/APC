#include <stdio.h>

int compacta(int *v);

int i, j;

int main(){
    int vt[15];
    printf("Digite 15 valores para o vetor: ");
    for(i=0;i<15;i++){
        scanf("%d", &vt[i]);
    }
    compacta(vt);
}

int compacta(int *v){
    for(i=0;i<15;i++){
        if(v[i] == 0){
            v[i] = v[i+1];
            v[i+1] = 0;
        }
    }
    printf("\nVetor compactado: [ ");
    for(i=0;i<15;i++){
        printf("%d ", v[i]);
    }
    printf("]\n");
}