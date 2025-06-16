#include <stdio.h>

int main(){
    char *ptr, v[15] = {" Olá, Mundo! \n"};
    for(ptr = v ; *ptr!='\0'; ptr++){
       printf("%c", *ptr);
    }
    return 0;
}