#include<stdio.h>

int sqrnum(int num), readnum(void), prompt(void);

void main(void){
    int t;
    for(prompt();t=readnum();prompt())
        sqrnum(t);
}

prompt(void){
    printf("Digite um número: ");
    return 0;
}

readnum(void){
    int t;
    scanf("%d", &t);
    return t;
}

