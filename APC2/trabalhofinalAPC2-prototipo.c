#include <stdio.h>

#ifdef _WIN32
    #define limpar "cls"
#else
    #define limpar "clear"
#endif
#define vet 100

void fileCreate(FILE *f);
void fileLoader(FILE *f);
void fileAdd(FILE *f, aluno aln);
void mainMenu();

typedef struct aluno{
    char nome[vet];
    char email[vet];
    char sit;
    int matricula;
    float nota1;
    float nota2;
    float nota3;
    float media;
}aluno;

char fileName[vet];

int main(){
    mainMenu();
    return 0;
}

void mainMenu(){
    int op;
    FILE *f;
    aluno a;
    do{
        system(limpar);
        printf("\t\tSisCIA\n");
        printf("\tArquivo carregado: ");
        printf("\t1 - Criar Arquivo\n");
        printf("\t2 - Carregar Arquivo\n");
        printf("\t3 - Cadastrar Aluno\n");
        printf("Digite a opção desejada: ");
        scanf("%d", &op);
        switch(op){
            case 1:
                fileCreate(f);
                break;
            case 2:
                fileLoader(f);
                break;
            case 3:
                fileAdd(f, a);
                break;
            default:
                printf("Opção inválida\n");
                break;
        }
    }while(op < 1 || op > 3);
}

void fileCreate(FILE *f){
    system(limpar);
    printf("\t\tCriador de Arquivos\n");
    printf("\nDigite o nome do arquivo a ser criado: ");
    char nomeArquivo[vet];
    scanf("%s", nomeArquivo);
    // Verifica se o arquivo existe
    if ((f = fopen(nomeArquivo, "r")) != NULL) {
        fclose(f);
        char op;
        printf("Arquivo já existe. Deseja sobrescrever? (s/n): ");
        scanf(" %c", &op);
        if (op != 's' && op != 'S') {
            printf("Operação cancelada\n");
            printf("\n\nPressione qualquer tecla para voltar ao menu.");
            fflush(stdin); // Limpa o buffer de entrada
            getchar(); // Para esperar o usuário pressionar uma tecla
            return;
        }
    }
    f = fopen(nomeArquivo, "w");
    if(f == NULL){
        printf("Erro ao criar arquivo\n");
    }else{
        printf("Arquivo criado com sucesso\n");
    }
    fclose(f);
    printf("\n\nPressione qualquer tecla para voltar ao menu.");
    fflush(stdin); // Limpa o buffer de entrada
    getchar(); // Para esperar o usuário pressionar uma tecla
}

void fileLoader(FILE *f){
    system(limpar);
    printf("\t\tCarregador de Arquivos\n");
    printf("\nDigite o nome do arquivo a ser carregado: ");
    char nomeArquivo[vet];
    scanf("%s", nomeArquivo);
    f = fopen(nomeArquivo, "r");
    if(f == NULL){
        char op;
        printf("\nArquivo não encontrado. Deseja criar um novo arquivo com esse nome? (s/n): ");
        scanf(" %c", &op);
        if (op == 's' || op == 'S') {
            fileCreate(f);
        } else {
            printf("Operação cancelada\n");
        }
    }else{
        printf("Arquivo aberto com sucesso\n");
        fclose(f);
    }
    printf("\n\nPressione qualquer tecla para voltar ao menu.");
    fflush(stdin); // Limpa o buffer de entrada
    getchar(); // Para esperar o usuário pressionar uma tecla antes de voltar ao menu
}


