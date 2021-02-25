/* Laboratorio Cinco - Atividade 1
 * PDS1 - Turma TM1
 * Nome: Mateus Marques Gonçalves de Paula
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct cadastro{
    char nome[50];
    float preco;
    char marca[50];
};
struct cadastro produtos[8];

char marca[8][50] = {"0", "0", "0", "0", "0", "0", "0", "0"};
int quantMarca = 0, num = 0;
float media = 0, divi = 0;

void numP(){
    for(int i = 0; i < quantMarca; i++){
        for(int j = 0; j < 8; j++){
            if(strcmp(produtos[j].marca, marca[i]) == 0){num++;}
        }
        printf("%s %i\n",marca[i],num);
        num = 0;
    }
}

void mediaT(){
    for(int i = 0; i < 8; i++){media += produtos[i].preco;}
    printf("media total %.02f\n", media/8);
    media = 0;
}

void mediaM(){
    for(int i = 0; i < quantMarca; i++){
        for(int j = 0; j < 8; j++){
            if(strcmp(produtos[j].marca, marca[i]) == 0){
                media+=produtos[j].preco;
                divi++;
            }
        }
        printf("media %s %.02f\n", marca[i], media/divi);
        media = 0; divi = 0;
    }
}

void main(){
    for(int i = 0; i < 8; i++){
        scanf("%s %s %f", produtos[i].nome, produtos[i].marca, &produtos[i].preco);
        for(int j = 0; j < 8; j++){
            if(strcmp(marca[j], produtos[i].marca) == 0){break;}
            if(j == 7){
                strcpy(marca[quantMarca], produtos[i].marca);
                quantMarca++;
            }
        }
    }
    numP();
    mediaT();
    mediaM();
}