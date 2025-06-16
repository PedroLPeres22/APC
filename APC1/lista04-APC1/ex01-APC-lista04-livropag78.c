#include <stdio.h>

void sign_on(void){
    char str[20];
    int x;
    for(x=0;x<3 && strcmp(str, "senha");++x){
        printf("digite a senha, por favor: ");
        gets(str);
    }
    if(x==3) return;
    else printf("connected");
}

int main(){
    sign_on();
    return 0;
}