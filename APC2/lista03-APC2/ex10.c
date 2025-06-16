#include <stdio.h>

void ordena(float* vt, int* tamanho, float numero) {
    int i = *tamanho - 1;
    while (i >= 0 && *(vt + i) > numero) {
        *(vt + i + 1) = *(vt + i);
        i--;
    }
    *(vt + i + 1) = numero;
    (*tamanho)++;  
}

void imprima(float* vt, int tamanho) {
    printf("vt ordenado:\n");
    for (int i = 0; i < tamanho; i++) {
        printf("%.2f ", *(vt + i));
    }
    printf("\n");
}

int main() {
    float vt[10];
    int tamanho = 0;  
    printf("Digite 10 números reais (um por vez):\n");
    for (int i = 0; i < 10; i++) {
        float numero;
        printf("Número %d: ", i + 1);
        scanf("%f", &numero);
        ordena(vt, &tamanho, numero);
    }
    imprima(vt, 10);
    return 0;
}
