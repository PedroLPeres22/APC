#include <stdio.h>

int main(){
        int x, y, z;
        // Com 4 linhas:
       /* printf("Digite um número: \n");
        scanf("%d", &x);
        printf("Digite outro número: \n");
        scanf("%d", &y); */
        // Com 2 linhas:
        printf("Digite dois números: \n");
        scanf("%d %d", &x, &y);
        z = x + y;
        printf("A soma dos números %d e %d é igual a %d \n", x, y, z);

}