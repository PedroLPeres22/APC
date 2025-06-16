#include <stdio.h>

int add(int n);

int main(){
    int n;
    printf("Digite um número: ");
    scanf("%d", &n);
    printf("%d ", add(n));
}

int add(int n){
    if(n>0){
        return n+add(n-1);
    }
    else{
        return 0;
    }
}