//Roger Souza Brandao - 20250108154 - misericordia
#include <stdio.h>
#include <stdlib.h>

// Função f(x) = ax3 + bx + cx + d
double funcao(double x, double a, double b, double c, double d) {
    return a * x * x * x + b * x * x + c * x + d;
}

int main() {
    FILE *entrada, *saida;
    double numero, resultado;//colocando em resultado
    double a, b, c, d;
    
    // Lê os coeficientes do teclado
    printf("Digite os numeros coeficientes da funcao f(x) = ax3 + bx2 + cx + d\n");
    printf("Coeficiente a: ");
    scanf("%lf", &a);
    printf("Coeficiente b: ");
    scanf("%lf", &b);
    printf("Coeficiente c: ");
    scanf("%lf", &c);
    printf("Coeficiente d: ");
    scanf("%lf", &d);
    
    //abre o arquivo de entrada
    entrada = fopen("numeros_reais.txt", "r");
    if (entrada == NULL) {
        printf("Erro ao abrir arquivo de entrada\n");
        return 1;
    }
    
    //abre o arquivo de saída
    saida = fopen("resultado_polinomio.txt", "w");
    if (saida == NULL) {
        printf("erro ao criar arquivo de saida\n");
        fclose(entrada);
        return 1;
    }
    
    //formatacao do cabecalho do arquivo
    fprintf(saida, "Funcao: f(x) = %.2fx³ + %.2fx² + %.2fx + %.2f\n", a, b, c, d);
    fprintf(saida, "===========================================\n\n");
    
    //aplica a funcao mo num
    while (fscanf(entrada, "%lf", &numero) == 1) {
        resultado = funcao(numero, a, b, c, d);
        fprintf(saida, "f(%.2f) = %.2f\n", numero, resultado);
    }
    
    fclose(entrada);
    fclose(saida);
    
    printf("\nfoi em 'resultado_polinomio.txt'\n");
    
    return 0;
}