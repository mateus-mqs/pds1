/* Laboratorio Onze - Atividade 3
 * PDS1 - Turma TM1
 * Nome: Mateus Marques Gonçalves de Paula
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int conta(char string[], char c){
    if(string[0] == 0){
        return 0;
    }
    if(string[0] == c){
        return (1 + conta(++string, c));
    }
    return conta(++string, c);
}

void main(){
    char str[50], chr;
    scanf("%[^\n]%*c",str);
    scanf("%c",&chr);
    printf("%i\n", conta(str, chr));
}