/* Laboratorio Três - Atividade 4
 * PDS1 - Turma TM1
 * Nome: Mateus Marques Gonçalves de Paula
 */

#include <stdio.h>
#include <stdlib.h>

void main() {
    int a, b;
    scanf("%i",&a);
    int* aeds = malloc(a * sizeof(int));
    for(int i = 0; i < a; i++){
        scanf("%i", &aeds[i]);
    }
    scanf("%i",&b);
    int* calc = (int*)malloc(b * sizeof(int));
    for(int i = 0; i < b; i++){
        scanf("%i", &calc[i]);
    }
    for(int i = 0; i < b; i++){
        for(int j = 0; j < a; j++){
            if(calc[i] == aeds[j]){
                printf("%i\n",calc[i]);
            }
        }
    }
}