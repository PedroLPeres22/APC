#include <stdio.h>
#include <string.h>

char palindromo(char *s);

int main(){
    char str[100];
    printf("\nDigite uma string: ");
    scanf("%s", str);
    palindromo(str);
}

char palindromo(char *s){
    int i;
    printf("\nString ao contrário: ");
    for(i=strlen(s)-1;i>=0;i--){
        printf("%c", s[i]);
    }
    printf("\n");
}