#include <stdio.h>
#include <stdlib.h>

//função de alucar vetor

void aloca(float** x, int n)// **=>x recebe um endereço de memoria (normal né), mas esse endereço de momória é do v, que é uma referência
//a partir de aí o x vira um ponteiro que faz referência
{
    *x = (float*)malloc(n*sizeof(float));//tem que colocar o * no x
    int i=0;
    for(i=0;i<n; i++) (*x)[i] =0;
}


int main(){
    int n=0;

    scanf("%d",&n);

    if(n>0){
        //float v[n]
        float* v = NULL;
        /*

        v = malloc(n * sizeof(float));//aloca local para o vetor, pq multiplicou os locais de float  
        for(int i=0; i<n;i++){
            v[i] = 0;
        }

        */

        aloca(&v, n);
        for (int i = 0; i < n; i++)
        {
            printf("%.1f",v[i]);
        }
        free(v);
    }
    return 0;
}