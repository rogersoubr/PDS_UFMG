//Roger Souza Brandao  2025108154
/* RODAR O ARQUIVO:
1) Vai para o caminho do arquivo
2) Rode o GCC: gcc NOME_ARQUIVO.c
3) Rode o executável gerado: ./a.exe
*/

#include <stdio.h>
#include <stdlib.h>

float media(int v[1000], int n){
    int soma=0;
    for (int j = 0; j < n; j++){
        soma+=v[j];
    }
    return soma/n; 
}


int main(){
    int array[1000];
    int i = 0;
    FILE* arq = fopen("naturais.txt","r+t");
    while(!feof(arq)){
        fscanf(arq,"%d",&array[i]);//todo scanf tem q ter endereço querido
        i++;
    }
    printf("O resultado da media eh: %.2f",media(array,i));
    fclose(arq);

    return 0;
}