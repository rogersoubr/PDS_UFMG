//rogerosubr
#include "../include/Partida.hpp"
#include <iostream>
//sintaxe feia da peste
Partida::Partida(Jogador jogador1, Jogador jogador2): jogador1(jogador1), jogador2(jogador2){
    atual = &this->jogador1;
}

Jogador& Partida::getJogadorAtual() {
    return *atual;
}

void Partida::executarJogada(int linha, int coluna) {
    char simbolo = atual->getSimbolo();

    if (tabuleiro.validaJogada(linha, coluna, simbolo)) {
        tabuleiro.fazerJogada(linha, coluna, simbolo);
        //se? entao: senao
        atual = (atual == &jogador1) ? &jogador2 : &jogador1;
    } else {
        std::cout << "Jogada invalida!\n";
    }
}

char Partida::statusPartida() {
    return tabuleiro.verificarEstadoPartida();
}

void Partida::exibirPartida() {
    tabuleiro.imprimir();
}