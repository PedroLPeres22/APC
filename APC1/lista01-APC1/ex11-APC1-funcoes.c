#include <stdio.h>

float maiorNum(float a, float b, float c);

int main(){
    float x, y, z;
    printf("Digite três números: ");
    scanf("%f%f%f", &x, &y, &z);
    printf("\nO maior número digitado é: %.2f\n", maiorNum(x, y, z));
}

float maiorNum(float a, float b, float c){
    if(a>b && a>c){
        return a;
    }
    else if(b>a && b>c){
        return b;
    }
    else{
        return c;
    }
}