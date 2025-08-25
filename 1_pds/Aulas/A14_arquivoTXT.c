/**
 *  (1) Imprimir média das notas
 *  (2) Gerar um arquivo com alunos que vão para a especial ( < 12)
 *  (3) Imprimir nome e nota da(o) melhor aluna(o)
 */

#include <stdio.h>
#include <stdlib.h>//origem do atoi
#include <string.h>
#define MAXTAM 100

int main() {
    
    FILE* arquivo  = fopen("notas.csv", "r");
    FILE* especial = fopen("especial.csv", "w");    

    typedef struct Aluno {
        int matricula;
        char* nome;
        float nota1;
        float nota2;
    } Aluno;
    
    char linha[MAXTAM];
    /*
    fgets(linha, MAXTAM, arquivo);
    while (!feof(arquivo)) {
        printf("Linha: %s", linha);
        fgets(linha, MAXTAM, arquivo);
    }*/
    
    float soma1 = 0;
    float soma2 = 0;
    int     qtd = 0;
    Aluno aluno;

    float maiorNota = 0;
    char melhorAluno[MAXTAM];

    while (fgets(linha, MAXTAM, arquivo) != NULL) //enquanto não acabar o arquivo
    {
        aluno.matricula = atoi(strtok(linha, ","));//atoi com i converte string para inteiro
        aluno.nome      =      strtok(NULL , ",") ;
        aluno.nota1     = atof(strtok(NULL , ","));
        aluno.nota2     = atof(strtok(NULL , ","));
        qtd++;
        soma1 += aluno.nota1;
        soma2 += aluno.nota2;
        printf("[%3d] %-15s: N1 = %4.1f, N2 = %4.1f, Total = %4.1f\n", aluno.matricula,
              aluno.nome, aluno.nota1, aluno.nota2, aluno.nota1 + aluno.nota2);
        if (aluno.nota1 + aluno.nota2 < 12) {
            fprintf(especial, "%d,%s,%.1f,%.1f\n", aluno.matricula, aluno.nome, aluno.nota1, aluno.nota2);
        }

        if (aluno.nota1 + aluno.nota2 > maiorNota) {
            maiorNota = aluno.nota1 + aluno.nota2;
            strcpy(melhorAluno, aluno.nome);
            /*int i = 0;
            while (1) {
                if (aluno.nome[i] == '\0') break;    
                melhorAluno[i] = aluno.nome[i];
                i++;
            }*/
        }
    }
    
    printf("\n");    
    printf("Média da P1: %4.1f, Média da P2: %4.1f, Média total: %4.1f\n",
            soma1/qtd, soma2/qtd, (soma1+soma2)/qtd);
    
    printf("Maior nota foi da(o) aluna(o) %s com nota %4.1f\n", melhorAluno, maiorNota);
    
    fclose(arquivo);
    fclose(especial);

   return 0;
}