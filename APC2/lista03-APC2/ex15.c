#include <stdio.h>
#include <stdlib.h>

void fat(int *n) {
    long long resultado = 1;
    for (int i = 1; i <= *n; i++) {
        resultado *= i;
    }
    printf("Fatorial de %d é %lld\n", *n, resultado);
}
int main(int argc, char *argv[]) {
    if (argc != 2) {
        printf("Erro: Número incorreto de parâmetros. Use: <número>\n");
        return 1;
    }
    int n = atoi(argv[1]);
    if (n < 0) {
        printf("Erro: O número deve ser não-negativo.\n");
        return 1;
    }
    fat(&n);
    return 0;
}
