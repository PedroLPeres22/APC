#include <stdio.h>

    int v1[50], i, j = 0;

int main(){
    for(i=1;i<=100;i++){
        if(i%2 == 0){
            v1[j] = i;
            j++;
        }
    }
    for(i=0;i<50;i++){
        printf("%d ", v1[i]);
    }
}