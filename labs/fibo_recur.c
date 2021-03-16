/* Laboratorio Onze - Atividade 2
 * PDS1 - Turma TM1
 * Nome: Mateus Marques Gonçalves de Paula
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int fibo(int num){
    if (num <= 0){
        return 0;
    } else if (num == 1){
        return 1;
    } else {
        return fibo(num-1) + fibo(num-2);
    }
}

void main(){
    int n;
    scanf("%i",&n);
    printf("%i\n",fibo(n));
}