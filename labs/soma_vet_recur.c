/* Laboratorio Onze - Atividade 1
 * PDS1 - Turma TM1
 * Nome: Mateus Marques Gonçalves de Paula
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int soma(int vetor[], int tam){
    int sum = 0;
    if(tam == 1){
        return vetor[0];
    } else {
        sum += vetor[tam-1];
        sum += soma(vetor, tam-1);
        return sum;
    }
}

void main(){
    int n;
    scanf("%i",&n);
    int v[n];
    for(int i = 0; i < n; i++){
        scanf("%i", &v[i]);
    }
    printf("%i\n",soma(v, n));
}