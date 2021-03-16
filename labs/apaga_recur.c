/* Laboratorio Onze - Atividade 4
 * PDS1 - Turma TM1
 * Nome: Mateus Marques Gonçalves de Paula
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void apaga(char *string, char c){
    if(string[0] == 0){
        return;
    }
    if(string[0] == c){
        int i = 0;
        while(string[i] != 0){
            string[i] = string[i+1];
            i++;
        }
        apaga(&string[0], c);
    }
    apaga(&string[1], c);
}

void main(){
    char str[50], chr;
    scanf("%[^\n]%*c",str);
    scanf("%c",&chr);
    apaga(str, chr);
    printf("%s\n", str);
}