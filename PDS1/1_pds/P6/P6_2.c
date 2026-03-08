#include <string.h>

void concatena(char *a, int tamanhoA, char *b, int tamanhoB, char *s) {
    int tot = tamanhoA + tamanhoB;
    s[tot];

    for(int i= 0;i<tamanhoA; i++){
        s[i] = a[i];
    }

    for (int i = tamanhoA; i <= tot; i++){
        s[tamanhoA+i] = b[tamanhoA+i];
    }

    return s[];
    
}

void concatenaCERTO(char *A, int tamanhoA, char *B, int tamanhoB, char *S) {
    // manda os caracteres de A para S
    for (int i = 0; i < tamanhoA; i++) {
        S[i] = A[i];
    }
    // copia os caracteres de B para S, logo após A
    for (int i = 0; i < tamanhoB; i++) {
        S[tamanhoA + i] = B[i];
    }
    // adiciona o caractere nulo ao final
    return S[tamanhoA + tamanhoB] = '\0';
}