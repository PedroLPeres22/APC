#include <stdio.h>

    int v1[51], i;

int main(){
    for(i=0;i<51;i++){
        v1[i] = i;
    }
    for(i=0;i<51;i++){
        printf("%d ", v1[i]);
    }
    printf("\n");
}