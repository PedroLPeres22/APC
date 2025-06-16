#include <stdio.h>
#include <stdlib.h>

void triangulo(float *a, float *b, float *c) {
    if (*a <= 0 || *b <= 0 || *c <= 0) {
        printf("Os valores devem ser positivos.\n");
        return;
    }
    if (*a + *b > *c && *a + *c > *b && *b + *c > *a) {
        if (*a == *b && *b == *c) {
            printf("Triângulo Equilátero.\n");
        } else if (*a == *b || *b == *c || *a == *c) {
            printf("Triângulo Isósceles.\n");
        } else {
            printf("Triângulo Escaleno.\n");
        }
    } else {
        printf("Não pode formar um triângulo.\n");
    }
}
int main(int argc, char *argv[]) {
    if (argc != 4) {
        printf("Erro: Número incorreto de parâmetros. Use: <lado1> <lado2> <lado3>\n");
        return 1;
    }
    float a = atof(argv[1]), b = atof(argv[2]), c = atof(argv[3]);
    triangulo(&a, &b, &c);
    return 0;
}
