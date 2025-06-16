#include <stdio.h>

int armazena(int *v);
int escalar(int *v1, int *v2, int *produto);
int imprime(int *v, int n, int op);

int i;

int main(){
    int vt1[15], vt2[15], pEscalar;
    armazena(vt1);
    armazena(vt2);
    escalar(vt1, vt2, &pEscalar);
    printf("\nVetor 1: [ ");
    imprime(vt1, 0, 1);
    printf("]\n");
    printf("\nVetor 2: [ ");
    imprime(vt2, 0, 1);
    printf("]\n");
    printf("\nProduto Escalar: ");
    imprime(vt1, pEscalar, 0);

}

int armazena(int *v){
    for(i=0;i<15;i++){
        scanf("%d", &v[i]);
    }
}

int escalar(int *v1, int *v2, int *produto){
    for(i=0;i<15;i++){
        *produto += (v1[i]*v2[i]);
    }
}

int imprime(int *v, int n, int op){
    if(op){
        for(i=0;i<10;i++){
            printf("%d ", v[i]);
        }
    }
    else{
        printf("%d", n);
    }
}