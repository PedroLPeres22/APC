#include <stdio.h>

int intercede(int *v1, int *v2, int *v3);

int i, j, k;

int main(){
    int v1[10], v2[10], v3[10];
    printf("\nDigite números para o primeiro vetor: ");
    for(i=0;i<10;i++){
        scanf("%d", &v1[i]);
    }
    printf("\nDigite números para o segundo vetor: ");
    for(i=0;i<10;i++){
        scanf("%d", &v2[i]);
    }
    intercede(v1, v2, v3);
}

int intercede(int *v1, int *v2, int *v3){
    for(i=0;i<10;i++){
        for(j=0;j<10;j++){
            if(v1[i] == v2[j]){
                for(k=0;k<10;k++){
                    if(v1[i] == v3[k]){
                        continue;
                    }
                    else{
                        v3[i] = v1[i];
                    }
                }
            }
        }
    }
    printf("\nInterseçções: [ ");
    for(i=0;i<10;i++){
        if(v3[i] != 0)
            printf("%d ", v3[i]);
    }
    printf("]\n");
}