#include "stdio.h"

char codifica(char c) {
    return (5*c + 100) % 256;
}


int main(){
    char str[] = "Ola!";
    //vai mostrar o endereco, por causa do %p
    printf("Endereco: %p\n",str);
    printf("Endereco: %p\n",str+1);
    printf("Endereco: %p\n",str+1);

    //vai imprimei o valor, po causa do %c
    printf("Valor do endereco: %c\n",*(str+0));
    printf("Valor do endereco: %c\n",*(str+1));
    printf("Valor do endereco: %c\n",*(str+2));
    printf("Valor do endereco: %c\n",*(str+3));
    //mostra a string toda
    printf("Valor do endereco: %s\n",str);

    //muda localmente o sting
    str[0] = 'A';
    str[2] = 'o';//vai virar Alo!
    printf("str: %s\n",str);//mostra a string toda
    //sabe o final da string porque no final toda string tem um \0
    printf("str: %c\n",str);//mostra a string toda


    char msg[200];

    printf("\nDigite a mensagem  : ");
    int i;
    for (i = 0; i < 10; i++) {
        scanf("%c", &msg[i]);
        if (msg[i] == '.') break;
    }
    msg[i] = '\0';
         

    printf("\nMensagem original  : %s\n", msg);

    i = 0;
    char cod[200];
    while (msg[i] != '\0') {
        cod[i] = codifica(msg[i]);
        i++;
    }
    printf("\nMensagem codificada: %s\n", cod);

    msg[0] = 180;
    printf("MSG: %s\n", msg);
    return 0;
};