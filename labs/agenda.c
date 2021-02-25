/* Laboratorio Sete - Atividade 4
 * PDS1 - Turma TM1
 * Nome: Mateus Marques Gonçalves de Paula
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char input[50], str[100], arq[50];
int cont = 0, tam = 0;
FILE *arquivo;

struct pessoa{
    char nome[50];
    int idade;
    char num[20];
};
struct pessoa pessoas[100];
struct pessoa pess;

void conta(){
    arquivo = fopen(arq, "rb");
    while(fread(&pess, sizeof(struct pessoa), 1, arquivo) != 0){
        pessoas[tam] = pess;
        tam++;
    }
    fclose(arquivo);
}

void imprime(){
    arquivo = fopen(arq, "wb");
    for(int i = 0; i < tam; i++){
        fwrite(&pessoas[i], sizeof(struct pessoa), 1, arquivo);
    }
    fclose(arquivo);
}

void exibir(){
    arquivo = fopen(arq, "rb");
    char nome[50];
    scanf("%s",nome);
    while(fread(&pess, sizeof(struct pessoa), 1, arquivo) != 0){
        if(strcmp(pess.nome, nome) == 0){
            printf("Registro %s %i %s exibido\n", pess.nome, pess.idade, pess.num);
            imprime();
            return;
        }
    }
    printf("Registro %s invalido\n", nome);
    fclose(arquivo);
}

void inserir(){
    if(tam >= 100){
        printf("Espaco insuficiente\n");
        return;
    }
    scanf("%s %i %s", pessoas[tam].nome, &pessoas[tam].idade, pessoas[tam].num);
    printf("Registro %s %i %s inserido\n", pessoas[tam].nome, pessoas[tam].idade, pessoas[tam].num);
    arquivo = fopen(arq, "ab");
    fwrite(&pessoas[tam], sizeof(struct pessoa), 1, arquivo);
    fclose(arquivo);
    tam++;
}

void alterar(){
    scanf("%s %i %s",pess.nome, &pess.idade, pess.num);
    for(int i = 0; i < tam; i++){
        if(strcmp(pessoas[i].nome,pess.nome) == 0){
            pessoas[i] = pess;
            printf("Registro %s %i %s alterado\n", pessoas[i].nome, pessoas[i].idade, pessoas[i].num);
            imprime();
            return;
        }
    }
    printf("Registro %s invalido\n", pess.nome);
}

void excluir(){
    char nome[50];
    scanf("%s",nome);
    for(int i = 0; i < tam; i++){
        if(strcmp(pessoas[i].nome,nome) == 0){
            printf("Registro %s %i %s excluido\n", pessoas[i].nome, pessoas[i].idade, pessoas[i].num);
            for(int j = i; j < tam-1; j++){
                pessoas[j] = pessoas[j+1];
            }
            tam--;
            imprime();
            return;
        }
    }
    printf("Registro %s invalido\n",nome);
}

void main(){
    scanf("%s",arq);
    conta();
    while(scanf("%s",input) != EOF){
        if(strcmp(input, "Inserir") == 0){
            inserir();
        } else if (strcmp(input, "Exibir") == 0){
            exibir();
        } else if(strcmp(input, "Excluir") == 0){
            excluir();
        } else if(strcmp(input, "Alterar") == 0){
            alterar();
        }
    }
}