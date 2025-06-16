#include <stdio.h>
#include <string.h>

void pad(char *s, int length);

void main(void){
    char str[80];

    strcpy(str, "isto é um teste");
    pad(str, 40);
    printf("%d", strlen(str));
}

void pad(char *s, int length){
    int l;
    l = strlen(s);
    while(l<length){
        s[l] = ' ';
        l++;
    }
    s[l] = '\0';
}
