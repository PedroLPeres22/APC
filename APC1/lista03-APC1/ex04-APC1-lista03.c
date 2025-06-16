#include <stdio.h>

    int vt[30], i, mai;

int main(){
    printf("Digite 30 números inteiros: ");
    for(i=0;i<30;i++){
        scanf("%d", &vt[i]);
    }
    mai = vt[0];
    for(i=0;i<30;i++){
        if (vt[i]>mai){
            mai = vt[i];
        }
    }
    printf("O maior número digitado foi: %d\n", mai);
}