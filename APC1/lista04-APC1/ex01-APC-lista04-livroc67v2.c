#include <stdio.h>

int f1(int n), f2(void);

void main(){
    int t;
    printf("digite um número: ");
    scanf("%d", &t);
    t ? f1(t) + f2(): printf("foi digitado zero");
}

f1(int n){
    printf("%d", n);
    return 0;
}

f2(void){
    printf("foi digitado");
    return 0;
}