#include <stdio.h>

    int numCorredor[10], i, Corredor1, Corredor2;
    float tempCorredor[10], dist, tempCorredor1, tempCorredor2, ritmoCorredor1, ritmoCorredor2;

int main(){
    printf("Digite o número do corredor e seu tempo na corrida (em minutos): ");
    for (i=0;i<10;i++){
        scanf("%d", &numCorredor[i]);
        scanf("%f", &tempCorredor[i]);
    }
    printf("Digite a distância da corrida (em KM): ");
    scanf("%f", &dist);
    tempCorredor1 = tempCorredor[0];
    for (i=0;i<10;i++){
        if(tempCorredor[i]<tempCorredor1){
            tempCorredor1 = tempCorredor[i];
            Corredor1 = numCorredor[i];
            ritmoCorredor1 = tempCorredor[i]/dist;
        }
    }
    tempCorredor2 = tempCorredor[0];
    for(i=0;i<10;i++){
        if(tempCorredor[i]>tempCorredor1 && tempCorredor[i]<tempCorredor2){
                tempCorredor2 = tempCorredor[i];
                Corredor2 = numCorredor[i];
                ritmoCorredor2 = tempCorredor[i]/dist;
            }
    }
    printf("1⁰ LUGAR: Corredor N⁰%d || Tempo: %.2fmin || Ritmo: %.2fmin/km\n", Corredor1, tempCorredor1, ritmoCorredor1);
    printf("2⁰ LUGAR: Corredor N⁰%d || Tempo: %.2fmin || Ritmo: %.2fmin/km\n", Corredor2, tempCorredor2, ritmoCorredor2);
}