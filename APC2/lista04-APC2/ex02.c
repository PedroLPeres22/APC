#include <stdio.h>

int fib(int n);

int main(){
    int n;
    printf("Digite um número: ");
    scanf("%d", &n);
    printf("%d ", fib(n));
}

int fib(int n){
    if(n==1){
        return 1;
    }
    else{
        return fib(n-2)+fib(n-1);
    }
}