#include <stdio.h>
#include <math.h>

int main() {
    float v[10], soma = 0, m, desvio = 0;
    printf("Digite 10 números:\n");
    for (int i = 0; i < 10; i++) {
        printf("Número %d: ", i + 1);
        scanf("%f", &v[i]);
        soma += v[i];
    }
    m = soma / 10;
    for (int i = 0; i < 10; i++) {
        desvio += pow(v[i] - m, 2);
    }
    desvio = sqrt(desvio / 10);
    printf("Média: %.2f\n", m);
    printf("Desvio padrão: %.2f\n", desvio);
    return 0;
}
