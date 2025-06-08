#include <stdio.h>
#include <stdlib.h>//mallo vem dessa lib

void pause(){
    #ifdef WIN32
        system("PAUSE");
    #else
        printf("pres to continue... \n");
    #endif
}

void aloca(int** M, int n, int n){
    int** P = (int**) malloc(n * sizeof(int*));
    for(int i= 0; int<n; i++){
        p[i] = (int**) malloc (m * sizeof(int));//coloca o espaço do maloc no 
        for(int j= 0; j<m; j++){
            p[i][j] = i+j;
        }
    }
    return P;
}

void imprime(){
    printf("Matriz: \n");
    for(int i= 0; int<n; i++){
        fo(int j= 0; j<m; j++){
            printf(" %4d " M[i][j]);
        }
    }
}

int main(){
    int n,m;
    printf("Digite as dimensões da matriz: ");
    scanf("%s %d", &n,&m);
    int** M = NULL;
    M = aloca(n,m);
}