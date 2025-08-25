#include <stdio.h>
#include <string.h> //coloca as strings
#include <stdbool.h> //coloca os booleanos

int main()
{
    //inteiro
    int idade;
    idade = 19;
    //flutuante
    float idadeMes; 
    idadeMes = 19.1;
    //caracter
    char genero = 'M';
    char nome[6] = "Roger"; 
    //flutuante maior
    double idadeDia = 19.21;
    //verdade ou falso
    bool vivo = true;


    printf("Idade: %d \n Idade Mes: %f \n Idade Dia: %lf \n Sexo: %c \n Nome: %s \n Esta vivo? %d",idade,idadeMes,idadeDia,genero,nome,vivo);
    //%s mostra string com nome
    //%lf mostra double
}