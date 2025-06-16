#include <stdio.h>

int main(){
    FILE *ptr;
    int i;
    char nome[20];
    ptr = fopen("nomes.txt", "w");
    for(i=0;i<5;i++){
        printf("\nDigite o nome: ");
        scanf("%s", nome);
        fprintf(ptr, "%s\n", nome);
    }
}