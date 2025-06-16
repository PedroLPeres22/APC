#include <stdio.h>

    float n1, n2, n3;

int main(){
    printf("Digite três números: ");
    scanf("%f%f%f", &n1, &n2, &n3);
    if (n1>n2 && n1>n3){
        if(n2>n3){
            printf("%.2f %.2f %.2f\n", n3, n2, n1);
        }
        else
            printf("%.2f %.2f %.2f\n", n2, n3, n1);
    }
    else if (n2>n1 && n2>n3){
        if (n1>n3){
            printf("%.2f %.2f %.2f\n", n3, n1, n2);
        }
        else
            printf("%.2f %.2f %.2f\n", n1, n3, n2);
    }
    else if (n3>n1 && n3>n2){
        if (n1>n2){
            printf("%.2f %.2f %.2f\n", n2, n1, n3);
        }
        else
            printf("%.2f %.2f %.2f\n", n1, n2, n3);
    }
}