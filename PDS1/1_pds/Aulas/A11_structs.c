#include <stdio.h>
#include <stdlib.h>
#include <ctype.h> // para usar toupper(), lib de converter para minuscula 

typedef int inteiro;
typedef int integer;


// typedef struct Pessoa // Funciona tambem
//cria uma variável pessoa que receba essas variaveis:
// o número de bits de cada var é somado
typedef struct Pessoa {
    float altura;
    float peso;
    char sexo;
} Pessoa;

void pesoIdeal(Pessoa* p) {
    float ideal = 0;
        //toupper converte de minúscula para maiúscula 
    if (toupper(p->sexo) == 'F') {
        ideal = 62.1 * p->altura - 44.7;
    } else if (toupper(p->sexo) == 'M') {
        ideal = 72.7 * p->altura - 58.0;
    } else {
        printf("Sexo invalido!\n");
        return;
    }
    if (p->peso > ideal) {
        printf("Peso acima do ideal: %.2f > %.2f\n", p->peso, ideal);
    } else if (p->peso < ideal) {
        printf("Peso abaixo do ideal: %.2f < %.2f\n", p->peso, ideal);
    } else {
        printf("Peso ideal: %.2f == %.2f\n", p->peso, ideal);
    }
}

int main() {
    Pessoa p;
    int a = 1;
    inteiro b = 2;
    printf("%d + %d = %d\n", a, b, a+b);

    
    printf("Digite altura, peso e sexo: ");
    scanf("%f %f %c", &p.altura, &p.peso, &p.sexo);//assim você chama a variável
    pesoIdeal(&p);
    return 0;
};