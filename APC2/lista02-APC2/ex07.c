#include <stdio.h>

int ordena(int *v);

int i;

int main(){
    int v[3];
    printf("Digite três valores para o vetor: ");
    scanf("%d%d%d", &v[0], &v[1], &v[2]);
    printf("\nVetor: [ ");
    for(i=0;i<3;i++){
        printf("%d ", v[i]);
    }
    printf("]\n");
    ordena(v);
    printf("\nVetor em ordem crescente: [ ");
    for(i=0;i<3;i++){
        printf("%d ", v[i]);
    }
    printf("]\n");
}
int ordena(int *v){
    int men, mai, med;
    men = v[0];
    mai = v[0];
    med = v[0];
    for(i=0;i<3;i++){
        if(v[i]<men){
            men = v[i];
        }
        else if (v[i]>mai){
            mai = v[i];
        }
        else if (v[i]>mai && v[i]<men){
            med = v[i];
        }
    }
    v[0] = men;
    v[1] = med;
    v[2] = mai;
}