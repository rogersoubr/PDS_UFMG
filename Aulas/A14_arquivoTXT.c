/**
 * Criar arquivo de planilha -> células separadas por vírgula
 * Imprimier média
 * gerar um arquivo com alunos que vão para a especia (menor q 12)
 * Imprimir nome e nota de melhore alune
 * 
 */

 #include <stdio.h>
#include <string.h>
 #define MAXTAM 100

 int main(){
    FILE* arquivo = fopen("notas.csv","r");

    typedef struct Aluno{
        int matricula;
        char* nome;
        float nota1;
        float nota2;
    } Aluno;

    char linha[MAXTAM];

    // fgets(linha, MAXTAM, arquivo);
    // printf("Linha: %s",linha);

    // while(!feof(arquivo)){
    // printf("Linha: %s",linha);

    // fgets(linha,MAXTAM, arquivo);
    // }
    //     while(fgets(linha,MAXTAM,arquivo) != NULL){
    //     printf("Linha: %s",linha);
    // }

    Aluno aluno;

    while(fgets(linha,MAXTAM,arquivo) != NULL){
        aluno.matricula = atoi(strtok(linha,","));
        aluno.nome = atoi(strtok(linha,","));
    }
 }