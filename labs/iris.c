/* Laboratorio Nove - Atividade 3
 * PDS1 - Turma TM1
 * Nome: Mateus Marques Gonçalves de Paula
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

struct Iris {
    double compSep;
    double largSep;
    double compPet;
    double largPet;
    char tipo[50];
};

void classificar(struct Iris nId, struct Iris v[], int n){
    double dist, menor = 1000.0;
    int idx;
    for(int i = 0; i < n; i++){
        dist = 0;
        dist += pow((v[i].compSep - nId.compSep),2);
        dist += pow((v[i].largSep - nId.largSep),2);
        dist += pow((v[i].compPet - nId.compPet),2);
        dist += pow((v[i].largPet - nId.largPet),2);
        dist = sqrt(dist);
        printf("%lf\n",dist);
        if(dist < menor){idx = i; menor = dist;}
    }
    printf("%s\n",v[idx].tipo);
}

void main(){
    int n;
    scanf("%i",&n);
    struct Iris v[n], nId;
    for(int i = 0; i < n; i++){
        scanf("%lf %lf %lf %lf %s", &v[i].compSep, &v[i].largSep, &v[i].compPet, &v[i].largPet, v[i].tipo);
    }
    scanf("%lf %lf %lf %lf", &nId.compSep, &nId.largSep, &nId.compPet, &nId.largPet);
    classificar(nId, v, n);
}