
//COMO RODAR:
// gcc P2antiga_Q1.c
// ./a.exe "T25.5 U60 P1012.5" "U11 T55" "U66.1 T99.8"
#include <stdio.h>
#include <string.h>

// Protótipo da sua função
void processar_dados_sensores(const char* dados_brutos, float* temperatura, float*
umidade) {
    //1) Zerar em float e instanciar os ponteiros (lembrando que não é cópia)
    *umidade = 0.0f;
    *temperatura = 0.0f;

    //2) faz uma copia da string
    char copia[100];
    strncpy(copia, dados_brutos, 100);

    //sepra a cópia pelos espaços. cada novo string gerada é gerada um local de memória. o tokem aaponta para tal 
    char* token = strtok(copia, " ");

    //enquanto o token gerado não for nulo (acabou a astring)
    while (token != NULL) {
        // Verifica o prefixo da informação
        //pega a primeira posição da nova string token
        if (token[0] == 'T') {
            //lembrando q token é um local de var. +1, coloca para pegar o próximo num e o sscanf reconhece esse num
            printf("%p \n",token);
            printf("%p \n",token+1);
            printf("%p \n",token+2);

            // Extrai o número depois do 'T' usando sscanf
            sscanf(token + 1, "%f", temperatura);
        } else if (token[0] == 'U') {
            sscanf(token + 1, "%f", umidade);
        }
        // Se tiver pressão no futuro:
        // else if (token[0] == 'P') { sscanf(token + 1, "%f", pressao); }

        // Pega o próximo token. NULL, fala pra ele continuar na string cópia. A var token vai passar a ter um novo valor a cada 
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