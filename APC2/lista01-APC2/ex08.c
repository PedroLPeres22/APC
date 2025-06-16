#include <stdio.h>

int armazena(int *v1, int *v2);

int i;

int main(){
    int vt1[10], vt2[10];
    printf("Digite os valores do primeiro vetor: ");
    for(i=0;i<10;i++){
        scanf("%d", &vt1[i]);
    }
    printf("\nDigite os valores do segundo vetor: ");
    for(i=0;i<10;i++){
        scanf("%d", &vt2[i]);
    }
    armazena(vt1, vt2);
}

int armazena(int *v1, int *v2){
    int vt3[10];
    for(i=0;i<10;i++){
        if(i%2 == 0){
            vt3[i] = v1[i];
        }
        else{
            vt3[i] = v2[i];
        }
    }
    for(i=0;i<10;i++){
        printf("%d ", vt3[i]);
    }
}