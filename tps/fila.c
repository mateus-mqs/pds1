#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

struct Pessoa {
    char nome[50];
    unsigned int idade;
    int comorb;
    struct Pessoa *prox;
};

int condicao(int i1, int i2, int c1, int c2){
    int p[2], i[2], c[2];
    i[0] = i1; i[1] = i2;
    c[0] = c1; c[1] = c2;
    for(int j = 0; j < 2; j++){
        if(i[j] >= 75){
            p[j] = 1;
        } else if(i[j] >= 60 && i[j] < 75 && c[j] == 1){
            p[j] = 2;
        } else if(i[j] >= 60 && i[j] < 75 && c[j] == 0){
            p[j] = 3;
        } else if(i[j] >= 18 && i[j] < 60 && c[j] == 1){
            p[j] = 4;
        } else {
            p[j] = 5;
        }
    }
    if(p[1] < p[0]){
        return 1;
    } else {
        return 0;
    }
}

struct Pessoa *insere(struct Pessoa *verif, struct Pessoa *anterior, char nome[], unsigned int idade, int comorb){
    if (condicao(verif->idade,idade,verif->comorb,comorb)){
        struct Pessoa *new;
        new = malloc(sizeof(struct Pessoa));
        new->comorb = comorb;
        new->idade = idade;
        strcpy(new->nome,nome);
        if(anterior == NULL){ //se o primeiro mudar
            new->prox = verif;
            return new;
        } else {
            new->prox = anterior->prox;
            anterior->prox = new;
        }
    } else if (!condicao(verif->idade,idade,verif->comorb,comorb) && verif->prox == NULL){
        struct Pessoa *new;
        new = malloc(sizeof(struct Pessoa));
        new->comorb = comorb;
        new->idade = idade;
        strcpy(new->nome,nome);
        new->prox = verif->prox;
        verif->prox = new;
    } else {
        insere(verif->prox, verif, nome, idade, comorb);
    }
    return verif;
}

void imprime(struct Pessoa *verif){
    struct Pessoa *aux;
    for(aux = verif; aux != NULL; aux = aux->prox){
        printf("%s / %i / %i\n",aux->nome, aux->idade, aux->comorb);
    }
}

void main(int argc, char *argv[]){
    FILE *arquivo;
    arquivo = fopen(argv[1], "r");
    char linha[100], nome[100];
    unsigned int idade;
    int comorb;
    struct Pessoa head;
    fscanf(arquivo,"%[^;]%*c",head.nome);
    fscanf(arquivo,"%i;%i\n",&head.idade,&head.comorb);
    head.prox = NULL;
    struct Pessoa *prim = &head;
    while(!feof(arquivo)){
        fscanf(arquivo,"%[^;]%*c",nome);
        fscanf(arquivo,"%i;%i\n",&idade,&comorb);
        prim = insere(prim, NULL, nome, idade, comorb);
    }
    imprime(prim);
    fclose(arquivo);
}