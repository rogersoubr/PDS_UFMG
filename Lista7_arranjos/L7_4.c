//Roger Souza Brandao  2025108154
/* RODAR O ARQUIVO:
1) Vai para o caminho do arquivo
2) Rode o GCC: gcc NOME_ARQUIVO.c
3) Rode o executável gerado: ./a.exe
*/
#include <stdio.h>
#include <stdlib.h>//mallo vem dessa lib

float maior(float v[1000],int n){
    float Nmaior = v[0];
    for (int i = 0; i < n; i++){
        if(v[i]>Nmaior){
            Nmaior = v[i];
        };
    };
    return Nmaior;
    
}

int main(){
    float array[1000];
    float num =1;
    int i = 0;
    printf("Digite o numero 0 para parar de enviar\n");
    while (num != 0){
        printf("Digite um numero real: ");
        scanf("%f",&num);
        if (num == 0) break;
        array[i] = num;
        i++;
    }

    printf("MAIR NUMERO DIGITADO: %.2f",maior(array,i));
    
    


    return 0;
}