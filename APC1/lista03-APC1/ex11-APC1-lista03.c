#include <stdio.h>

    float v1[5], v2[5], v3[5], v4[5];
    int i;

int main(){
    printf("Digite 5 números: ");
    for(i=0;i<5;i++){
        scanf("%f", &v1[i]);
    }
    printf("Digite mais 5 números: ");
    for(i=0;i<5;i++){
        scanf("%f", &v2[i]);
    }
    printf("Digite outros 5 números: ");
    for(i=0;i<5;i++){
        scanf("%f", &v3[i]);
    }
    printf("Vetor 4: "); 
    for(i=0;i<5;i++){
        v4[i] = (v1[i] * v3[i])/v2[i];
        printf("%.2f ", v4[i]);
    }
    printf("\n");
}