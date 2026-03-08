//Roger Souza Brandao - 20250108154
#include <stdio.h>
#include <stdlib.h>

int primo(int n) {
    if (n < 2) return 0;
    if (n == 2) return 1;
    if (n % 2 == 0) return 0;//entra{4,6,8} abaixo de 9 ja vao para return 1
    
    //divisibilidade ate a raiz quadrada de n
    for (int i = 3; i * i <= n; i += 2) {
        if (n % i == 0) return 0;
    }
    return 1;
}

int main() {
    FILE* leitura;
    FILE* grava;
    int num;
    leitura = fopen("numeros.txt","r+t");
    grava = fopen("resultado_primos.txt","w+t");

    while (fscanf(leitura,"%d",&num) == 1){
        //fscanf eh uma funcao de leitura de numeros
        if(primo(num)){
            fprintf(grava,"%d eh primo\n",num);
        }else{
            fprintf(grava,"%d nao eh primo\n",num);
        }
        printf("\nDEBUG\n");
    }

    fclose(leitura);
    fclose(grava);

    printf("\nSalvo em resultado_primos.txt");
    
    return 0;
}