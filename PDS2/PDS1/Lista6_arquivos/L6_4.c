//Roger Souza Brandao - 20250108154
#include <stdio.h>
#include <stdlib.h>

//funvao f(x) = x² - 5x + 1
double funcao(double x) {
    return x * x - 5 * x + 1;
}

int main() {
    FILE *entrada, *saida;
    double numero, resultado;
    
    //abre arquivo de entrada
    entrada = fopen("numeros_reais.txt", "r");
    if (entrada == NULL) {
        printf("erro ao abrir arquivo de entrada\n");
        return 1;
    }
    
    //Abre arquivo de saida
    saida = fopen("resultado_funcao.txt", "w");
    if (saida == NULL) {
        printf("Erro ao criar arquivo de saida\n");
        fclose(entrada);
        return 1;
    }
    
    //numeros e aplica a fucao
    while (fscanf(entrada, "%lf", &numero) == 1) {
        resultado = funcao(numero);
        fprintf(saida, "f(%.2f) = %.2f\n", numero, resultado);
    }
    
    fclose(entrada);
    fclose(saida);
    
    printf("Resultado em 'resultado_funcao.txt'\n");
    
    return 0;
}