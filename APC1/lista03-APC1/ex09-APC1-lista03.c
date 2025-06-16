#include <stdio.h>

    int v1[98], i, j = 1;

int main(){
    for(i=0;i<98;i++){
        v1[i] = j+1;
        j++;
    }
    for(i=0;i<98;i++){
        printf("%d ", v1[i]);
    }
    printf("\n");
}