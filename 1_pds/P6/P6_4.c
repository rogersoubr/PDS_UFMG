#include <stdio.h>
#include <string.h>

int main() {
    
    char str[51],aux[51];
    int tamanhoZero, tamanhoReal, i=0;

    fgets(str,51,stdin);
    tamanhoZero = strlen(str);//pega o tamanho da var

    printf("%d tamanho com o zero: \n",tamanhoZero);

    tamanhoReal = tamanhoZero-1;//tira o \0
    printf("%d tamanho sem 0: \n",tamanhoReal);


    for(i = 0; i<tamanhoZero;i++, tamanhoReal--){
        aux[i] = str[tamanhoReal];
        //tamanhoReal = tamanhoReal--;// vai estourar erro
        //printf("String: %c talvez\n",str[i]); 
    }
    aux[i] = '\0';
    printf("Ponto i: %d\n",aux[i]);

    printf("String invertida: %s",aux);
    

    return 0;
}