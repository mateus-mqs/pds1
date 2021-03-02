#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct funcionario{
    char nome[100];
    float salario;
    char data[100];
    char departamento[100];
};
struct funcionario funcionarios[1000];
int quantFunc;
char linha[100];

void printaFunc(struct funcionario func){
    printf("%s\n",func.nome);
    printf("%.2f\n",func.salario);
    printf("%s\n",func.data);
    printf("%s\n",func.departamento);
}

void coletaDados(char in[100]){
    FILE *arquivo;
    arquivo = fopen(in, "r");
    fscanf(arquivo,"%d",&quantFunc);
    fgets(linha,100,arquivo);
    for(int i = 0; i < quantFunc; i++){
        fgets(linha,100,arquivo); if(linha[strlen(linha)-1] == 10){linha[strlen(linha)-1] = 0;}
        strcpy(funcionarios[i].nome, linha);
        fgets(linha,100,arquivo);funcionarios[i].salario = atof(linha);
        fgets(linha,100,arquivo); if(linha[strlen(linha)-1] == 10){linha[strlen(linha)-1] = 0;} 
        strcpy(funcionarios[i].data, linha);
        fgets(linha,100,arquivo); if(linha[strlen(linha)-1] == 10){linha[strlen(linha)-1] = 0;}
        strcpy(funcionarios[i].departamento, linha);
    }
    fclose(arquivo);
}

void ordenaNome(){
    struct funcionario x; struct funcionario aux;
    int j;
    for(int i = 1; i < quantFunc; i++){
        x = funcionarios[i]; j = i-1;
        while(strcmp(x.nome, funcionarios[j].nome) < 0){
           aux = funcionarios[j];
           funcionarios[j] = x;
           funcionarios[j+1] = aux;
           j--; 
        }
    }
}

void exporta(char out[100]){
    FILE *arquivo;
    arquivo = fopen(out, "w");
    for(int i = 0; i < quantFunc; i++){
        fprintf(arquivo, "%s\n",funcionarios[i].nome);
        fprintf(arquivo, "%.2f\n",funcionarios[i].salario);
        fprintf(arquivo, "%s\n",funcionarios[i].data);
        fprintf(arquivo, "%s\n",funcionarios[i].departamento);
    }
    fclose(arquivo);
}

void listarD(char dep[50]){
    for(int i = 0; i < quantFunc; i++){
        if(strcmp(funcionarios[i].departamento,dep) == 0){
            printaFunc(funcionarios[i]);
        }
    }
}

int antigoData(char d1[10], char d2[10]){
    int datas[2][3];
    char d[2][11], aux[4]; 
    strcpy(d[0],d1); strcpy(d[1],d2);
    for(int i = 0; i < 2; i++){
        aux[0] = d[i][0]; aux[1] = d[i][1]; aux[2] = 0; aux[3] = 0;
        datas[i][0] = atoi(aux);
        aux[0] = d[i][3]; aux[1] = d[i][4]; aux[2] = 0; aux[3] = 0;
        datas[i][1] = atoi(aux);
        aux[0] = d[i][6]; aux[1] = d[i][7]; aux[2] = d[i][8]; aux[3] = d[i][9];
        datas[i][2] = atoi(aux);
    }
    if(datas[0][2] < datas[1][2]){return 1;}
    else if(datas[0][2] > datas[1][2]){return 0;}
    if(datas[0][1] < datas[1][1]){return 1;}
    else if(datas[0][1] > datas[1][1]){return 0;}
    if(datas[0][0] < datas[1][0]){return 1;}
    return 0;
}

void maisAntigo(){
    struct funcionario antigo;
    antigo = funcionarios[0];
    for(int i = 1; i < quantFunc; i++){
        if(antigoData(funcionarios[i].data, antigo.data)){
            antigo = funcionarios[i];
        }
    }
    printaFunc(antigo);
}

void maisAntigoD(char dep[100]){
    struct funcionario antigo;
    strcpy(antigo.data,"99/99/9999");
    for(int i = 0; i < quantFunc; i++){
        if(antigoData(funcionarios[i].data, antigo.data) && (strcmp(funcionarios[i].departamento,dep) == 0)){
            antigo = funcionarios[i];
        }
    }
    printaFunc(antigo);
}

void media(){
    double media = 0;
    for(int i = 0; i < quantFunc; i++){
        media += funcionarios[i].salario;
    }
    printf("%.2lf",media/quantFunc);
}

void mediaD(char dep[100]){
    double media = 0;
    int cont = 0;
    for(int i = 0; i < quantFunc; i++){
        if(strcmp(funcionarios[i].departamento, dep) == 0){
            media += funcionarios[i].salario; cont++;
        }
    }
    printf("%.2lf",media/cont);
}

void main(int argc, char *argv[]){
    coletaDados(argv[1]);
    ordenaNome();
    if (strcmp(argv[2],"1") == 0){exporta(argv[3]);}
    else if (strcmp(argv[2],"2") == 0){listarD(argv[3]);}
    else if (strcmp(argv[2],"3") == 0){maisAntigo();}
    else if (strcmp(argv[2],"4") == 0){maisAntigoD(argv[3]);}
    else if (strcmp(argv[2],"5") == 0){media();}
    else if (strcmp(argv[2],"6") == 0){mediaD(argv[3]);}
}