#include <stdio.h>
#include <math.h>

    int n, e, pot;

int main(){
    printf("Digite um número: ");
    scanf("%d", &n);
    printf("Digite o expoente: ");
    scanf("%d", &e);
    while (e<=0){
        printf("Expoente inválido, digite outro número: ");
        scanf("%d", &e);
    }
    pot = pow(n,e);
    printf("%d elevado a %d é igual a %d", n, e, pot);
}