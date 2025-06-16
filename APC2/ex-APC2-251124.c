#include <stdio.h>

int main(){
    int x = 5, *ptrx, **ptptrx;
    ptrx = &x;
    ptptrx = &ptrx;
    printf("Endereço de X = %u\n", &x);
    printf("Endereço de ptrx = %u\n", &ptrx);
    printf("Endereço de ptptrx = %u\n", &ptptrx);
    printf("Valor de X (ptptrx) = %d\n", **ptptrx);
    printf("Valor de X (ptrx) = %d\n", *ptrx);
    printf("Valor de X (x) = %d\n", x);
}