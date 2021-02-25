/* Laboratorio Dois - Atividade 1
 * PDS1 - Turma TM1
 * Nome: Mateus Marques Gonçalves de Paula
 */

#include <stdio.h>
#include <stdlib.h>

void main () {
    int n, xa, xb, x;
    scanf("%i %i %i", &n, &xb, &xa);
    printf("X0: %i\nX1: %i\n",xb,xa);
    for(int i = 2; i <= n; i++){
        x = 4*xa - 2*xb;
        printf("X%i: %i\n",i,x);
        xb = xa; xa = x;
    }
}