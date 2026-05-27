#include <iostream>
#include "grid.h"
#include "capybara.h"
#include "jaguar.h"

int main() {
    int N, M, T;
    std::cin >> N >> M >> T;

    Grid grid(N, M);

    // Leitura do grid inicial
    // Para cada célula, instancie o organismo correto e insira no grid
    // TODO

    // Loop de simulação — T turnos
    // A cada turno:
    //   1. resete a flag de movimento de todos os organismos
    //   2. todos os predadores agem primeiro
    //   3. todas as presas agem depois
    // TODO

    // Imprima o estado final do grid
    // TODO

    return 0;
}