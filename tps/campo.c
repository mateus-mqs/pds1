#include <stdio.h>
#include <stdlib.h>

int tam, quant, jog, cont = 0, x, y, livres, plays = 0, perdeu = 0, bomba = 0;
char campo[100][100];

void criaCampo(int tam){
    for(int i = 0; i < tam; i++){
        for(int j = 0; j < tam; j++){
            do{
                scanf("%c",&campo[i][j]);
            } while(campo[i][j] != 'b' && campo[i][j] != 'x');
            if(campo[i][j] == 'b'){livres--;}
        }
    }
}

void eliminaRedor(int x, int y){
    for(int i = -1; i < 2; i++){
        if(x+i < 0 || x+i >= tam){continue;}
        for(int j = -1; j < 2; j++){
            if(y+j < 0 || y+j >= tam){continue;}
            if(campo[x+i][y+j] == 'b'){bomba = 1;}
        }
    }
    if(bomba == 0){
        for(int i = -1; i < 2; i++){
            if(x+i < 0 || x+i >= tam){continue;}
            for(int j = -1; j < 2; j++){
                if(y+j < 0 || y+j >= tam){continue;}
                if(campo[x+i][y+j] == 'x'){
                    campo[x+i][y+j] = 'o';
                    livres--;
                }
            }
        }
    }else{
        campo[x][y] = 'o';
        livres--;
    }
}

void main(){
    scanf("%i",&quant);
    while(plays != quant){
        scanf("%i",&tam);
        livres = tam*tam;
        criaCampo(tam);
        scanf("%i",&jog);
        cont = 0; perdeu = 0;
        while(cont < jog){
            scanf("%i %i",&x,&y);
            if(campo[x][y] == 'b'){perdeu = 1;}
            else {eliminaRedor(x,y);}
            cont++; bomba = 0;
        }
        if(perdeu == 1){printf("PERDEU\n");}
        else if((cont == jog) && (livres == 0)){printf("GANHOU\n");}
        else{printf("FALTOU TERMINAR\n");}
        plays++;
    }
}