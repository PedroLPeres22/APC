#include <stdio.h>

    int v1[5], v2[5], v3[10], i;

int main(){
    printf("Digite 5 números p/ o 1⁰ vetor: ");
    for(i=0;i<5;i++){
        scanf("%d", &v1[i]);
    }
    printf("Digite 5 números p/ o 2⁰ vetor: ");
    for(i=0;i<5;i++){
        scanf("%d", &v2[i]);
    }
    for(i=0;i<5;i++){
        v3[i] = v1[i];
    }
    for(i=0;i<5;i++){
        v3[5+i] = v2[i];
    }
    printf("Vetor 3: ");
    for(i=0;i<10;i++){
        printf("%d ", v3[i]);
    }
    printf("\n");
}