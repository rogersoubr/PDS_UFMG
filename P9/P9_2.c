#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <math.h>
//ler arquivo
//colocar variáveis de inicio passo e limite
//iniciar for com i+passo
//comco comi = comeco
//até fim
//entrada:
/*
50
100
10
*/

#define MAXTAM 100

int main(){

    FILE* arquivo = fopen("case.txt", "r");

    int comeco, fim, passo, f, k;
    //fscanf = origem, formato, destino
    fscanf(arquivo,"%d",&comeco);//fscanf pode ser usado aqui pq quemos 1 digitável por linha
    fscanf(arquivo,"%d",&fim);
    fscanf(arquivo,"%d",&passo);

    fclose(arquivo);//pode liberar o arquivo pq já pegamos as var
    
    for (int i = comeco; i <= fim; i+=passo)//comeca do 50, entquanto não vhegar no fim, vai dando mais um passo
    {
        f = i*(9/5)+32;
        k = i+273;
        printf("%d %d %d\n",i,f,k);
    }

    return 0;
}