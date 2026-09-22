//rogerosubr
#ifndef TABULEIRO_C
#define TABULEIRO_C
#include "../include/Tabuleiro.hpp"
#include <iostream>
using namespace std;

int ganhouPorlinhas(char simbolo){
    int ganhou =0;
}

int ganhouPorColuna(int linha, char simbolo){

}
int ganhouPorColunas(char simbolo){

}
int ganhouPorDiagonal(int linha, char simbolo){

}
int ganhouPorDiagonalSec(int linha, char simbolo){

}

Tabuleiro::Tabuleiro(){
    for (int i = 0; i < 2; i++){
        for (int j = 0; j < 2; j++){
         this->tabuleiro[i][j] = ' ';
        }
    }
    
}
//possivelmente errado
bool Tabuleiro::validaJogada(int linha, int coluna, char simbolo){
    if( (0>=linha<=2) && (0>=coluna<=2) && (simbolo= ('x' || 'o')) &&(this->tabuleiro[linha][coluna] = ' ') ){
        return true;
    }else{
        return false;
    };
};

void Tabuleiro::fazerJogada(int linha, int coluna, char simbolo){
    this->tabuleiro[linha][coluna]= simbolo;
}

char Tabuleiro::verificarEstadoPartida(){
    //LINHAS
    for (int i = 0; i < 3; i++) {
        if (tabuleiro[i][0] != ' ' && tabuleiro[i][0] == tabuleiro[i][1] && tabuleiro[i][1] == tabuleiro[i][2]) {
            return tabuleiro[i][0];
        }
        //COLUNHAS = TRANSPOSTA DE [linha][colunas]
        if (tabuleiro[0][i] != ' ' && tabuleiro[0][i] == tabuleiro[1][i] && tabuleiro[1][i] == tabuleiro[2][i]) {
            return tabuleiro[0][i];
        }
    }
 
    //dIAGONAL
    if (tabuleiro[0][0] != ' ' && tabuleiro[0][0] == tabuleiro[1][1] && tabuleiro[1][1] == tabuleiro[2][2]) {
        return tabuleiro[0][0];
    }
    //DIAGONAL SEC = l+i eh 2
    if (tabuleiro[0][2] != ' ' && tabuleiro[0][2] == tabuleiro[1][1] && tabuleiro[1][1] == tabuleiro[2][0]) {
        return tabuleiro[0][2];
    }
 
    //p = posições vazias
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            if (tabuleiro[i][j] == ' ') {
                return 'P';
            }
        }
    }
 
    //nenhum vencedor
    return 'E';
}

void Tabuleiro::imprimir() {
    for (int i = 0; i < 3; i++) {
        std::cout << " " << this->tabuleiro[i][0] << " | "
                  << this->tabuleiro[i][1] << " | "
                  << this->tabuleiro[i][2] << "\n";
        if (i < 2)
            std::cout << "-----------\n";
    }
}

#endif