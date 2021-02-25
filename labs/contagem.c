/* Laboratorio Dois - Atividade 3
 * PDS1 - Turma TM1
 * Nome: Mateus Marques Gonçalves de Paula
 */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void main () {
    int x = 233;
    printf("%i\n",x);
    while(x<=457){
        if(x+3 > 457){break;}
        x+=5;
        while(x>300 && x<400){
            printf("%i\n",x); 
            x+=3; 
        }
        printf("%i\n",x);
    }
}