//rogersoubr
#ifndef PARTIDA_H
#define PARTIDA_H
#include <string>
#include "../include/Jogador.hpp"
#include "../include/Tabuleiro.hpp"

class Partida{
    private:
        Tabuleiro tabuleiro;//instância do tabuleiro utilizado na partida.
        Jogador jogador1;//primeiro jogador.
        Jogador jogador2;//segundo jogador.
        Jogador* atual;//ponteiro para o jogador cuja vez é a atual.
    public:
        Partida(Jogador jogador1, Jogador jogador2);//Método construtor que inicializa internamente os dois jogadores e define o jogador inicial (quem começa jogando).
        Jogador& getJogadorAtual();//Executa a jogada do jogador atual na posição (linha, coluna) do tabuleiro
        void executarJogada(int linha, int coluna);//Executa a jogada do jogador atual na posição (linha, coluna) do tabuleiro
        char statusPartida();//Retorna o estado atual da partida consultando o tabuleiro. Os valores possíveis são 'X', 'O', 'E' ou 'P' (conforme definido em verificarEstadoPartida())
        void exibirPartida();//Exibe o estado atual do tabuleiro chamando o método imprimir() do tabuleiro.
};
#endif