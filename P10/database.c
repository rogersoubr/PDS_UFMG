#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "user.h"
#include "address.h"

// função que cria o banco de dados de usuários
struct user **create_user_database(int n) {
    // alocar vetor de ponteiros para usuários
    struct user **db = (struct user **)malloc(n * sizeof(struct user *));
    if (db == NULL) {
        return NULL;
    }

    // inicializa os ponteiros para NULL (boa prática)
    for (int i = 0; i < n; i++) {
        db[i] = NULL;
    }

    char buffer[256]; // buffer temporário para ler as linhas

    for (int i = 0; i < n; i++) {
        if (fgets(buffer, sizeof(buffer), stdin) == NULL) {
            // se falhar na leitura, libera tudo e retorna NULL
            for (int j = 0; j < i; j++) {
                free_user(db[j]);
            }
            free(db);
            return NULL;
        }

        // remove quebra de linha se houver
        buffer[strcspn(buffer, "\n")] = '\0';

        db[i] = create_user(buffer);
        if (db[i] == NULL) {
            // se falhar na criacao, libera tudo
            for (int j = 0; j <= i; j++) {
                free_user(db[j]);
            }
            free(db);
            return NULL;
        }
    }

    return db;
}

// funcao que libera toda a memória do banco de dados
void free_user_database(struct user **db, int n) {
    if (db == NULL) {
        return;
    }

    for (int i = 0; i < n; i++) {
        if (db[i] != NULL) {
            free_user(db[i]);
        }
    }

    free(db);
}