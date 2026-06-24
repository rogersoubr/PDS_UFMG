#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

//garantia do professor: nenhuma linha de arquivo terá mais que 2000 caracteres
#define MAX_TAM_LINHA 2000

typedef struct Aluno {
    char *nome;
    int id;
    float rsg;
}Aluno;


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

char maior(char *str) {
    if (*str == '\0') return 0;
    char m = maior(str + 1);
    return (*str > m) ? *str : m;
}

void transformaStr(char *str) {
    if (*str == '\0') return;
    *str = maior(str);
    transformaStr(str + 1);
}
//QUESTAO 4
Aluno* buscaRSG(char nome_arquivo[]) {
    FILE *fp = fopen(nome_arquivo, "r");
    if (!fp) return NULL;

    Aluno *melhor = NULL;
    int id;
    char nome[1000];
    float rsg;

    while (fscanf(fp, "%d,%[^,],%f\n", &id, nome, &rsg) == 3) {
        if (!melhor || rsg > melhor->rsg) {
            free(melhor);
            melhor = malloc(sizeof(Aluno));
            melhor->id = id;
            melhor->rsg = rsg;
            melhor->nome = malloc(strlen(nome) + 1);
            strcpy(melhor->nome, nome);
        }
    }
    fclose(fp);
    return melhor;
}

//QUESTAP 5
void buscaRisco(char* nome_arquivo) {
    FILE *entrada = fopen(nome_arquivo, "r");
    FILE *saida = fopen("risks.txt", "w");
    if (!entrada || !saida) return;

    int id, ur, pr;
    float tmed, risco;

    while (fscanf(entrada, "%d %d %d %f", &id, &ur, &pr, &tmed) == 4) {
        risco = (tmed / ur) - pr;
        if (risco > 1) {
            fprintf(saida, "%d %.2f\n", id, risco);
        }
    }
    fclose(entrada);
    fclose(saida);
}

int contarAmigos(int **M, int n, int pessoa) {
    int count = 0;
    for (int j = 0; j < n; j++) {
        if (M[pessoa][j] == 1) count++;
    }
    return count;
}

int** geraListaAdjacencias(int **M, int n) {
    int **L = malloc(n * sizeof(int*));
    for (int i = 0; i < n; i++) {
        int numAmigos = contarAmigos(M, n, i);
        L[i] = malloc((numAmigos + 1) * sizeof(int));
        int k = 0;
        for (int j = 0; j < n; j++) {
            if (M[i][j] == 1) {
                L[i][k++] = j;
            }
        }
        L[i][k] = -1;
    }
    return L;
}

// // Para testes
int minha_main(){
        char palavra[100];

    printf("Digite uma palavra: ");
    scanf("%s",&palavra);

    if (ehElfica(&palavra))
        printf("A palavra eh ELfica.\n");
    else
        printf("A palavra nao eh ELfica.\n");

    return 0;
    return -1;
}

