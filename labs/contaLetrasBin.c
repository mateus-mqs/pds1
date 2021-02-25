/* Laboratorio Sete - Atividade 2
 * PDS1 - Turma TM1
 * Nome: Mateus Marques Gonçalves de Paula
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void main(){
    int cont = 0;
    char ch, input[50];
    scanf("%s",input);
    FILE *arquivo;
    arquivo = fopen(input, "rb");
    if(arquivo == NULL){
        printf("Erro na abertura do arquivo.\n");
        exit(1);
    }
    while(fread(&ch, 1, 1, arquivo) != 0) {
        if(ch == 'a'){
            cont++;
        }
    }
    printf("%d",cont);
    fclose(arquivo);
}