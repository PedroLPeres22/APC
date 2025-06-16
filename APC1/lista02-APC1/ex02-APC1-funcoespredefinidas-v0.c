#include <stdio.h>

    int ladoa, ladob, ladoc;

int main(){
    printf("Digite os valores dos lados do triângulo: ");
    scanf("%d%d%d", &ladoa, &ladob, &ladoc);
    if (ladoa + ladob > ladoc && ladob + ladoc > ladoa && ladoa + ladoc > ladob){
        printf("Esses valores podem formar um triângulo.");
        if (ladoa == ladob && ladoa == ladoc){
            printf("Essas medidas formam um triângulo equilátero.\n");
        }
        else if (ladoa == ladob || ladob == ladoc || ladoc == ladoa){
            printf("Essas medidas formam um triângulo isósceles.\n");
        }
        else if (ladoa != ladob && ladob != ladoc){
            printf("Essas medidas formam um triângulo escaleno.\n");
        }
    }
    else{
        printf("Essas medidas não podem formar um triângulo.\n");
    }
}