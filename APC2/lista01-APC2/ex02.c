#include <stdio.h>

int procurar(int val, int v[]);

int i;

int main(){
    int v[8], x, y;
    printf("\nDigite 8 valores para o vetor: ");
    for(i=0;i<8;i++){
        scanf("%d", &v[i]);
    }
    printf("\nDigite dois valores (X e Y) para procurar no vetor: ");
    scanf("%d%d", &x, &y);
    printf("\nX: ");
    procurar(x, v);
    printf("\nY: ");
    procurar(y, v);
    printf("\n");
}

int procurar(int val, int v[]){
    int cont = 0;
    for(i=0;i<8;i++){
        if(v[i] == val){
            printf("Posição %d ", i+1);
            cont++;
        }
    }
    if(cont==0){
        printf("Não encontrado.");
    }
}