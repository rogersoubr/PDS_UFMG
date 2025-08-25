#include <stdio.h>
#include <stdlib.h>

/*
1 2
3 4
5 6
entrada: (n=3, m=2)
*/

void **alocaMatriz(int n, int m){
    int **M = (int**)malloc(n*sizeof(int*));//alocando local, que o int vai ser um apontador
    for (int i = 0; i < n; i++)
    {
        M[i] = (int*)malloc(m * sizeof(int));
    }
    return M;
}

void liberaMatriz(int **M, int n, int m){
    for (int i = 0; i < n; i++)
    {
        free(M[i]);
    }
    free(M);
}

int main(){
    int n=0, m=0;
    int **M = NULL;//uma var que aponta por um matriz alocada na memória

    scanf("%d %d",&n,&m);
    /*
        M = (int**)malloc(n*sizeof(int*));//alocando local, que o int vai ser um apontador
        for (int i = 0; i < n; i++)
        {
            M[i] = (int*)malloc(m * sizeof(int));
        }
    
        for (int i = 0; i < n; i++)
        {
            free(M[i]);
        }
        free(M);
    */

    return 0;
}