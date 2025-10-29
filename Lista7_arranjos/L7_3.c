//Roger Souza Brandao  2025108154
/* RODAR O ARQUIVO:
1) Vai para o caminho do arquivo
2) Rode o GCC: gcc NOME_ARQUIVO.c
3) Rode o executável gerado: ./a.exe
*/
#include <stdio.h>
#include <stdlib.h>


float media(float v[1000], int n){
    float soma =0.0f;
    for (int j = 0; j < n; j++){
        soma+=v[j];
    }
    return soma/n; 
}


float variancia(float v[1000], int n){
    float soma =0.0f;
    for (int m = 0; m < n; m++){
        soma+=(v[m]*v[m]);
    }
    return soma/n; 
}

int main(){
    float array[1000];
    int i = 0;
    FILE* arq = fopen("reais.txt","r+t");
    if(arq == NULL){
        printf("arquivo nao encontrado");
    };
    printf("ORIGINAL = [ ");
    while(!feof(arq)){
        fscanf(arq,"%f",&array[i]);
        printf(" %.2f ", array[i]);
        i++;
    };
    printf(" ]\n");

    float Nmedia = media(array,i);//meida
    printf("MEDIA = %.2f\n", Nmedia);
    
    printf("DESVIO PADRAO = [ ");
    for (int k = 0; k < i; k++){
        array[k]= array[k] - Nmedia;//desvio padrao
        
        printf(" %.2f ", array[k]);
        
    }
    printf(" ]\n");
    float nVariancia = variancia(array,i);
    printf("VARIANCIA = %.2f\n", nVariancia);
    fclose(arq);


    return 0;
}