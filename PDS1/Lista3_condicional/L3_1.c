#include <stdio.h>

float max(float a, float b, float c){
    if(a>b && a>c) return a;
    if(b>c) return b;
    return c;
}


float min(float a, float b, float c){
    if(a<b && a<c) return a;
    if(b<c) return b;
    return c;
}


int main(){
    float n1, n2, n3, result;
    printf("Digite o primeriro numero: ");
    scanf("%f",&n1);
    printf("Digite o segundo numero: ");
    scanf("%f",&n2);
    printf("Digite o terceiro numero: ");
    scanf("%f",&n3);
    result = max(n1,n2, n3);
    printf("\nMaior numero: %.2f", result);
    result = min(n1,n2,n3);
    printf("\nMenor numero: %.2f", result);    


    return 0;
}

