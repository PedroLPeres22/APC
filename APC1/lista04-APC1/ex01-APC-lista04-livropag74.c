#include <stdio.h>

int main(){
    int x, y;
    scanf("%d", &x);
    switch(x){
        case 1:
        switch(y){
            case 0: printf("erro de divisão por 0"); break;
            case 1: process(x, y);
        }
        break;
        case 2: printf("2");
    }
}

int process(int x, int y){
    printf("process");
}