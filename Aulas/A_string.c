#include "stdio.h"

int main(){
    char str[] = "Olá!";
    //vai mostrar o endereco, por causa do %p
    printf("Endereco: %p",str);
    printf("Endereco: %p",str+1);
    printf("Endereco: %p",str+1);

    //vai imprimei o valor, po causa do %c
    printf("Valor do endereco: %c",*(str+0));
    printf("Valor do endereco: %c",*(str+1));
    printf("Valor do endereco: %c",*(str+2));
    printf("Valor do endereco: %c",*(str+3));
    //mostra a string toda
    printf("Valor do endereco: %s",str);

    //muda localmente o sting
    str[0] = 'A';
    str[2] = 'o';//vai virar Alo!
    printf("str: %s\n",str);//mostra a string toda
    //sabe o final da string porque no final toda string tem um \0
    
}