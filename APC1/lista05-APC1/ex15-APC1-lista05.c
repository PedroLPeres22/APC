#include <stdio.h>

    float n1, n2, n3;

int main(){
    printf("Digite três números: ");
    scanf("%f%f%f", &n1, &n2, &n3);
    if (n1>n2 && n1>n3){
        printf("O maior número digitado é %.2f", n1);
    }
    else if (n2>n1 && n2>n3){
        printf("O maior número digitado é %.2f", n2);
    }
    else if (n3>n1 && n3>n2){
        printf("O maior número digitado é %.2f", n3);
    }
}