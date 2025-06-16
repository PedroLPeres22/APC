#include <stdio.h>

int X(int n);

int main(){
    printf("%d", X(7));
}

int X(int n){
    if(n==1 || n==2)
        return n;
    else 
        return X (n-1) + n * X(n-2);
}