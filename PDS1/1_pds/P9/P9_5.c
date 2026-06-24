#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <limits.h>//ORIGEM DO INT_MAX
#include <math.h>

//pegar o arquivo
//pegar o nome e idade => juntar os pares
// comparar as idades com os nome
#define MAXTAM 100

int main(){


    FILE* arquivo = fopen("case.txt","r");

    int maior = INT_MIN, menor= INT_MAX, passo, i=0;
    char linha[MAXTAM]; 
    char nome[MAXTAM][MAXTAM];
    int idade[MAXTAM];

    char jovem[MAXTAM], idoso[MAXTAM];
    //fscanf = origem, formato, destino
    while (fscanf(arquivo,"%s",&nome[i]) == 1 &&  fscanf(arquivo,"%d",&idade[i]) == 1)
    {
        if(idade[i] > maior){
            maior = idade[i];
            //strcpy= nova string cópia, origem
            strcpy(idoso,nome[i]);
        }


        if(idade[i] < menor){
            menor = idade[i];
            //strcpy= nova string cópia, origem
            strcpy(jovem,nome[i]);
        }
        i++;
    }
    fclose(arquivo);

    printf("%s\n", jovem);
    printf("%s\n",idoso);
  

    return 0;
}