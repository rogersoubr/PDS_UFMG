//Roger Souza Brandao  2025108154
/* RODAR O ARQUIVO:
1) Vai para o caminho do arquivo
2) Rode o GCC: gcc NOME_ARQUIVO.c
3) Rode o executável gerado: ./a.exe
*/

#include <stdio.h>
#include <stdlib.h>

int main(){
    int numeros[1000]; 
    int i = 0;
    FILE* arq = fopen("naturais.txt","r+t");

    if(arq == NULL){
        printf("Arquivo nao encontrado");
    };
    printf("[");
    while (!feof(arq)){
        fscanf(arq,"%d",&numeros[i]);
        printf(" %d ",numeros[i]);
        i++;
    }
    printf("]");
    fclose(arq);


    return 0;
}