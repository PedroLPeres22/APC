#include <stdio.h>

    int i, xA = 0, xB, vA[30], vB[30], x;

int main(){
    printf("Digite 30 valores inteiros para o vetor A: ");
    for(i=0;i<30;i++){
        scanf("%d", &vA[i]);
    }
    printf("Digite 30 valores inteiros para o vetor B: ");
    for(i=0;i<30;i++){
        scanf("%d", &vB[i]);
    }
    printf("Digite um valor: ");
    scanf("%d", &x);
    printf("O valor digitado aparece nas posições ");
    for(i=0;i<30;i++){
        if(vA[i] == x){
            xA++;
            printf("%d ", i);
        }
    }
    printf("do vetor A.\nE nas posições ");
    for(i=0;i<30;i++){
        if(vB[i] == x){
            xB++;
            printf("%d ", i);
        }
    }
    printf("do vetor B.\n");
    printf("O valor %d aparece %d vezes no Vetor A e %d vezes no Vetor B.\n", x, xA, xB);
    if(xA>xB)
        printf("O valor %d aparece mais vezes no Vetor A.\n", x);
    else if (xB>xA)
        printf("O valor %d aparece mais vezes no Vetor B.\n", x);
    else
        printf("Os valores aparecem vezes iguais.\n");
}