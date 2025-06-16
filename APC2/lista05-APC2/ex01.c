#include <stdio.h>

struct temp{
    int tempmax;
    int tempmin;
    int tempreg;
    float tempmed;
}temperaturas[30];

int main(){
    int i, contmen = 0, contmai = 0, menortemp, maiortemp, tempmedtot;
    printf("\tDigite as temperaturas de cada dia:\n");
    for(i=0;i<30;i++){
        printf("Temperatura Máxima do Dia %d: ",i+1);
        scanf("%d", &temperaturas[i].tempmax);
        printf("Temperatura Mínima do Dia %d: ", i+1);
        scanf("%d", &temperaturas[i].tempmin);
        printf("Temperatura Registrada no Dia %d: ", i+1);
        scanf("%d", &temperaturas[i].tempreg);
        temperaturas[i].tempmed = (temperaturas[i].tempmax+temperaturas[i].tempmin)/2;
    }
    menortemp = temperaturas[0].tempreg;
    maiortemp = temperaturas[0].tempreg;
    for(i=0;i<121;i++){
        if(temperaturas[i].tempreg > maiortemp){
            maiortemp = temperaturas[i].tempreg;
        }
        if(temperaturas[i].tempreg < menortemp){
            menortemp = temperaturas[i].tempreg;
        }
        if(temperaturas[i].tempreg > temperaturas[i].tempmed){
            contmai++;
        }
        if(temperaturas[i].tempreg < temperaturas[i].tempmed){
            contmen++;
        }
        tempmedtot += temperaturas[i].tempmed;
    }
    tempmedtot = tempmedtot/121;
    printf("Dias em que a temperatura foi maior que a média: %d dias", contmai);
    printf("Dias em que a temperatura foi menor que a média: %d dias", contmen);
    printf("Média da temperatura: %d graus Celsius", tempmedtot);
    printf("Maior temperatura registrada: %d graus Celsius", maiortemp);
    printf("Menor temperatura registrada: %d graus Celsius", menortemp);
}