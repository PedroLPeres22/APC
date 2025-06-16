#include <stdio.h>
main(){
    int num;
    printf("Olá, alunos. Sejam bem-vindos! \n Digite um número: ");
    scanf("%d", &num);
    printf("O valor digitado foi: %d %d %p %e", num, &num, &num, &num);
}
