/* Laboratorio Três - Atividade 1
 * PDS1 - Turma TM1
 * Nome: Mateus Marques Gonçalves de Paula
 */

#include <stdio.h>

void main() {
    int a, b, cont = 0;
    int j = 1;
    scanf("%i %i",&a, &b);
    for(int i = 1+a; i < b; i++){
        for(int j = 1; j < i; j++){
            if(i % j == 0){
                cont++;
            }
        }
        if (cont == 1){
            printf("%i\n",i);
        }
        cont = 0;
    }
}