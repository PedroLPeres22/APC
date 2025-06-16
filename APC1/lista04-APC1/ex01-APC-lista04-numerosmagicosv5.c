#include <stdio.h>
#include <stdlib.h>

void main(void){
    int magic, guess;
    magic = rand();
    printf("Adivinhe o número mágico: ");
    scanf("%d", &guess);
    if(guess==magic){
        printf("**certo**");
        printf("%d é o número mágico", magic);
    }
    else
        guess > magic ? printf("Alto") : printf("Baixo");
}
