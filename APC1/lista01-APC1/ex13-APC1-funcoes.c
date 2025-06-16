#include <stdio.h>

int imprimeVetor(int v[]);

int main(){
    int i, v[10];
    for(i=0;i<10;i++){
        scanf("%d", &v[i]);
    }
    imprimeVetor(&v[0]);
}

int imprimeVetor(int v[]){
    int i;
    for(i=0;i<10;i++){
        printf("%d ", v[i]);
    }
}