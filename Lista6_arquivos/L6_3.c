//Roger Souza Brandao - 20250108154
#include <stdio.h>
#include <stdlib.h>

int primo(int n) {
    if (n < 2) return 0;
    if (n == 2) return 1;
    if (n % 2 == 0) return 0;
    
    //divisibilidade ate a raiz quadrada de n
    for (int i = 3; i * i <= n; i += 2) {
        if (n % i == 0) return 0;
    }
    return 1;
}

int main() {
    FILE *entrada, *primos, *outros;
    int numero;
    
    //bre arquivo de entrada
    entrada = fopen("numeros.txt", "r");
    if (entrada == NULL) {
        printf("Erro ao abrir arquivo de entrada\n");
        return 1;
    }
    
    //abre arquivos de saida
    primos = fopen("primos.txt", "w");
    if (primos == NULL) {
        printf("Erro ao criar arquivo primos.txt\n");
        fclose(entrada);
        return 1;
    }
    
    outros = fopen("outros.txt", "w");
    if (outros == NULL) {
        printf("Erro ao criar arquivo outros.txt\n");
        fclose(entrada);
        fclose(primos);
        return 1;
    }
    
    while (fscanf(entrada, "%d", &numero) == 1) {
        if (primo(numero)) {
            fprintf(primos, "%d\n", numero); //pega numeros e manda
        } else {
            fprintf(outros, "%d\n", numero);
        }
    }
    
    fclose(entrada);
    fclose(primos);
    fclose(outros);
    
    printf("primos salvos em 'primos.txt'\n");
    printf("outros numeros salvos em 'outros.txt'\n");
    
    return 0;
}