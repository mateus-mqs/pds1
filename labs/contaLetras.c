/* Laboratorio Sete - Atividade 1
 * PDS1 - Turma TM1
 * Nome: Mateus Marques Gonçalves de Paula
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void main(int argc, char *argv[]){
    int cont = 0;
    FILE *arquivo;
    arquivo = fopen(argv[1], "r");
    char ch = getc(arquivo);
    while ((ch != EOF)) {
        if(ch == 'a'){
            cont++;
        }
        ch = getc(arquivo);
    }
    printf("%d",cont);
    fclose(arquivo);
}