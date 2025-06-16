#include <stdio.h>
#include <stdlib.h>

int main(){
    int *p, i, n;
    printf("\nDigite o tamanho da memória: ");
    scanf("%d", &n);
    p = (int*)malloc(n*sizeof(int));
    if(!p){
        printf("\nSem memória.");
        exit(1);
    }
    for(i=0;i<n;i++){
        *(p+i) = rand()%100;
        printf("\nValor: %d || Endereço: %p", *((p)+i), p+i);
    }
    free(p);
    printf("\n\nApós desalocar: %p\n\n", p);
}