#include <stdio.h>

int leitura(int *vt);
int imprimepar(int vt2[]);
int imprimeimpar(int vt1[]);

int i;

int main(){
    int vetor[10];
    printf("\nDigite 10 valores para o vetor: ");
    leitura(vetor);
    printf("\nValores pares: ");
    imprimepar(vetor);
    printf("\nValores impares: ");
    imprimeimpar(vetor);
    printf("\n");
}

int leitura(int *vt){
    for(i=0;i<10;i++){
        scanf("%d", &vt[i]);
    }
}

int imprimepar(int vt2[]){
    for(i=0;i<10;i++){
        if(vt2[i]%2 == 0){
            printf("%d ", vt2[i]);
        }
    }
}

int imprimeimpar(int vt1[]){
    for(i=0;i<10;i++){
        if(!(vt1[i]%2==0)){
            printf("%d ", vt1[i]);
        }
    }
}