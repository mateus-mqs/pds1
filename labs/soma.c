/* Laboratorio Dois - Atividade 5
 * PDS1 - Turma TM1
 * Nome: Mateus Marques Gonçalves de Paula
 */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void main () {
    int val, soma = 0;
    scanf("%i",&val);
    for(int i = 1; i <= val; i++){
        soma += i;
    }
    printf("%i",soma);
}