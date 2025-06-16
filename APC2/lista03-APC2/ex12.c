#include <stdio.h>

int main() {
    int vt[100];
    int count = 0;
    int num = 1;
    while (count < 100) {
        if (num % 7 != 0 && num % 10 != 7) {
            vt[count] = num;
            count++;
        }
        num++;
    }
    printf("\nVetor preenchido: [");
    for (int i = 0; i < 100; i++) {
        printf("%d ", vt[i]);
    }
    printf("]\n");
    return 0;
}
