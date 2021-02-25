/* Laboratorio Oito - Atividade 2
 * PDS1 - Turma TM1
 * Nome: Mateus Marques Gonçalves de Paula
 */
#include <stdio.h>

void primo(int n, int *p1, int *p2){
    for(int i = 2; i < n; i++){
        for(int j = 2; j < (i/2)+1; j++){
            if(i % j == 0){break;}
            if(j == i/2){*p1 = i;}
        }
    }
    int i = n+1;
    while(*p2 == 0){
        for(int j = 2; j < (i/2)+1; j++){
            if(i % j == 0){break;}
            if(j == i/2){*p2 = i;}
        }
        i++;
    }
}

void main(){
    int num, prim1 = 0, prim2 = 0;
    scanf("%i",&num);
    primo(num, &prim1, &prim2);
    printf("%i %i\n", prim1, prim2);
}