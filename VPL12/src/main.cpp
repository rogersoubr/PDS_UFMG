//Roger Souza Brandao 2025108154
#include <iostream>
#include "include/grid.hpp"
#include "include/capybara.hpp"
#include "include/jaguar.hpp"

int main() {
    int N, M, T;
    std::cin >> N >> M >> T;//fluxo

    Grid grid(N, M);

    // Leitura do grid inicial
    // Para cada célula, instancie o organismo correto e insira no grid
    //loop para carregar o estado inicial do grid
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            char caractere_lido_char;
            std::cin >> caractere_lido_char;
            
            //instancia cada tipo especifico dr organismo e colocar no grid
            if (caractere_lido_char == 'c') {
                grid.set(i, j, new Capybara(i, j));
            } else if (caractere_lido_char == 'o') {
                grid.set(i, j, new Jaguar(i, j));
            }
            //se for o ponto final, a classe grid ja inicializou nulo antes entao vai ignorar
        }
    }


    //COMECA LOOP DE SIMULACAO DO PLANO — T turnos
    for (int turno_atual = 0; turno_atual < T; turno_atual++) {
        grid.resetMoved();//1. resete a flag de movimento de todos os organismos, tem que estar no inicio


        //   2. todos os predadores vulgo oncas agem primeiro ------------------------------
        for (int i = 0; i < N; i++) {
                for (int j = 0; j < M; j++) {
                    Organism* bicho_atual = grid.get(i, j);
                    if (bicho_atual != nullptr && bicho_atual->symbol() == 'o') {
                        bicho_atual->move(grid);
                    }
                }
            }


        //   3. todas as presas vulgo capivara agem depois ----------------------------
        for (int i = 0; i < N; i++) {
                for (int j = 0; j < M; j++) {
                    Organism* bicho_atual = grid.get(i, j);
                    if (bicho_atual != nullptr && bicho_atual->symbol() == 'c') {
                        bicho_atual->move(grid);
                    }
                }
            }
    }

    std::cout << grid <<std::endl;// Imprima o estado final do grid

    return 0;
}