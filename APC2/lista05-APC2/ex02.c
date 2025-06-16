#include <stdio.h>

typedef struct passageiro{
    int id;
    int voo;
}passageiro;

typedef struct voo{
    int num;
    int lugares;
}voo;

int registrarpassageiros(passageiro v[], voo v2[], int n);
int registrarvoos(voo v[]);
int checarvoo(int n, voo v[]);
int imprimirpassageiros(passageiro v[], int n);
int i;

int main(){
    voo avioes[30];
    int num;
    registrarvoos(avioes);
    printf("\nDigite o número de passageiros que serão cadastrados: ");
    scanf("%d", &num);
    passageiro pessoas[num+1];
    pessoas[num+1].id = 9999;
    registrarpassageiros(pessoas,avioes,num+1);
    imprimirpassageiros(pessoas, num);
}

int registrarvoos(voo v[]){
    for(i=0;i<30;i++){
        printf("\nDigite o número do voo: ");
        scanf("%d", v[i].num);
        printf("\nDigite a quantidade de lugares disponíveis: ");
        scanf("%d", v[i].lugares);
    }
}

int registrarpassageiros(passageiro v[], voo v2[], int n){
    int numv;
    system("clear");
    for(i=0;i<n;i++){
        do{
            printf("\nDigite o número do voo do passageiro %d: ", i+1);
            scanf("%d", &numv);
            do{
                printf("\nO voo digitado está cheio.");
                printf("\nDigite outro número: ");
            }while(checarvoo(numv, v2));
            v[i].voo = numv;
            printf("\nDigite a identidade do passageiro: ");
            scanf("%d", &v[i].id);
        }while(v[i].id != 9999);
        printf("\nFIM DO REGISTRO");
        system("pause");
        return 0;
    }
}

int checarvoo(int n, voo v[]){
    for(i=0;i<30;i++){
        if(n == v[i].num){
            if(!(v[i].lugares)){
                return 1;
                break;
            }
        }
    }
    return 0;
}

int imprimirpassageiros(passageiro v[], int n){
    for(i=0;i<n;i++){
        printf("\n\tPassageiro %d | Voo %d", v[i].id, v[i].voo);
    }
}