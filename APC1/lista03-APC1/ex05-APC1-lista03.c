#include <stdio.h>

    int v1[10], v2[10], v3[10], i;

int main(){
    printf("Digite 10 números inteiros: ");
    for(i=0;i<10;i++){
        scanf("%d", &v1[i]);
    }
    printf("Digite outros 10 números inteiros: ");
    for(i=0;i<10;i++){
        scanf("%d", &v2[i]);
    }
    printf("\nVetor 1: ");
    for(i=0;i<10;i++){
        printf("%d ", v1[i]);
    }
    printf("\nVetor 2: ");
    for(i=0;i<10;i++){
        printf("%d ", v2[i]);
    }
    printf("\nVetor 3: ");
    for(i=0;i<10;i++){
        v3[i] = v1[i] + v2[i];
        printf("%d ", v3[i]);
    }
    printf("\n\n");
}