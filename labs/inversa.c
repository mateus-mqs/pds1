/* Laboratorio Três - Atividade 3
 * PDS1 - Turma TM1
 * Nome: Mateus Marques Gonçalves de Paula
 */

#include <stdio.h>

void main() {
    int vetor[10], novo[10];
    for (int i = 0; i < 10; i++){
        scanf("%i",&vetor[i]);
    }
    for(int i = 0; i < 10; i++){
        novo[i] = vetor[9-i];
    }
    for(int i = 0; i < 10; i++){
        printf("%i\n",novo[i]);
    }
}