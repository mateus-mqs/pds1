/* Laboratorio Sete - Atividade 2
 * PDS1 - Turma TM1
 * Nome: Mateus Marques Gonçalves de Paula
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void main(){
    long long int m[5][5][2];
    char ch, str[1000], input[50], num[50];
    int i = 0, j = 0, k = 0, cont = 0;
    scanf("%s",input);
    FILE *arquivo;
    arquivo = fopen(input, "rb");
    while(fread(&ch, sizeof(char), 1, arquivo) != 0){
        str[cont] = ch;
        cont++;
    }
    cont = 0;
    for(int w = 0; w < strlen(str); w++){
        if(str[w] >= 48 && str[w] <= 57){
            num[cont] = str[w];
            cont++;}
        else if(str[w] == 10 && str[w+1] == 10){continue;}
        else {
            m[i][j][k] = atoll(num);
            cont = 0;
            j++;
            for(int w = 0; w < 50; w++){num[w] = 0;}
        }
        if(j > 4){j = 0; i++;}
        if(i > 4){k++; i = 0; j = 0;}
        if(k == 2){break;}
    }
    for(i = 0; i < 5; i++){
        for(j = 0; j < 5; j++){printf("%lld ",m[i][j][0] + m[i][j][1]);}
        printf("\n");
    }
    fclose(arquivo);
}