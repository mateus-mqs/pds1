/* Laboratorio Dez - Atividade 3
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
    int *v1, *v2, *v3;
    v1 = (int *)malloc(sizeof(int) * n);
    v2 = (int *)malloc(sizeof(int) * n);
    v3 = (int *)malloc(sizeof(int) * n);
    leitura(v1, n);
    leitura(v2, n);
    for(int i = 0; i < n; i++){
        v3[i] = v1[i] + v2[i];
        printf("%i\n",v3[i]);
    }
    free(v1); free(v2); free(v3);
}