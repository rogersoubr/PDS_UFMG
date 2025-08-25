#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAXTAM 100
//pegar o tamanho da linha
//comparar se ela é a maior


int main(){
    FILE* arquivo = fopen("texto.txt", "r");

    char linha[MAXTAM];
    char maior_linha[MAXTAM];
    int max_tamanho = 0;

        //fgets = destinho, tamanho, origem
    while(fgets(linha, MAXTAM, arquivo) != NULL)//enquanto as linhas não acabaraem
    {
        int tamanho = strlen(linha)-1;//pega o tamanho de caracteres da linha (-1 tira o \0 ou \n)

        if(tamanho > max_tamanho)//se for maior o tamanho que estiver
        {
            max_tamanho = tamanho;//o novo tamanho se atualiza
            strcpy(maior_linha,linha);//nova string gerada da cópia da maior
        }
             
    };

    fclose(arquivo);//fecha o arquivo

    printf("%s \n",maior_linha);
    printf("%d \n",max_tamanho);

    return 0;
}

