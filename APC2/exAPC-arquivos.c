#include <stdio.h>

int main(){
    FILE *ptr;
    ptr = fopen("teste.txt", "a");
    if(ptr == NULL){
        printf("Não foi possível abrir o arquivo.");
    }
    else{
        printf("Arquivo aberto.");
    }
    fprintf(ptr, "\nxiaozhong hao zhong guo xian zai wo yo bin qi lin");
}