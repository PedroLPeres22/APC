#include <stdio.h>

int main(){
    FILE *ptr;
    unsigned int ogMatricula, ogSala, newMatricula = 0, newSala = 0, i;
    char ogNome[20], newNome[20];
    ptr = fopen("sala.txt", "w");
    printf("Digite o nome: ");
    scanf("%s", ogNome);
    printf("Digite a matrícula: ");
    scanf("%d", &ogMatricula);
    printf("Digite a sala: ");
    scanf("%d", &ogSala);
    fprintf(ptr, "%s %d %d\n", ogNome, ogMatricula, ogSala);
    fclose(ptr);
    ptr = fopen("sala.txt", "r");
    fscanf(ptr, "%s %d %d", newNome, &newMatricula, &newSala);
    fclose(ptr);
    printf("\nLido do arquivo: \nNome: %s, \nMatrícula: %d, \nSala: %d\n", newNome, newMatricula, newSala);
}