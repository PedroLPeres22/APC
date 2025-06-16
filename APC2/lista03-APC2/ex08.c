#include <stdio.h>


void ordena(float* vt, int tamanho) {
    float temp;
    for (int i = 0; i < tamanho - 1; i++) {
        for (int j = 0; j < tamanho - 1 - i; j++) {
            if (*(vt + j) > *(vt + j + 1)){ 
                temp = *(vt + j);
                *(vt + j) = *(vt + j + 1);
                *(vt + j + 1) = temp;
            }
        }
    }
}


void imprima(float* vt, int tamanho) {
    printf("Vetor ordenado:\n");
    for (int i = 0; i < tamanho; i++) {
        printf("%.2f ", *(vt + i));
    }
    printf("\n");
}

int main() {
    float vt[10];
    printf("Digite 10 números reais:\n");
    for (int i = 0; i < 10; i++) {
        printf("Elemento %d: ", i + 1);
        scanf("%f", &vt[i]);
    }
    ordena(vt, 10);
    imprima(vt, 10);
    return 0;
}
