#include <stdio.h>
#include <stdlib.h>

int somaVetor(int *v,int n ){
    if(n <= 0) return 0;
    return v[n -1] + somaVetor(v,n-1);
    

}
/*
int main(){
    int n;
    scanf("%d",&n);
    int *vetor = (int*)malloc(n * sizeof(int));

    for (int i = 0; i < n; i++)
    {
        printf("Valor do vetor %d: ", i+1);
        scanf("%d",&vetor[i]);
    }
    
    int r = somaVetor(vetor, n);
    printf("Soma: %d",r);
    free(vetor);

    return 0;
}
*/