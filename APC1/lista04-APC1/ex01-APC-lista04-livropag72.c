#include <stdio.h>
#include <unistd.h>

void inp_handler(int i){
    int flag = -1;
    switch(i){
        case 1: printf("1");
        case 2: printf("2");
        case 3: flag = 0; break;
        case 4: flag = 1;
        case 5: error(flag); break;
        default: process(i);
    }
}

int process(int i){
    printf("process");
}

int main(){
    int i;
    scanf("%d", &i);
    inp_handler(i);
}