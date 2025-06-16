#include <stdio.h>

int strrev(char *str);

int main(){
    char str[20];
    printf("Digite uma string: ");
    scanf("%s", str);
    strrev(str);
}

int strrev(char *str){
    if(*str){
        strrev(str+1);
        printf("%c", *str);
    }
}