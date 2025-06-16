#include <stdio.h>

    int v1[10], i, j = 1;

int main(){
    for(i=0;i<10;i++){
        v1[i] = j;
        j+=2;
        printf("%d ", v1[i]);
    }
    printf("\n");
}