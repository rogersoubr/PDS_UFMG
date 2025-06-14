#include <stdlib.h>
#include <stdio.h> //molloc
#include "array.h" //pega as outras funções
//ler n
//alocar a quantidade de n números float
//leia os n números e colocar no array

//retçornar o array

float* read_array(int* n)//função que pode alaterar o valor real, pq recebe o endM
{
    
    scanf("%f",n);

    float *v = (float*)malloc((*n) * sizeof(float));

    for(int i =0; i<*n; i++){
        scanf("%f",&v[i]);
    }
    return v;
    
}

void free_array(float *array){
    free(array);
}