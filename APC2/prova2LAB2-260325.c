#include <stdio.h>
#include <stdlib.h>

void readVetor(int vA[], int vB[], int nA, int nB);
void recordVetor(int vA[], int vB[], int nA, int nB, FILE *f);
void scanFile(FILE *f, FILE *f2, int nA, int nB);
void veriFile(FILE *f);
void printCabecalho();


void readVetor(int vA[], int vB[], int nA, int nB){
    int i;
    printf("\nEntrada Vetor 1:");
    for (int i = 0; i < nA; i++){
        scanf("%d", &vA[i]);
    }
    printf("\nEntrada Vetor 2:");
    for (int i = 0; i < nB; i++){
        scanf("%d", &vB[i]);
    }
}

void recordVetor(int vA[], int vB[], int nA, int nB, FILE *f){
    if(f == NULL){
        printf("Erro ao gravar no arquivo.\n");
        exit(1);
    }
    for (int i = 0; i < nA; i++){
        fprintf(f, "%d ", vA[i]);
    }
    fprintf(f, "\n");
    for (int i = 0; i < nB; i++){
        fprintf(f, "%d ", vB[i]);
    }
    fprintf(f, "\n");
    printf("\nValores armazenados com sucesso no arquivo Dados.txt");
    fclose(f);
}

void scanFile(FILE *f, FILE *f2, int nA, int nB) {
    int i, j;
    f = fopen("Dados.txt", "r");
    veriFile(f);
    int vetA[nA];
    for (i = 0; i < nA; i++) {
        fscanf(f, "%d", &vetA[i]);
    }
    int vetB[nB];
    for (i = 0; i < nB; i++) {
        fscanf(f, "%d", &vetB[i]);
    }
    printf("\nValores lidos com sucesso do arquivo Dados.txt");
    printf("\nVerificando os elementos repetidos...\n");
    for (i = 0; i < nA; i++) {
        for (j = 0; j < nB; j++) {
            if (vetA[i] == vetB[j]) {
                fprintf(f2, "%d ", vetA[i]);
            }
        }
    }
    printf("\nValores repetidos armazenados com sucesso no arquivo Repetidos.txt\n");
    fclose(f);
    fclose(f2);
    f2 = fopen("Repetidos.txt", "r");
    veriFile(f2);
    printf("\nValores repetidos: ");
    int valor;
    while (fscanf(f2, "%d", &valor) != EOF) {
        printf("%d ", valor);
    }
    printf("\n\n");
    fclose(f2);
}

void veriFile(FILE *f){
    if(f == NULL){
        printf("Erro ao abrir o arquivo.\n");
        exit(1);
    }
}

void printCabecalho(){
    printf("Prova de LAB 2 - Exercício de Alocação Dinâmica e Manipulação de Arquivos\n");
    printf("Aluno: Pedro Leonardo Soares da Silva de Oliveira Peres");
}


int main(){
    int na, nb;
    FILE *v, *r;
    v = fopen("Dados.txt", "w");
    veriFile(v);
    r = fopen("Repetidos.txt", "w");
    veriFile(r);
    printCabecalho();
    printf("\n\nQuantos elementos tem o vetor A?\n");
    scanf("%d", &na);
    printf("\nQuantos elementos tem o vetor B?\n");
    scanf("%d", &nb);
    int *vetA = (int *)malloc(na * sizeof(int));
    int *vetB = (int *)malloc(nb * sizeof(int));
    if (vetA == NULL || vetB == NULL) {
        printf("Erro ao alocar memória.\n");
        return 1;
    }
    readVetor(vetA, vetB, na, nb);
    recordVetor(vetA, vetB, na, nb, v);
    scanFile(v, r, na, nb);
    free(vetA);
    free(vetB);
}

