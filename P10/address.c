#include <stdio.h>
#include <stdlib.h>
#include <string.h>
//#include "address.h" 
/*
formato: linha|numero|cep => analisar e colocar em um strtok
struct address {
    char *line;
    int number;
    int zipcode;
};
*/
//alocar a  atruct pessoas
struct address {
    char *line;
    int number;
    int zipcode;
};

struct address *create_address(const char *input){
  struct address *addr = malloc(sizeof(struct address));//criando uma struct alocada do tamanho da struct

  char *temporaria = strdup(input);

  //faz a leitura da string
    char *lineT = strtok(temporaria, "|");
    char *numberT = strtok(NULL, "|") ;
    char *zipcodeT = strtok(NULL, "|") ;


    addr -> line = malloc(strlen(lineT)+1);
    strcpy(addr->line, lineT);

    addr->number = atoi(numberT);
    addr->zipcode = atoi(zipcodeT);
    

    // Libera a string temporária
    free(temporaria);

    return addr;
};

void free_address(struct address *addr){
    if(addr){
        free(addr->line);
        free(addr);
    }

}



// int main(){
//     // exemplo de entrada sumulada
//     const char *entrada = "Avenida Paulista|1000|01311";

//     // cria o endereço a partir da string
//     struct address *addr = create_address(entrada);

//     // imprime os dados da struct
//     if (addr != NULL) {
//         printf("Line: %s\n", addr->line);
//         printf("Number: %d\n", addr->number);
//         printf("Zipcode: %d\n", addr->zipcode);
//     } else {
//         printf("Erro ao criar endereço.\n");
//     }

//     // libera memória
//     free_address(addr);

//     return 0;
// }