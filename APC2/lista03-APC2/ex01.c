#include <stdio.h>

int primo(int *v);

int i, j;

int main(){
    int v[10];
    printf("Digite 10 números para o vetor: ");
    for(i=0;i<10;i++){
        scanf("%d", &v[i]);
    }
    primo(v);
}

int primo(int *v){
    int cont;
    printf("\nNúmeros primos do vetor: ");
    for(i=0;i<10;i++){
        cont = 0;
        for(j=1;j<=v[i];j++){
            if((v[i]%j) == 0){
                cont++;
            }
        }
        if(cont<=2 && v[i] != 1){
            printf("\nNúmero: %d\tPosição: %d", v[i], i);
        }
    }
}