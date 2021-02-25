/* Laboratorio Dois - Atividade 4
 * PDS1 - Turma TM1
 * Nome: Mateus Marques Gonçalves de Paula
 */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void main () {
    int x, m2, m3, m5, mt = 0;
    scanf("%i",&x);
    m2 = x/2;
    m3 = x/3;
    m5 = x/5;
    for(int i = 1; i <= x; i++){
        if((i % 2 == 0) && (i % 3 == 0) && (i % 5 == 0)){
            mt++;
        }
    }
    printf("Múltiplos de 2: %i\n",m2);
    printf("Múltiplos de 3: %i\n",m3);
    printf("Múltiplos de 5: %i\n",m5);
    printf("Múltiplos de todos: %i",mt);
}