#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <limits.h>
#include <math.h>
//ler arquivo
//fazer mdc
//imprimit
/* ENTRADA
156
182
429
26
*/

#define MAXTAM 100

int mdc(int a, int b){

    while (b != 0)
    {
        int resto = a%b;
        a = b;
        b = resto;
    }
    return a;
    
}

int main(){

    FILE*  arquivo = fopen("case.txt","r");

    int calculo;
    int num[4];
    char linha[MAXTAM];
    //for para fora, tem que ler somente 4 
    for (int i = 0; i < 4; i++){
            //fgets = destinho, tamanho, origem
        if(fgets(linha,MAXTAM,arquivo) != NULL ){

            num[i] = atoi(linha);

        }
    }   

  fclose(arquivo);
  /*         3°     2°   1°                                       */
  calculo = mdc(  mdc( mdc( num[0], num[1]) ,num[2]  ), num[3] );

  printf ("Resultado: %d",calculo);

    return 0;
}