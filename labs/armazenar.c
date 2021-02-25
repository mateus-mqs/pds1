/* Laboratorio Cinco - Atividade 1
 * PDS1 - Turma TM1
 * Nome: Mateus Marques Gonçalves de Paula
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int espaco = 0;
struct cadastro{
    char nome[50];
    int idade;
    float salario;
};

struct cadastro pessoas[4];
void inserir(){
    if(espaco == 4){
        printf("Espaco insuficiente\n");
        return;
    }
    scanf("%s %d %f", pessoas[espaco].nome, &pessoas[espaco].idade, &pessoas[espaco].salario);
    printf("Registro %s %i %.02f inserido\n", pessoas[espaco].nome, pessoas[espaco].idade, pessoas[espaco].salario);
    espaco++;
}

void mostrar(){
    char nome[50];
    scanf("%s", nome);
    for(int i = 0; i < espaco; i++){
        if(strcmp(pessoas[i].nome,nome) == 0){
            printf("Registro %s %i %.02f\n",pessoas[i].nome, pessoas[i].idade, pessoas[i].salario);
            return;
        }
    }
    printf("Registro ausente\n");
}

void main(){
    char entrada[50] = "0";
    while(gets(entrada) != NULL){
        if(strcmp(entrada,"inserir") == 0){inserir();}
        else if (strcmp(entrada,"mostrar") == 0){mostrar();}
        else{}
    }
}