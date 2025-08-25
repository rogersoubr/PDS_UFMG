#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

int ddd(const char *telefone)
{
    char dd[3];
    strncpy(dd, telefone, 2);
    dd[2] = '\0'; 

    return atoi(dd);

}

int main()
{
    char num[12];
    printf("Digite seu telefone de 11 digitos: ");
    scanf("%11s",num);
    int result = ddd(num);
    printf("Resultado: %d",result);
    return 0; // Boa prática em main
}