#include <stdio.h>
#include <unistd.h>

    int vet[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10}, i=0;
    char pal[3];

int main(){
    printf("Escreva uma palavra: ");
    scanf("%s", &pal);
    while (i<=10){
        printf("%d ", &pal[i]);
        printf("%c\n", pal[i]);
        //printf("Posição %d: %d\n", i, vet[i]);
        i++;
        sleep(1);
    }
}