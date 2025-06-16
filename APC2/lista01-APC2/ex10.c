#include <stdio.h>

int busca(int (*mat)[3]);

int i, j;

int main(){
    int atletas[10][3];
    printf("\nDigite o número, altura e peso dos atletas: ");
    for(i=0;i<10;i++){
        for(j=0;j<3;j++){
            scanf("%d", &atletas[i][j]);
        }
    }
    busca(atletas);
}

int busca(int (*mat)[3]){
    int menAlt, maiAlt, menPes, maiPes, 
        posAltMai, posPesMai, posAltMen, posPesMen;

    menAlt = mat[0][0];
    maiAlt = mat[0][0];
    menPes = mat[0][0];
    maiPes = mat[0][0];
    for(i=0;i<10;i++){
        if(mat[i][2] > maiPes){
            maiPes = mat[i][2];
            posPesMai = i;
        }
        else if(mat[i][2] < menPes){
            menPes = mat[i][2];
            posPesMen = i;
        }
    }
    for(i=0;i<10;i++){
        if(mat[i][1] > maiAlt){
            maiAlt = mat[i][1];
            posAltMai = i;
        }
        else if(mat[i][1] < menAlt){
            menAlt = mat[i][1];
            posAltMen = i;
        }
    }
    printf("\nMaior Peso: %d\tNúmero do Atleta: %d", mat[posPesMai][2], mat[posPesMai][0]);
    printf("\nMenor Peso: %d\tNúmero do Atleta: %d", mat[posPesMen][2], mat[posPesMen][0]);
    printf("\nMaior Altura: %d\tNúmero do Atleta: %d", mat[posAltMai][1], mat[posAltMai][0]);
    printf("\nMenor Altura: %d\tNúmero do Atleta: %d", mat[posAltMen][1], mat[posAltMen][0]);
}