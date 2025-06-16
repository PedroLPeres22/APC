#include <stdio.h>

int num[10][10];

int main(){
    int j;
    scanf("%d", &j);
    pr_row(j);
}

void pr_row(int j){
    int *p, t;
    p = &num[j][0];
    for(t=0;t<10;++t) printf("%d ", *(p+t));
}

//Programa 2
/*void pr_row(int j, int row_dimension, int *p){
    int t;
    p = p+(j*row_dimension);
    for(t=0; t<row_dimension; ++t)
        printf("%d", *(p+t));
}*/