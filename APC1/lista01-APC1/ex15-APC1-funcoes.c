#include <stdio.h>

float areaCirc(float r);

int main(){
    float r;
    printf("Digite o raio da circunferência: ");
    scanf("%f", &r);
    printf("A área da circunferência é de %.2f u.a.", areaCirc(r));
}

float areaCirc(float r){
    return (r*r)*3.14;
}