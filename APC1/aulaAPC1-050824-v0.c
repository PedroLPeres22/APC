#include <stdio.h>
#include <unistd.h>

    int i, n;

int main(){
    printf("Digite um número:");
    scanf("%d", &n);
    for (i = 1; i <= n; i++){
        printf("%d \n", i);
        sleep(1);
    }
}