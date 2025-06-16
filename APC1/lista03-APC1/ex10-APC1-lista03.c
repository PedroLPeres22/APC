#include <stdio.h>

    int v1[100], i;

int main(){
    for(i=0;i<100;i++){
        v1[i] = 100-i;
    }
    for(i=0;i<100;i++){
        printf("%d ", v1[i]);
    }
    printf("\n");
}