/* Laboratorio Três - Atividade 2
 * PDS1 - Turma TM1
 * Nome: Mateus Marques Gonçalves de Paula
 */

#include <stdio.h>

void main() {
    long serie[801];
    serie[0] = 0; serie[1] = 1;
    for(int i = 2; i < 801; i++){
        serie[i] = serie[i-1] + serie[i-2];
    }
    int a = 0;
    while(a >= 0 && a < 800){
        scanf("%i",&a);
        printf("%li\n", serie[a]);
    }
}