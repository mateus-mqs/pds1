/* Laboratorio Quatro - Atividade 2
 * PDS1 - Turma TM1
 * Nome: Mateus Marques Gonçalves de Paula
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void main(){
    char s1[50];
    scanf("%[^\n]%*c",s1);
    int tam = strlen(s1);
    for(int i = 0; i < tam; i++){
        printf("%c",s1[tam-i-1]);
    }
}