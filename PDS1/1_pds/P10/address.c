#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "address.h"

struct address *create_address(const char *input) {
    // Aloca memória para a struct address
    struct address *addr = (struct address *)malloc(sizeof(struct address));
    if (addr == NULL) {
        perror("Erro ao alocar memória para address");
        exit(1);
    }

    // Faz uma cópia da string de entrada
    char *input_copy = strdup(input);
    if (input_copy == NULL) {
        perror("Erro ao alocar memória para input_copy");
        exit(1);
    }

    // Separa pelos delimitadores '|'
    char *token = strtok(input_copy, "|");
    addr->line = strdup(token);

    token = strtok(NULL, "|");
    addr->number = strdup(token);

    token = strtok(NULL, "|");
    addr->zipcode = strdup(token);

    // Libera a cópia temporária
    free(input_copy);

    // Verifica se todas as alocações foram bem-sucedidas
    if (addr->line == NULL || addr->number == NULL || addr->zipcode == NULL) {
        free_address(addr);
        perror("Erro ao alocar memória para campos de address");
        exit(1);
    }

    return addr;
}

void free_address(struct address *addr) {
    if (addr != NULL) {
        free(addr->line);
        free(addr->number);
        free(addr->zipcode);
        free(addr);
    }
}


/*
int main(){
    // exemplo de entrada sumulada
    const char *entrada = "Avenida Paulista|1000|01311";

    // cria o endereço a partir da string
    struct address *addr = create_address(entrada);

    // imprime os dados da struct
    if (addr != NULL) {
        printf("Line: %s\n", addr->line);
        printf("Number: %d\n", addr->number);
        printf("Zipcode: %d\n", addr->zipcode);
    } else {
        printf("Erro ao criar endereço.\n");
    }

    // libera memória
    free_address(addr);

    return 0;
}
*/