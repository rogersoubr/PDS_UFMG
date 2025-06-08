#include <stdio.h>
//*x =>Aponta para x, mostra valor da tabela ascII de x

//&x => Endereço da variável de x

//

int main(){
    int x = 10;
    int* p = &x;
    // *p é um ponteiro para int
    //&x pega o endereço de memória
    //p recebe o local de local de memória

    //MOSTRANDO POSICAO NA MEMORIA:
    printf("MOSTRANDO POSICAO NA MEMORIA: %p\n",&x);

    //SE VOCE TEM SO O LOCAL DE MOMORIA:
    printf("CONTEUDO DO LOCAL DE MEMORIA: %d\n", *p);//mostra 10, se tirar o * e formatar para %p, mostra a memória de x



    printf(" \nPARTE 2- OFFSET\n ");

    int arr[] = {10,20,30};//cria array

    int *y = arr;//o y vai apontar para o arr[0](aceita que é a sintaxe)

    printf("MOSTRA SEGUNDO ELEMENTON DO ARRAY: %d\n", *(y+1));//ADICIONOU 1, VAI PARA O SEGUNDO 

    printf("MOSTRA PRIMEIRO ELEMENTON DO ARRAY + 1: %d\n", *y+1);//ADICIONOU 1 DENTRO DO [0] 



    printf(" \nPARTE 3\n ");

    char letraA = 'A';
    char letraB = 34;
    char *j = &letraA;

    //ponteiro só recebem um enderelo de memória. Teste tirando e colcando o & 
    char *k = &letraB;


    printf("%c\n",*j);
    printf("VALOR ASCII DA VAR j COM '/d' : %d\n",*j);
     printf("VALOR CHAR DA VAR j COM '/d' : %c\n",*j);

    printf("\nLOCAL DA VAR LETRA COM '/p' : %p\n",*j);

    printf("\nLOCAL DA VAR letra COM '/p' e & : %p\n",&letraA);
    printf("lOCAL DA VAR letra ARMAZENADA NA VAR j COM '/p' : %p\n",j);


    printf(" \nPARTE 4\n ");
    printf("%c\n",*k);
    printf("VALOR ASCII DA VAR j COM '/d' : %d\n",*k);
     printf("VALOR CHAR DA VAR j COM '/d' : %c\n",*k);

    printf("\nLOCAL DA VAR LETRA COM '/p' : %p\n",*k);

    printf("\nLOCAL DA VAR letra COM '/p' e & : %p\n",&letraB);
    printf("lOCAL DA VAR letra ARMAZENADA NA VAR j COM '/p' : %p\n",k);
}

