/* Laboratorio Seis - Atividade 1
 * PDS1 - Turma TM1
 * Nome: Mateus Marques Gonçalves de Paula
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int conferePrimo(int num) {
    if(num < 2){return -1;}

    for(int i = 2; i < (num/2)+1; i++){
        if(num % i == 0){
            return 0;
        }
    }
    return 1;
}

void main(){
    int num;
    while(scanf("%i",&num) == 1){
        printf("%i\n",conferePrimo(num));
    }
}