/* Laboratorio Oito - Atividade 1
 * PDS1 - Turma TM1
 * Nome: Mateus Marques Gonçalves de Paula
 */
#include <stdio.h>
#include <math.h>

void media(double vetor[], int tam, int *i){
    double m = 0, dif;
    for(int j = 0; j < tam; j++){
        m+=vetor[j];
    }
    m /= tam;
    dif = fabs(vetor[0] - m);
    *i = 0;
    for(int j = 1; j < tam; j++){
        if(fabs(vetor[j] - m) <= dif){
            dif = fabs(vetor[j] - m);
            *i = j;
        }
    }
}

void main(){
    int tam, var;
    scanf("%i",&tam);
    double vetor[tam];
    for(int i = 0; i < tam; i++){
        scanf("%lf",&vetor[i]);
    }
    media(vetor, tam, &var);
    printf("%i\n", var);
}