#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char texto[51]; // 50 + 1 para o '\0'
    fgets(texto, 51, stdin);
    printf("%s",texto);

    int palavra = 0;

    for(int i = 0; texto[i] != '\0'; i++)//enquanto texto[i] for diferente de \0
    {
        if(isspace(texto[i])){
            palavra++;
        }
    }

    printf("Palavras: %d\n",palavra);
    return 0;
}