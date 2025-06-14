//pegar palavras separadas por #
#include <string.h>
#include <stdlib.h>
#include <stdio.h>
#define MAXTAM 200

int main(){

    char* palavra;
    char linha[MAXTAM];

    FILE* arquivo = fopen("twets.txt", "r");

    while (fgets(linha, MAXTAM, arquivo) != NULL){

        palavra = strtok(linha, " ");

        while (palavra != NULL )
        {
            if(palavra[0] == '#'){
                printf(" %s ", palavra);
            } 
            palavra = strtok(NULL," ");
        }
        
    }
    fclose(arquivo);

    return 0;
}