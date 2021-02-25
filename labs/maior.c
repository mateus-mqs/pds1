/* Laboratorio Um - Atividade 2
 * PDS1 - Turma TM1
 * Nome: Mateus Marques Gonçalves de Paula
 */

#include <stdio.h>

void main() {
    int a, b, c, maior;
    //printf("Entre com o primeiro valor: ");
    //printf("Entre com o segundo valor: ");
    //printf("Entre com o terceiro valor: ");
    scanf("%d %d %d",&a, &b, &c);
    if(a > b){ 
        maior = a; 
    }
    else{
        maior = b;
    }
    if(c > maior){
        maior = c;
    }
    printf("%d",maior);
}