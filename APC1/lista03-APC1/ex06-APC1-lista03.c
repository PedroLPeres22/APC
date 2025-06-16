#include <stdio.h>
#include <string.h>

    char *jogadoresNomes[12], j[20];
    float jogadoresAlturas[12], m;
    int i;

int main(){
    printf("Digite o nome do Jogador seguido da altura em m: ");
    for(i=0;i<12;i++){
        scanf("%s", &jogadoresNomes[i]);
        scanf("%f", &jogadoresAlturas[i]);
    }
    for(i=0;i<12;i++){
        m += jogadoresAlturas[i];
    }
    m/=12;
    printf("A média das alturas desse time é de %.2fm.\n", m);
    printf("Os seguintes jogadores tem alturas acima da média: ");
    for(i=0;i<12;i++){
        if (jogadoresAlturas[i]>m){
            j[0] = jogadoresNomes[i];
            printf("\n%s com %.2f de altura", j, jogadoresAlturas[i]);
        }
    }
    printf("\n");
}