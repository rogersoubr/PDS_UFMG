#include <stdio.h>

int main(){ 
    int idade, temp;
    char gen;
    printf("Digite sua idade: ");
    scanf("%d",&idade);

    printf("Digite seu tempo de contribuicao de carteira assinada em anos: ");
    scanf("%d",&temp);

    printf("Coloque seu Genero | M para masculino e F para Feminino: ");
    scanf(" %c", &gen);
    //comparar string e com '', nao use ""
    if(gen == 'M'){
        if(idade >= 60 && temp >= 35){
            printf("Pode aposentar");
        }else if(idade >= 65){
            printf("Pode aposentar");
        }else{
            printf("Nao pode aposentar");
        }
    } else if(gen == 'F'){
        //e = &&
        if(idade >= 55 && temp >= 30){
            printf("Pode aposentar");
        }else if(idade >= 60){
            printf("Pode aposentar");
        }else{
            printf("Nao pode aposentar");
        }
    }else{
        printf("Digite M para masculino e F para Feminino");
    }
    return 0;
}