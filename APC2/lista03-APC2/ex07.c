#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_PRODUTOS 100

typedef struct {
    int codigo;
    char nome[50];
    int quantidade;
    float valor;
} Produto;

void cadastrarProduto(Produto *produtos, int *qtdProdutos) {
    printf("Quantos produtos deseja cadastrar? ");
    scanf("%d", qtdProdutos);

    for (int i = 0; i < *qtdProdutos; i++) {
        printf("\nCadastro do produto %d:\n", i + 1);
        printf("Codigo: ");
        scanf("%d", &produtos[i].codigo);
        getchar();
        printf("Nome: ");
        fgets(produtos[i].nome, 50, stdin);
        produtos[i].nome[strcspn(produtos[i].nome, "\n")] = 0; 
        printf("Quantidade: ");
        scanf("%d", &produtos[i].quantidade);
        printf("Valor: ");
        scanf("%f", &produtos[i].valor);
    }
}

void controleEstoque(Produto *produtos, int qtdProdutos) {
    int codigo, quantidade;
    printf("\nControle de estoque");
    printf("\nDigite o código do produto: ");
    scanf("%d", &codigo);

    int encontrado = 0;
    for (int i = 0; i < qtdProdutos; i++) {
        if (produtos[i].codigo == codigo) {
            printf("\nProduto encontrado: %s", produtos[i].nome);
            printf("\nQuantidade em estoque: %d", produtos[i].quantidade);
            printf("\nDigite a quantidade para adicionar/remover: ");
            scanf("%d", &quantidade);
            produtos[i].quantidade += quantidade;
            printf("\nNovo estoque: %d", produtos[i].quantidade);
            encontrado = 1;
            break;
        }
    }

    if (!encontrado) {
        printf("\nProduto não encontrado.\n");
    }
}

void vendaProduto(Produto* produtos, int qtdProdutos, float* rendaMensal) {
    int codigo, quantidade;
    printf("\nVenda de produto");
    printf("\nDigite o código do produto: ");
    scanf("%d", &codigo);

    int encontrado = 0;
    for (int i = 0; i < qtdProdutos; i++) {
        if (produtos[i].codigo == codigo) {
            printf("\nProduto encontrado: %s", produtos[i].nome);
            printf("\nQuantidade em estoque: %d", produtos[i].quantidade);
            printf("\nDigite a quantidade a ser alugada: ");
            scanf("%d", &quantidade);

            if (produtos[i].quantidade >= quantidade) {
                produtos[i].quantidade -= quantidade;
                *rendaMensal += produtos[i].valor * quantidade;
                printf("\nLocação realizada! Total: R$%.2f", produtos[i].valor * quantidade);
            } else {
                printf("\nQuantidade insuficiente em estoque.");
            }
            encontrado = 1;
            break;
        }
    }

    if (!encontrado) {
        printf("\nProduto não encontrado.\n");
    }
}

void mostrarRendaMensal(float rendaMensal) {
    printf("\nRenda mensal: R$%.2f\n", rendaMensal);
}

int main() {
    Produto produtos[MAX_PRODUTOS];
    int qtdProdutos = 0;
    float rendaMensal = 0.0;
    int op;

    do {
        system("clear");
        printf("\n\t- Menu -");
        printf("\n1. Cadastrar Produtos");
        printf("\n2. Controle de Estoque");
        printf("\n3. Realizar Locação");
        printf("\n4. Renda Mensal");
        printf("\n5. Sair");
        printf("\nEscolha uma opção: ");
        scanf("%d", &op);
    }while (op != 5);
    switch (op) {
            case 1:
                cadastrarProduto(produtos, &qtdProdutos);
                break;
            case 2:
                controleEstoque(produtos, qtdProdutos);
                break;
            case 3:
                vendaProduto(produtos, qtdProdutos, &rendaMensal);
                break;
            case 4:
                mostrarRendaMensal(rendaMensal);
                break;
            case 5:
                break;
            default:
                main();

    return 0;
}

}
