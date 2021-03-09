/* Laboratorio Dez - Atividade 2
 * PDS1 - Turma TM1
 * Nome: Mateus Marques Gonçalves de Paula
 */

#include <stdio.h>
#include <stdlib.h>

void leitura(int *vetor, int m){
    for(int i = 0; i < m; i++){
        scanf("%i",&vetor[i]);
    }
}

void main(){
    int n, m;
    scanf("%i",&n);
    scanf("%i",&m);
    int **matriz = (int**)malloc(sizeof(int*) * n);
    for(int i = 0; i < n; i++){
        matriz[i] = (int*)malloc(sizeof(int) * m);
        leitura(matriz[i], m);
    }
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            printf("%i ",matriz[i][j]);
        }
        printf("\n");
    }
    free(matriz);
}