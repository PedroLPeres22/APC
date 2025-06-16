#include <stdio.h>

int cont(int n);

int main(){
    int n;
    printf("Digite um número: ");
    scanf("%d", &n);
    printf("%d ", cont(n));
}

int cont(int n){
    if(n == 0){
        printf("%d ", n);
        return 0;
    }
    else{
        printf("%d ", n);
        return cont(n-1);
    }
}