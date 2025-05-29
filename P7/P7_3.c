#include <stdio.h>

int main(){
    int aAEDS1, aCalc = 0;
    int mAEDS1[100];
    int mCalc[100];
    int aux[100];
    printf("Digite a quantidade de alunos em AEDS1: ");
    scanf("%d",&aAEDS1);

    for(int i = 0; i < aAEDS1; i++)
    {
    printf("Digite a matricula do aluno %d em AEDS1: ",i+1);
    scanf("%d",&mAEDS1[i]);
    }
    

    printf("Digite a quantidade de alunos em Calculo 1: ");
    scanf("%d",&aCalc);

    for(int i = 0; i < aCalc; i++)
    {
    printf("Digite a matricula do aluno %d em Calculo 1: ",i+1);
    scanf("%d",&mCalc[i]);
    }

    for(int i=0; i< aAEDS1;i++){

        for (int  j = 0; j < aCalc; j++)
        {
            if(mAEDS1[i] == mCalc[j]){
                aux[i] = mCalc[j];
                printf("\nMatriculado nos dois: %d ",aux[i]);
            }
        }
    }



    return 0;
}