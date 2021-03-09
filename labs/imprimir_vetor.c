/* Laboratorio Dez - Atividade 1
 * PDS1 - Turma TM1
 * Nome: Mateus Marques Gonçalves de Paula
 */

#include <stdio.h>
#include <stdlib.h>

void leitura(int *vetor, int n){
    for(int i = 0; i < n; i++){
        scanf("%i",&vetor[i]);
    }
}

void main(){
    int n;
    scanf("%i",&n);
    int *vetor;
    vetor = (int *)malloc(sizeof(int) * n);
    leitura(vetor, n);
    for(int i = 0; i < n; i++){
        printf("%i\n",vetor[i]);
    }
    free(vetor);
}