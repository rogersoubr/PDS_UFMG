#include <stdio.h>
#include <stdlib.h>//origem do rand
#include <time.h>//tempo em mili
#include "A6_aleatoria_lib.h"

int main() {
    int t;
    float f;

    // (3) Semente
    //int semente = 1002;
    //srand(semente);
    //printf("SEMENTE = %d\n", semente);

    // (4) Semente "aleatoria"
    srand(time(NULL));//ponto de partida

    // (1) Rand simples
    //t = rand();
    //printf("t = %d\n", t);
    //printf("RAND_MAX = %d\n", RAND_MAX);
    
    // (2) Sequencia de números
    // (5) Sequencia de numeros de 0 a 19 (20 no randomInt)
    // (6) Sequencia de numeros de 0 a 19 (20 no randomInt)
    // (7) Float entre 0 e 1

    float min = 1;
    float max = 0;
    for (int i = 0; i < 10; i++) {
        //t = randomInt();
        //t = randomInt(20);
        //t = randomIntMinMax(5, 10);//função que gera num aleatório de 0 até grande
        //printf("t = %d\n", t);
        f = randFloat(2, 3);
        printf("f = %f\n", f);
        //if (min > f) min = f;
        //if (max < f) max = f;
    }
    //printf("Min = %f, Max = %f\n", min, max);

    return 0;
}