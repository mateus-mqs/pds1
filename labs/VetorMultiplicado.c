/* Laboratorio Nove - Atividade 2
 * PDS1 - Turma TM1
 * Nome: Mateus Marques Gonçalves de Paula
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void multiplica(int vetor[], int n, double v){
    for(int i = 0; i < n; i++){
        vetor[i] *= v;
    }
}

void imprime(int vetor[], int n){
    for(int i = 0; i < n; i++){
        printf("%i ", vetor[i]);
    }
    printf("\n");
}

void main(){
    int n;
    double v;
    scanf("%i",&n);
    int vetor[n];
    for(int i = 0; i < n; i++){
        scanf("%i",&vetor[i]);
    }
    scanf("%lf", &v);
    imprime(vetor, n);
    multiplica(vetor, n, v);
    imprime(vetor, n);
    multiplica(vetor, n, (1/v));
    imprime(vetor, n);
}