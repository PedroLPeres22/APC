#include <stdio.h>
#include <stdlib.h>

const char* meses[] = {"Janeiro", "Fevereiro", "Março", "Abril", "Maio", "Junho", "Julho", "Agosto", "Setembro", "Outubro", "Novembro", "Dezembro"};

int dias_mes(int m, int a) {
    if (m == 1 || m == 3 || m == 5 || m == 7 || m == 8 || m == 10 || m == 12) return 31;
    if (m == 4 || m == 6 || m == 9 || m == 11) return 30;
    if (m == 2) return (a % 4 == 0 && (a % 100 != 0 || a % 400 == 0)) ? 29 : 28;
    return 0;
}

int main(int argc, char *argv[]) {
    if (argc != 4) { printf("Erro: Número incorreto de parâmetros. Use: <Dia> <Mês> <Ano>\n"); return 1; }
    int d = atoi(argv[1]), m = atoi(argv[2]), a = atoi(argv[3]);
    if (m < 1 || m > 12) { printf("Erro: Mês inválido. Deve ser entre 1 e 12.\n"); return 1; }
    int max_dias = dias_mes(m, a);
    if (d < 1 || d > max_dias) { printf("Erro: Dia inválido. O mês %d de %d tem no máximo %d dias.\n", m, a, max_dias); return 1; }
    printf("%d de %s de %d\n", d, meses[m - 1], a);
    return 0;
}
