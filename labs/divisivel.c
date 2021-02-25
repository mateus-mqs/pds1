/* Laboratorio Um - Atividade 3
 * PDS1 - Turma TM1
 * Nome: Mateus Marques Gonçalves de Paula
 */

#include <stdio.h>

void main() {
    int a, b, c;
    //printf("Entre com o primeiro valor inteiro: ");
    //printf("Entre com o segundo valor inteiro: ");
    //printf("Entre com o terceiro valor inteiro: ");
    scanf("%i %i %i",&a, &b, &c);
    if((a % b == 0) && (a % c == 0)){
        printf("O número é divisível.");
    }
    else{
        printf("O número não é divisível.");
    }
}