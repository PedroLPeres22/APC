#include <stdio.h>
#define MAX 100

int imprimeUmTresQuatro(int v[]);

int main(){
    int v[MAX], i;
    for(i=0;i<MAX; i++){
        scanf("%d", &v[i]);
        while(v[i]<0){
            if(v[i] == -1){
            return 0;
            }
            else{
            printf("Número inválido, digite outro número: ");
            scanf("%d", &v[i]);
            }
        }
    }
    imprimeUmTresQuatro(&v[0]);
}

int imprimeUmTresQuatro(int v[]){
    int i, um, tres, quatro;
    for(i=0,um=0,tres=0,quatro=0;i<MAX;i++){
        if (v[i]==1){
            um++;
        }
        else if(v[i] == 3){
            tres++;
        }
        else if(v[i] == 4){
            quatro++;
        }
    }
    printf("\nO número 1 aparece %d vezes.", um);
    printf("\nO número 3 aparece %d vezes.", tres);
    printf("\nO número 4 aparece %d vezes", quatro);
}