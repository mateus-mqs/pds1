/* Laboratorio Três - Atividade 5
 * PDS1 - Turma TM1
 * Nome: Mateus Marques Gonçalves de Paula
 */

#include <stdio.h>
#include <stdlib.h>

void main() {
    int a, b, maior = -100000000;
    scanf("%i",&a); scanf("%i",&b);
    int matriz[a][b];
    for(int i = 0; i < a; i++){
        for(int j = 0; j < b; j++){
            scanf("%i",&matriz[a][b]);
            if(maior < matriz[a][b]){
                maior = matriz[a][b];
            }
        }
    }
    printf("%i",maior);
}