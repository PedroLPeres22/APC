#include <stdio.h>

    int v1[10], i, j = 1;

int main(){
    for(i=0;i<10;i++){
        v1[i] = 5*j;
        j++;
        printf("%d ", v1[i]);
    }
}