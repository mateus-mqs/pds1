/* Laboratorio Três - Atividade 5
 * PDS1 - Turma TM1
 * Nome: Mateus Marques Gonçalves de Paula
 */

#include <stdio.h>
#include <stdlib.h>

void main() {
    int a, b;
    scanf("%i",&a); scanf("%i",&b);
    int matriz[a][b]; int oposta[a][b];
    for(int i = 0; i < a; i++){
        for(int j = 0; j < b; j++){
            scanf("%i",&matriz[i][j]);
            oposta[i][j] = -1*matriz[i][j];
        }
    }
    for(int i = 0; i < a; i++){
        for(int j = 0; j < b; j++){
            printf("%i ",oposta[i][j]);
        }
        printf("\n");
    }
}