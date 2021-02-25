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
    char rua[50];
    int numero;
    char estado[50];
};

struct cadastro pessoas[5];

void inserir(){
    if(espaco == 5){
        printf("Espaco insuficiente\n");
        return;
    }
    scanf("%s %d %f %s %d %s", pessoas[espaco].nome, &pessoas[espaco].idade, &pessoas[espaco].salario, pessoas[espaco].rua, &pessoas[espaco].numero, pessoas[espaco].estado);
    printf("Registro %s %i %.02f %s %i %s inserido\n", pessoas[espaco].nome, pessoas[espaco].idade, pessoas[espaco].salario, pessoas[espaco].rua, pessoas[espaco].numero, pessoas[espaco].estado);
    espaco++;
}

void mostrar(){
    char nome[50];
    scanf("%s", nome);
    for(int i = 0; i < espaco; i++){
        if(strcmp(pessoas[i].nome,nome) == 0){
            printf("Registro %s %i %.02f %s %i %s\n", pessoas[i].nome, pessoas[i].idade, pessoas[i].salario, pessoas[i].rua, pessoas[i].numero, pessoas[i].estado);
            return;
        }
    }
    printf("Registro ausente\n");
}

void alterar(){
    char nome[50], rua[50], estado[50];
    int idade, numero;
    float salario;
    scanf("%s %d %f %s %d %s", nome, &idade, &salario, rua, &numero, estado);
    for(int i = 0; i < espaco; i++){
        if(strcmp(pessoas[i].nome,nome) == 0){
            strcpy(pessoas[i].nome,nome); strcpy(pessoas[i].rua,rua); strcpy(pessoas[i].estado,estado);
            pessoas[i].idade = idade; pessoas[i].numero = numero; pessoas[i].salario = salario;
            printf("Registro %s %i %.02f %s %i %s alterado\n", nome, idade, salario, rua, numero, estado);
            return;
        }
    }
    printf("Registro ausente para alteracao\n");
}

void main(){
    char entrada[50] = "abobora";
    while(gets(entrada) != NULL){
        if(strcmp(entrada,"inserir") == 0){inserir();}
        else if (strcmp(entrada,"mostrar") == 0){mostrar();}
        else if (strcmp(entrada,"alterar") == 0){alterar();}
        else{}
    }
}