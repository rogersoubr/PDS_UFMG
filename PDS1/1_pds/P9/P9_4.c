#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <limits.h>
#include <math.h>
//ler números separados
//somar
//compara maior e menor
//separar os pares e fazer média
//contar os primos

/* ENTRADAS:
25
2
47
5
8
90
*/

#define MAXTAM 100


int eh_primo(int n) {
    if (n < 2) return 0;
    for (int i = 2; i <= sqrt(n); i++) {
        if (n % i == 0)
            return 0;
    }
    return 1;
}



int main(){

    FILE* arquivo = fopen("case.txt","r");

    char numeros[MAXTAM];

    int soma = 0, maior = INT_MIN, menor = INT_MAX, par = 0, countPrimo =0, somaPar = 0;
    float media;
    //fscanf(arquivo, "%d",menor);
    //menor = 27;
    //fgets = destinho, tamanho, origem
    while (fgets(numeros, MAXTAM, arquivo) != NULL)
    {
        int num = atoi(numeros);

        soma += num;

        if(num > maior){
            maior = num;
        }

        if(num < menor){//corrigir dps
            menor = num;
        }

        if(num %2 == 0){
            somaPar += num;
            par++;
            media = somaPar/par;
        }

        if(eh_primo(num)){
            countPrimo++;
        }   
    }
    
    fclose(arquivo);

    printf("A soma: %d\n",soma);
    printf("O maior numero: %d\n",maior);
    printf("O menor numero: %d\n",menor);
    printf("A media dos pares: %.1f\n",media);
    printf("O numero de primos: %d\n",countPrimo);

    return 0;
}

