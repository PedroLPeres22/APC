#include <stdio.h>
#include <stdlib.h>

int main(){
    int n, *p, i;
    printf("\nDigite o tamanho do vetor: ");
    scanf("%d", &n);
    p = (int*)malloc(n*sizeof(int));
    if(!p){
        printf("\nSem memória.");
        exit(1);
    }
    for(i=0;i<n;i++){
        printf("\nDigite o elemento %d do vetor: ", i+1);
        scanf("%d", p+i);
    }
    printf("\n\nVETOR: [");
    for(i=0;i<n;i++){
        printf(" %d", *(p+i));
    }
    printf(" ]\n");
    free(p);    
    return 0;
}