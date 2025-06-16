#include <stdio.h>

int strtam(char *s, int n);

int main(){
    char str[20];
    printf("Digite uma string: ");
    scanf("%[^\n]s", str);
    printf("%d", strtam(str, 0));
}

int strtam(char *s, int n){
    if(s[n] == '\0'){
        return 0;
    }
    else{
        return 1+strtam(s, n+1);
    }
}