/* Laboratorio Um - Atividade 4
 * PDS1 - Turma TM1
 * Nome: Mateus Marques Gonçalves de Paula
 */

#include <stdio.h>
#include <stdlib.h>


void main (){
    int valor; 
    int ced100 = 0; int ced50 = 0; int ced20 = 0;
    int ced10 = 0; int ced5 = 0; int ced2 = 0; int ced1 = 0;

    //printf("Digite um valor de entrada: ");
    scanf("%i", &valor);
    if(valor >= 100){
        ced100 = valor / 100;
        valor -= ced100 * 100;
    }
    if (valor >= 50){
        ced50 = valor / 50;
        valor -= ced50 * 50;
    }	
    if(valor >= 20){
        ced20 = valor / 20;
        valor -= ced20 * 20;
    }
    if(valor >= 10){
        ced10 = valor / 10;
        valor -= ced10 * 10;
    }	
    if(valor >= 5){
        ced5 = valor / 5;
        valor -= ced5 * 5;
    }
    if(valor >= 2){
        ced2 = valor / 2;
        valor -= ced2 * 2;
    }	
    if(valor >= 1){
        ced1 = valor / 1;
        valor -= ced1 * 1;
    }
    //printf("\nNúmero mínimo de notas para atingir este valor é de:\n");
    printf("100: %i\n50: %i\n20: %i\n10: %i\n5: %i\n2: %i\n1: %i\n",ced100, ced50, ced20, ced10, ced5, ced2, ced1);
}