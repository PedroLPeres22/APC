#include <stdio.h>

int pot(int x, int y);

int main(){
    int x, y;
    printf("Digite o número da base e o expoente: ");
    scanf("%d%d", &x, &y);
    printf("%d ", pot(x, y));
}

int pot(int x, int y){
    if(y == 0){
        return 1;
    }
    else{
        return x*pot(x, y-1);
    }
}