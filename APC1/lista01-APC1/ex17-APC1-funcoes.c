#include <stdio.h>

int GeraPalindromo(int a);

int main(){
    int x;
    printf("Digite um número: ");
    scanf("%d", &x);
    GeraPalindromo(x);
}

int GeraPalindromo(int a){
    int palin, digi, temp;
    temp = a;
    while(a>0){
        digi = a%10;
        palin = palin*10+digi;
        a/=10;
    }
    if(palin == temp){
        printf("O número %d é um palíndromo.\n", palin);
    }
    else{
        printf("O número %d não é um palíndromo.\n", temp);
        printf("Esse número ao contrário é igual a: %d", palin);
    }
}