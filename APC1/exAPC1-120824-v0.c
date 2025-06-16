#include <stdio.h>

    int v1[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10}, v2[10], i;

int main(){
    printf("V1 = ");
    for (i=0; i<10; i++){
        printf("%d ", v1[i]);
    }
    printf("\n");
    for (i=0; i<10; i++){
        scanf("%d", &v2[i]);
    }
    printf("V2 = ");
    for (i=0; i<10; i++){
        printf("%d ", v2[i]);
    }
    printf("\nV1 + V2 = ");
    for (i=0; i<10; i++){
        v2[i] += v1[i];
        printf("%d ", v2[i]);
    }
}