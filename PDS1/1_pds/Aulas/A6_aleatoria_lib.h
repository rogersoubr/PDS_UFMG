#include <stdlib.h>

// Gera um numero aleatorio entre 0 e n-1
int randomInt(int n) {
    return rand() % n;//retorna resto da divisão de rand em n
}

int randomIntMinMax(int min, int max) {
    return min + rand() % (max - min + 1);
}

float randomFloat() {
    return (float) rand() / RAND_MAX;//retorna parte flutuante
}

float randomFloatMinMax(float min, float max) {
    return min + randomFloat() * (max - min);
}