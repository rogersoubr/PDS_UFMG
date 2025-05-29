#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "A6_aleatoria_lib.h"

#define MAX_PRECO    100
#define MIN_PRECO      5
#define MAX_PRODUTOS  10
#define MAX_CLIENTES   5

// Colocando preços inteiros
int main() {
    
    srand(time(NULL));

    int precos[MAX_PRODUTOS];
    int numProdutos = randomIntMinMax(1, MAX_PRODUTOS);

    int produtosComprados[MAX_CLIENTES];
    int numClientes = randomIntMinMax(1, MAX_CLIENTES);

    printf("A loja terá %d produtos\n", numProdutos);
    printf("A loja receberá %d clientes\n", numClientes);
    
    // Gera preços
    printf("\n");
    for (int i = 0; i < numProdutos; i++) {
        precos[i] = randomIntMinMax(MIN_PRECO, MAX_PRECO);
        printf("Produto %3d tem preço %3d\n", i, precos[i]);
    }

    // Seleciona produtos:
    int faturamento = 0;
    for (int i = 0; i < numClientes; i++) {
        produtosComprados[i] = randomInt(numProdutos); // Cuidado, numProdutos e nao MAX_PRODUTOS
        int preco = precos[produtosComprados[i]];
        faturamento += preco;
        printf("Cliente %3d comprou produto %3d, com preço %3d\n", i, produtosComprados[i], preco);
    }

    // Faturamento
    printf("\nO faturamento da loja foi de R$%d\n", faturamento);
    return 0;
}