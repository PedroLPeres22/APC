#include <stdio.h>

int imprimir(int *v);

int i;

int main(){
    int vt[10];
    printf("Digite 10 valores para o vetor: ");
    for(i=0;i<10;i++){
        scanf("%d", &vt[i]);
    }
    imprimir(vt);
}

int imprimir(int *v){
    int mai = v[0], men = v[0], posMai = 1, posMen = 1;
    for(i=0;i<10;i++){
        if(v[i]<men){
            men = v[i];
            posMen = i+1;
        }
        else if(v[i]>mai){
            mai = v[i];
            posMai = i+1;
        }
    }
    printf("\nMaior número: %d", mai);
    printf("\nPosição do maior número: %d", posMai);
    printf("\nMenor número: %d", men);
    printf("\nPosição do menor número: %d", posMen);
    printf("\n");
}