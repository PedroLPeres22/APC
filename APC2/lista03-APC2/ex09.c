#include <stdio.h>
void ordenar(int *A, int tamanho) {
    for (int i = 0; i < 5; i++) {
        for (int j = i + 1; j < 6; j++) {
            if (*(A + i) > *(A + j)) {
                int temp = *(A + i);
                *(A + i) = *(A + j);
                *(A + j) = temp;
            }
        }
    }
    for (int i = 6; i < 10; i++) {
        for (int j = i + 1; j < 11; j++) {
            if (*(A + i) < *(A + j)) {
                int temp = *(A + i);
                *(A + i) = *(A + j);
                *(A + j) = temp;
            }
        }
    }
}
void imprimir(int *A, int tamanho) {
    for (int i = 0; i < tamanho; i++) {
        printf("%d ", *(A + i));
    }
    printf("\n");
}
int main() {
    int A[11] = {1, 2, 3, 4, 5, 6, 11, 10, 9, 8, 7};
    int tamanho = 11;
    printf("Vetor original:\n");
    imprimir(A, tamanho);
    ordenar(A, tamanho);
    printf("Vetor ordenado:\n");
    imprimir(A, tamanho);
    return 0;
}
