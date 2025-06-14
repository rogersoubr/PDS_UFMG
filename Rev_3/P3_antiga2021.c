#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

//garantia do professor: nenhuma linha de arquivo terá mais que 2000 caracteres
#define MAX_TAM_LINHA 2000

// typedef struct Aluno {
//     char *nome;
//     int id;
//     float rsg;
// }Aluno;


int ePalindromo(int num){
    char str[50];
    //sprintf, lê e converte => destino, formato, origem  
    sprintf(str, "%d", num);
    int tam = strlen(str);//tamanho de números

    if(tam <= 1) return 1;//não tem como ser diferentes

    if(str[0] != str[tam-1]) return 0;//compara o primeiro é diferente da 

    char novaStr[50];
    strncpy(novaStr, str+1, tam-2);
    novaStr[tam-2] = '\0';

    int novoNum;
    sscanf(novaStr, "%d", &novoNum);
}

int verificaLetras(char *str, int temE, int temL, int temF) {
    if (*str == '\0') {
        return (temE && temL && temF);
    }
    if (*str == 'e') temE = 1;
    if (*str == 'l') temL = 1;
    if (*str == 'f') temF = 1;
    return verificaLetras(str + 1, temE, temL, temF);
}

int ehElfica(char *str) {
    return verificaLetras(str, 0, 0, 0);
}

// void transformaStr(char *str) {
//     //Questao 3
// }

// Aluno* buscaRSG(char nome_arquivo[]) {
//     //Questao 4
//     return NULL;
// }

// void buscaRisco(char* nome_arquivo) {
//     //Questao 5
// }

// int ** geraListaAdjacencias(int **M, int n) {
//     //Questao 6
//     return NULL;
// }

// // Para testes
// int minha_main()
// {
//     return -1;
// }

int main(){

    char palavra[100];

    printf("Digite uma palavra: ");
    scanf("%s",&palavra);

    if (ehElfica(&palavra))
        printf("A palavra eh ELfica.\n");
    else
        printf("A palavra nao eh ELfica.\n");

    return 0;
}