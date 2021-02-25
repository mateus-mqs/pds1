/* Laboratorio Quatro - Atividade 4
 * PDS1 - Turma TM1
 * Nome: Mateus Marques Gonçalves de Paula
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void main(){
    char s1[50],s2[50];
    scanf("%[^\n]%*c %[^\n]%*c",s1,s2);
    if(strstr(s1,s2) == NULL){
        printf("Não é substring");
    } else {
        printf("É substring");
    }
}