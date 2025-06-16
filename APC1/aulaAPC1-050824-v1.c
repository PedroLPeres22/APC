#include <stdio.h>
#include <unistd.h>

    int i = 1, n;

int main(){

    printf("Digite um número: ");
    scanf("%d", &n);
    while (i<=n){
        printf("%d \n", i);
        i++;
        sleep(1);
    }
}