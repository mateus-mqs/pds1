/* Laboratorio Quatro - Atividade 3
 * PDS1 - Turma TM1
 * Nome: Mateus Marques Gonçalves de Paula
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void main(){
    char s1[50];
    char c1, c2;
    scanf("%[^\n]%*c",s1);
    scanf("%c %c",&c1,&c2);
    int tam = strlen(s1);
    for(int i = 0; i < tam; i++){
        if(s1[i] == c1){
            s1[i] = c2;
            break;
        }
    }
    for(int i = 0; i < tam; i++){
        printf("%c",s1[i]);
    }
}