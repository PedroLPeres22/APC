#include <stdio.h>

int add(int n);

int main(){
    int n;
    printf("Digite um número: ");
    scanf("%d", &n);
    printf("%d\n", add(n));
}

int add(int n){
    if(n == 2){
        return n;
    }
    else if(n%2 == 0){
        return n+add(n-2);
    }
    else{
        return add(n-1);
    }
}