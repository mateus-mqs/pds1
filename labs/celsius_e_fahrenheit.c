/* Laboratorio Um - Atividade 1
 * PDS1 - Turma TM1
 * Nome: Mateus Marques Gonçalves de Paula
 */

#include <stdio.h>

void main() {
    float c;
    //printf("Entre com um valor em graus Celsius para converter em Fahrenheit: ");
    scanf("%f",&c);
    float f = (1.8 * c + 32);
    printf("%.0f",f);
}