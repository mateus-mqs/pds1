/* Laboratorio Dois - Atividade 2
 * PDS1 - Turma TM1
 * Nome: Mateus Marques Gonçalves de Paula
 */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void main () {
    double dif, pi = 0, i = 1, e = 0;
    scanf("%lf",&dif);
    while(fabs(pi - M_PI) >= dif){
        pi += (pow(-1,e))*(4/i);
        i+=2; e++;
    }
    printf("%.0f",e);
}