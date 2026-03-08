// gcc P2antiga_Hector_1_1.c
// ./a.exe "T25.5 U60 P1012.5" "U11 T55" "U66.1 T99.8

#include <string.h>
#include <stdio.h>

void processar_dados_sensores(const char* dados_brutos, float* temperatura, float*
umidade) {
    *temperatura = 0.0f;
    *umidade = 0.0f;

    char copia[100];
    strncpy(copia, dados_brutos, 100);

    char* token = strtok(copia, " ");//um token recebe o local de var de cada partição da char

    while (token != NULL)//aqui dentro tem que ser verdadeiro para prosseguir
    {
        if(token[0] == 'T'){
            sscanf(token +1, "%f", temperatura);//ler qual char, interpretar como, colocar em qual var?
        }else if(token[0] == 'U'){
            sscanf(token +1, "%f", umidade);
        }

        token = strtok(NULL, " ");
    }
    
    
}

int main() {
    float temp;
    float umid;
    const char* teste1 = "T25.5 U60";
    processar_dados_sensores(teste1, &temp, &umid);
    printf("Teste 1: Temp=%.1f, Umid=%.1f\n", temp, umid); // Temp=25.5, Umid=60.0

    const char* teste2 = "U11 T55";
    processar_dados_sensores(teste2, &temp, &umid);
    printf("Teste 2: Temp=%.1f, Umid=%.1f\n", temp, umid); // Temp=55.0, Umid=11.0

    const char* teste3 = "U66.1 T99.8";
    processar_dados_sensores(teste3, &temp, &umid);
    printf("Teste 3: Temp=%.1f, Umid=%.1f\n", temp, umid); // Temp=99.8, Umid=66.1

    return 0;
}