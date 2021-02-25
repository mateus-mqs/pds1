/* Laboratorio Seis - Atividade 3
 * PDS1 - Turma TM1
 * Nome: Mateus Marques Gonçalves de Paula
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int primo(int num) {
    for(unsigned long int i = 2; i < ((num/2)+1); i++){
        if(num % i == 0){
            return 0;
        }
    }
    return 1;
}

unsigned long int somaPrimos(int num){
    unsigned long int soma = 0;
    int elem = 0, i = 2;
    while(elem < num){
        if(primo(i) == 1){
            soma += i; elem++;
        }
        i++;
    }
    return soma;
}

void main(){
    int num;
    while(scanf("%d",&num) != EOF){
        printf("%lu\n",somaPrimos(num));
    }
}