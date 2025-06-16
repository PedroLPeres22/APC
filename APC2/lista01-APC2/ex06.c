#include <stdio.h>
#include <stdlib.h>

int i;

int menu(float *v);
int imprime(int op, float *v);

int main(){
    float vt[10];
    printf("Digite 10 valores para o vetor: ");
    for(i=0;i<10;i++){
        scanf("%f", &vt[i]);
    }
    menu(vt);
}

int menu(float *v){
    int opc;
    do{
        system("clear");
        printf("\n\tMENU");
        printf("\n\tOPÇÕES");
        printf("\n\t0 - SAIR DO PROGRAMA");
        printf("\n\t1 - IMPRIMIR VETOR");
        printf("\n\t2 - IMPRIMIR REVERSO");
        printf("\nDigite uma opção: ");
        scanf("%d", &opc);
        if(opc<0 || opc>2){
            printf("\nOpção inválida, tente novamente. ");
        }
    }while(opc<0 || opc>2);
    switch(opc){
        case 0: return 0;
        case 1: imprime(1, v);
        case 2: imprime(2, v);
    }
}

int imprime(int op, float *v){
    printf("\nVetor: [ ");
    if(op == 1){
        for(i=0;i<10;i++){
            printf("%.2f ", v[i]);
        }
    }
    else if(op==2){
        for(i=9;i>=0;i--){
            printf("%.2f ", v[i]);
        }
    }
    printf(" ]\n");
}