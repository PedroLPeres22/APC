#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
#define CLASSES 3
#define GRADES 30

int grade[CLASSES][GRADES];

void enter_grades(void);
int get_grade(int num);
void disp_gradess(int g[][GRADES]);

void main(void){
    char ch, str[80];
    for(;;){
        do{
            printf("(D)igitar notas\n");
            printf("(M)ostrar notas\n");
            printf("(S)air\n");
            gets(str);
            ch = toupper(*str);
        }while(ch!='D' && ch!='M' && ch!='S');
        switch(ch){
            case 'D': enter_grades(); break;
            case 'M': disp_grades(grade); break;
            case 'S': exit(0);
        }
    }
}

void enter_grades(void){
    int t, i;
    for(t=0;t<CLASSES;t++){
        printf("Turma #%d:\n", t+1);
        for(i=0;i<GRADES;++i){
            grade[t][i] = get_grade(i);
        }
    }
}

get_grade(int num){
    char s[80];
    printf("Digite a nota do aluno #%d:\n", num+1);
    gets(s);
    return(atoi(s));
}

void disp_grades(int g[][GRADES]){
    int t, i;
    for(t=0;t<CLASSES;++t){
        printf("Turma #%d:\n", t+1);
        for(i=0;i<GRADES;++i){
            printf("Aluno #%d é %d\n", i+1, g[t][i]);
        }
    }
}