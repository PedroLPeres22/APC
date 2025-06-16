#include <stdio.h>
#include <string.h>

int charcheck(char c, char *str, int i);

int main(){
    char str[20], c;
    printf("\nDigite uma string: ");
    scanf("%s", str);
    printf("\nDigite o caractere a ser checado: ");
    scanf(" %c", &c);
    charcheck(c, str, 0);
}

int charcheck(char c, char *str, int i){
    if(str[i] != c){
        return charcheck(c, str, i+1);
    }
    else{
        return 1+charcheck(c, str, i+1);
    }
}