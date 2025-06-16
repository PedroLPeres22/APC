#include <stdio.h>

    int i =1, op;

int uaiou(){
    while(i<=50){
        printf("%d ", i);
        i++;
    }
}

int foh(){
    for(i=1; i<=50; i++){
        printf("%d", i);
    }
}

int duUaiou(){
    do{
        printf("%d", i);
        i++;
    }
    while(i<=50);
}

int main(){
    printf("Olá! Digite uma opção: ");
    printf("\n[1] While");
    printf("\n[2] Do... While");
    printf("\n[3] For\n");
    scanf("%d", &op);
    while (op>3 || op<1){
        printf("Opção inválida. Digite outra opção: ");
        scanf("%d", &op);
    }
    switch (op){
        case 1: uaiou();break;
        case 2: duUaiou();break;
        case 3: foh();break;
    }
}
