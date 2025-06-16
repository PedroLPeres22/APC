#include <stdio.h>

    float v1[10];
    int i;

int main(){
    printf("Digite 10 números: ");
    for(i=0;i<10;i++){
        scanf("%f", &v1[i]);
        v1[i]/=2;
    }
    for(i=0;i<10;i++){
        printf("%.2f ", v1[i]);
    }
    printf("\n");
}