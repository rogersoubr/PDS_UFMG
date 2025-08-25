#include <stdio.h>
#include <string.h>
#include <stdlib.h> // Incluso no seu exemplo original



void frequencia_str(const char* dados_brutos){
    int freq[100] = {0};//todos os 100 vetores recebem 0

    for(int i=0; i<dados_brutos[i] != '\0';i++)//enquanto não chegar no final da string
    {
        unsigned char c = dados_brutos[i];//pega parte do texto e tranforma em char sem sinal
        freq[c]++;//a tal posição, vai receber +1 
    }

    for(int i =0;i<100 ; i++)//enquanto não acbar o char
    {
        if(freq[i]>0)//se exente frequencia no tal local
        {
            printf("'%c' aparece %d vezes\n", i, freq[i]);//formatou o i (que recebeu antes) em caractere
        }
    }
     printf("\n");
    
}

int main() {
    printf("--- Teste 1 ---\n");
    frequencia_str("PDS1PDS1PDS1");
    return 0;
}
//conta ocorrencia de char emostra a contagem
//se for maiuscula muda, pode usar a tabela asc2
// se o char for maior que 0, vai voltar: '1' aparece 3 vezes
//seguir a ordem da tabela asc2, na impressão
//separar saídas com \n
