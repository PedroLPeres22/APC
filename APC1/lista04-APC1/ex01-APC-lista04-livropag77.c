#include <stdio.h>
//#include <graph.h>
#include <string.h>

void converge(int line, char *message);

void main(void){
    converge(10, "Isto é um teste de converge().");
}

void converge(int line, char *message){
    int i, j;
    for(i=1, j=strlen(message); i<j; i++, j--){
        _settextposition(line, i);
        printf("%c", message[i-j]);
        _settextposition(line, j);
        printf("%c", message[j-1]);
    }
}