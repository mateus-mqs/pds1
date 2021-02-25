/* Laboratorio Seis - Atividade 1
 * PDS1 - Turma TM1
 * Nome: Mateus Marques Gonçalves de Paula
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int verificaBissexto(int ano){
    if(ano % 400 == 0){
        return 1;
    } else {
        if((ano % 4 == 0) && (ano % 100 != 0)){
            return 1;
        } else {
            return 0;
        }
    }
}

void main(){
    int ano=0;
    while(scanf("%i", &ano) == 1){
        printf("%i\n",verificaBissexto(ano));
    }
}