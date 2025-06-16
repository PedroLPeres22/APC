#include <stdio.h>
#include <stdlib.h>

#define MAX_MERCADORIAS 100

typedef struct {
    int codigo;
    char nome[50];
    int quantidade;
} mercadoria;

void inicializaestoque(mercadoria estoque[], int *n) {
    *n = 0;
    printf("Informe o número de mercadorias no estoque: ");
    scanf("%d", n);
    if (*n > MAX_MERCADORIAS) {
        *n = MAX_MERCADORIAS;
        printf("Número máximo de mercadorias atingido.\n");
    }
    for (int i = 0; i < *n; i++) {
        printf("Informe o código da mercadoria %d: ", i+1);
        scanf("%d", &estoque[i].codigo);
        printf("Informe o nome da mercadoria %d: ", i+1);
        scanf(" %[^\n]", estoque[i].nome);
        printf("Informe a quantidade em estoque da mercadoria %d: ", i+1);
        scanf("%d", &estoque[i].quantidade);
    }
}

void listaestoque(mercadoria estoque[], int n) {
    printf("\nEstoque atual:\n");
    for (int i = 0; i < n; i++) {
        printf("Código: %d, Nome: %s, Quantidade: %d\n", estoque[i].codigo, estoque[i].nome, estoque[i].quantidade);
    }
}

int buscamercadoria(mercadoria estoque[], int n, int codigo) {
    for (int i = 0; i < n; i++) {
        if (estoque[i].codigo == codigo) {
            return i;
        }
    }
    return -1;
}

int main() {
    mercadoria estoque[MAX_MERCADORIAS];
    int n, codigo, quantidade, indice, numeroCliente;
    inicializaestoque(estoque, &n);
    while (1) {
        printf("\nInforme o número do cliente: ");
        scanf("%d", &numeroCliente);
        if (numeroCliente == 9999) {
            break;
        }
        printf("Informe o código da mercadoria que deseja: ");
        scanf("%d", &codigo);
        printf("Informe a quantidade desejada: ");
        scanf("%d", &quantidade);
        indice = buscamercadoria(estoque, n, codigo);
        if (indice != -1) {
            if (estoque[indice].quantidade >= quantidade) {
                estoque[indice].quantidade -= quantidade;
                printf("Pedido atendido. Quantidade atual de %s: %d\n", estoque[indice].nome, estoque[indice].quantidade);
            } else {
                printf("Cliente %d: Não há estoque suficiente para %s.\n", numeroCliente, estoque[indice].nome);
                printf("Quantidade disponível: %d\n", estoque[indice].quantidade);
            }
        } else {
            printf("Mercadoria não encontrada.\n");
        }
    }
    listaestoque(estoque, n);
    return 0;
}
