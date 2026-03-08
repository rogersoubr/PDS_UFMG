#include <stdio.h>

int main(){
    int max, v;
    float calc;
    printf("Digite a velocidade maxima: ");
    scanf("%d",&max);

    printf("Digite a velocidade que voce estava: ");
    scanf("%d",&v);

    calc = ((v-max)*100)/100;
    if(calc <= 1){
        printf("Sem infracao") ;
    }else if(calc <= 20){
        printf("Infracao Media") ;
    }else if(calc <= 50){
        printf("Infracao Grave") ;
    }else{
        printf("Infracao Gravissima");
    }
    return 0;
}