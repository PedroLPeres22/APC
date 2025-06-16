#include <stdio.h>
#include <stdlib.h>

void main(void){
    int magic, guess;
    magic=rand();
    printf("adivinhe o número mágico: ");
    scanf("%d", &guess);
    if(guess==magic){
        printf("**certo**");
        printf("%d é o número mágico\n", magic);
    }
    else{
        printf("Errado, ");
        if(guess>magic) printf("muito alto\n");
        else printf("muito baixo\n");
    }
}