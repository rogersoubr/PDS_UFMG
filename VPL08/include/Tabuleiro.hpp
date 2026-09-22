//rogersoubr
#ifndef TABULEIRO_H
#define TABULEIRO_H
#include <string>
#include "../include/Jogador.hpp"

class Tabuleiro{
    public:
    //queria fazer uma matriz auxiliar que permanecia com o estado da partida
        char tabuleiro[3][3];//matriz 3×3 que armazena o estado de cada célula do tabuleiro. Cada célula pode conter 'X', 'O' ou ' '
    public:
        Tabuleiro();//Método construtor que inicializa todas as posições da matriz com o caractere ' ' (espaço), representando um tabuleiro vazio.
        bool validaJogada(int linha, int coluna, char simbolo);////matriz 3×3 que armazena o estado de cada célula do tabuleiro. Cada célula pode conter 'X', 'O' ou ' '
        void fazerJogada(int linha, int coluna, char simbolo);//registra uma jogada no tabuleiro, armazenando o simbolo informado na célula [linha][coluna]. Atenção: este método assume que a jogada já foi validada previamente.
        char verificarEstadoPartida();//Analisa o estado atual do tabuleiro e retorna um caractere indicando o resultado: 'X' = o jogador X venceu | 'O' = o jogador O venceu | 'E' = empate (todas as posições preenchidas e nenhum vencedor) | 'P' = partida ainda em andamento (há posições vazias e nenhum vencedor)
        void imprimir();// Exibe o estado atual do tabuleiro no terminal

        //char getTabuleiro();// Exibe o estado atual do tabuleiro no terminal
};
#endif