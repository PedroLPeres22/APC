#include <stdio.h>
#include <stdlib.h>

int soma(int *v1, int *v2);
int uniao(int *v1, int *v2);
int multiplica(int *v1, int *v2);
int divide(int *v1, int *v2);
int intercede(int *v1, int *v2);
int menu(int *x, int *y);

int i, j, k;

int main(){
    int x[10], y[10], cont, temp;
    printf("\nDigite 10 valores para o vetor 1: ");
    for(i=0;i<10;i++){
        scanf("%d", &x[i]);
        temp = x[i];
        cont = 0;
        for(j=0;j<10;j++){
            if(temp == x[j]){
                cont++;
            }
        }
        if(cont>1){
            do{
                printf("\nValor repetido. Digite novamente: ");
                scanf("%d", &x[i]);
            }while(x[i] == temp);
        }
    }
    printf("\nDigite 10 valores para o vetor 2: ");
    for(i=0;i<10;i++){
        scanf("%d", &y[i]);
        temp = y[i];
        cont = 0;
        for(j=0;j<10;j++){
            if(y[i] == y[j]){
                cont++;
            }
        }
        if(cont>1){
            do{
                printf("\nValor repetido. Digite novamente: ");
                scanf("%d", &y[i]);
            }while(y[i] == temp);
        }
    }
    menu(x, y);
}

int menu(int *x, int *y){
    int op;
    do{
        system("clear");
        printf("\n\tOpções");
        printf("\n\t1 - Soma");
        printf("\n\t2 - União");
        printf("\n\t3 - Multiplicação");
        printf("\n\t4 - Divisão");
        printf("\n\t5 - Intercessão");
        printf("\nDigite a opção desejada: ");
        scanf("%d", &op);
    }while(op<1 || op>5);
    switch(op){
        case 1: soma(x,y); return 0;
        case 2: uniao(x,y); return 0;
        case 3: multiplica(x,y); return 0;
        case 4: divide(x,y); return 0;
        case 5: intercede(x, y); return 0;
        default: menu(x,y); return 0;
    }
}

int soma(int *v1, int *v2){
    printf("\nSoma dos valores dos vetores: [ ");
    for(i=0;i<10;i++){
        v1[i] += v2[i];
        printf("%d ", v1[i]);
    }
    printf("]\n");
    return 0;
}

int uniao(int *v1, int *v2){
    printf("\nTodos os elementos dos vetores: [ ");
    for(i=0;i<10;i++){
        printf("%d ", v1[i]);
    }
    for(i=0;i<10;i++){
        for(j=0;j<10;j++){
            if(v2[i] == v1[j]){
                break;
            }
            else{
                printf("%d ", v2[i]);
            }
        }
    }
    printf("]\n");
    return 0;
}

int multiplica(int *v1, int *v2){
    printf("\nMultiplicação dos valores dos vetores: [ ");
    for(i=0;i<10;i++){
        v1[i] *= v2[i];
        printf("%d ", v1[i]);
    }
    printf("]\n");
    return 0;
}

int divide(int *v1, int *v2){
    printf("\nDivisão dos valores dos vetores: [ ");
    for(i=0;i<10;i++){
        v1[i] /= v2[i];
        printf("%d ", v1[i]);
    }
    printf("]\n");
    return 0;
}

int intercede(int *v1, int *v2){
    printf("\nValores em ambos os vetores: [ ");
    for(i=0;i<10;i++){
        for(j=0;j<10;j++){
            if(v1[i] == v2[j]){
                printf("%d ", v1[i]);
            }
        }
    }
}

