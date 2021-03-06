#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

struct Pessoa {
    char nome[50];
    int idade, numFilhos;
    struct Pessoa *filhos;
};
struct Pessoa *buscaPessoa(struct Pessoa *pessoaAsc, char nomeProcurado[], int nivel, int imprimeNivel){
    struct Pessoa *buscada;
    for(int i = 0; i < pessoaAsc->numFilhos; i++){
        *buscada = pessoaAsc->filhos[i];
        if(strcmp(buscada->nome,nomeProcurado) == 0){ //primeiro verifica se o nome é
            if(imprimeNivel){printf("%i\n",nivel);}
            return buscada;
        }
        buscada = buscaPessoa(&pessoaAsc->filhos[i], nomeProcurado, nivel+1, imprimeNivel);
        if(buscada == NULL){
            continue;
        } else {
            return buscada;
        }
    }
    return NULL;
}

void cadastraPessoa(struct Pessoa *pessoaAsc, char nome[], int idade, char asc[]){
    struct Pessoa *buscada;
    buscada = buscaPessoa(&pessoaAsc, asc, 0, 0);
    buscada->numFilhos++;
    buscada->filhos = realloc(buscada->filhos, buscada->numFilhos * sizeof(struct Pessoa));
    buscada->filhos[buscada->numFilhos - 1].idade = idade;
    strcpy(buscada->filhos[buscada->numFilhos - 1].nome, nome);

}

void main(){
    int n;
    scanf("%i",&n);
    struct Pessoa pessoaMaster;
    scanf("%s %i %s", pessoaMaster.nome, &pessoaMaster.idade);
    pessoaMaster.numFilhos = 0;
    for(int i = 1; i < n; i++){
        struct Pessoa *buscada;
        int idade;
        char nome[50], asc[50];
        scanf("%s %i %s", nome, &idade, asc);
        cadastraPessoa(&pessoaMaster, nome, idade, asc);
    }
}