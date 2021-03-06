/* Laboratorio Nove - Atividade 1
 * PDS1 - Turma TM1
 * Nome: Mateus Marques Gonçalves de Paula
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

enum Meses {Janeiro = 1, Fevereiro, Marco, Abril, Maio, Junho, Julho, Agosto, Setembro, Outubro, Novembro, Dezembro};

struct Data {
    int ano, dia;
    enum Meses mes;
};

struct Evento{
    char nome[100], local[100];
    struct Data data; 
};

void cadastrar_eventos(struct Evento agenda[], int n){
    for (int i=0; i < n; i++){
        scanf("%s", agenda[i].nome);
        scanf("%s", agenda[i].local);
        scanf("%i %i %i", &agenda[i].data.dia, &agenda[i].data.mes, &agenda[i].data.ano);
    }
}

void imprimir_eventos(struct Evento agenda[], struct Data d, int n){
    int cont = 0;
    for (int i=0; i < n; i++){
        if((agenda[i].data.dia == d.dia) && (agenda[i].data.mes == d.mes) && (agenda[i].data.ano == d.ano)){
            printf("%s %s\n",agenda[i].nome, agenda[i].local);
            cont++;
        }
    }
    if(cont == 0){printf("Nenhum evento encontrado!\n");}
}

void main(){
    int n;
    struct Data d;
    scanf("%i",&n);
    struct Evento agenda[n];
    cadastrar_eventos(agenda, n);
    scanf("%i %i %i", &d.dia, &d.mes, &d.ano);
    imprimir_eventos(agenda, d, n);
}