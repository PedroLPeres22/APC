#include <stdio.h>

int maxnum(int *v);

int i;

int main(){
    int vt[10];
    printf("Digite 10 números para o vetor: ");
    for(i=0;i<10;i++){
        scanf("%d", &vt[i]);
    }
    maxnum(vt);
}

int maxnum(int *v){
    int max = v[0];
    for(i=0;i<10;i++){
        if(v[i]>max){
            max = v[i];
        }
    }
    printf("Valor maior do vetor: %d\n", max);
}