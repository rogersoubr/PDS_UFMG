#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "user.h"
#include "address.h" // ncessário para usar create_address e free_address

struct user *create_user(const char *input) {
    // aloca memória para a struct user
    struct user *u = (struct user *)malloc(sizeof(struct user));
    if (u == NULL) {
        perror("Erro ao alocar memória para user");
        exit(1);
    }

    // faze uma cópia da string input porque strtok altera a string
    char *input_copy = strdup(input);
    if (input_copy == NULL) {
        perror("Erro ao alocar memória para input_copy");
        exit(1);
    }

    // separar a string usando #
    char *token = strtok(input_copy, "#");
    // Primeiro token: nome
    u->name = strdup(token); // slocar memória para o nome
    if (u->name == NULL) {
        perror("Erro ao alocar memória para name");
        exit(1);
    }

    // segundo token: idade
    token = strtok(NULL, "#");
    u->idade = atoi(token); // Converter idade para inteiro

    // Terceiro token: endereço
    token = strtok(NULL, "#");
    u->addr = create_address(token); // criar a struct address

    // kiberar a string temporaria
    free(input_copy);

    return u;
}

void free_user(struct user *u) {
    if (u != NULL) {
        free(u->name);           // liberar o nome
        free_address(u->addr);   // liberar a struct address
        free(u);                 // liberar a struct user
    }
}