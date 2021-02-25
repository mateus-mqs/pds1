/* Laboratorio Seis - Atividade 1
 * PDS1 - Turma TM1
 * Nome: Mateus Marques Gonçalves de Paula
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int verificaBissexto(int ano){
    if(ano % 400 == 0){return 1;}
    else {
        if((ano % 4 == 0) && (ano % 100 != 0)){return 1;}
        else {return 0;}
    }
}

int contDias(int d, int m, int a){
    int dAtual = 17,mAtual = 9,aAtual = 2020, dias = 0;
    dias = 1;
    while((d != dAtual) || (m != mAtual) || (a != aAtual)){
        d++;
        if (((m == 1) || (m == 3) || (m == 5) || (m == 7) || (m == 8) || (m == 10) || (m == 12)) && (d == 32)){
           d = 0; m++;
        } else if (((m == 4) || (m == 6) || (m == 9) || (m == 11)) && (d == 31)){
            d = 0; m++;
        } else if ((m == 2) && (verificaBissexto(a)) && (d == 30)){
            d = 0; m++;
        } else if ((m == 2) && (!verificaBissexto(a)) && (d == 29)){
            d = 0; m++;
        } else {
            dias++;
        }
        if(m == 13){
            a++; m = 1; d = 0;
        }
    }
    return dias;
}

void main(){
    char entrada[100];
    while(gets(entrada) != NULL){
        char * dia = strtok(entrada, " ");
        char * mes = strtok(NULL, " ");
        char * ano = strtok(NULL, " ");
        printf("%i\n",contDias(atoi(dia), atoi(mes), atoi(ano)));
    }
}
/*
void main(){
    int dia= 0, mes=0, ano=0;
    while(scanf("%d %d %d", &dia, &mes, &ano) != EOF){
        printf("%i\n",1);
    }
}
*/