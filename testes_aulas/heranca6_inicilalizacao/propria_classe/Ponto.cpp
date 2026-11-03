#include "Ponto.hpp"
#include <iostream>
/*
Existem 2 tipos de inicialização
1) Dentro do construtor: { _x = x; }: Sintaxe grande, mas funciana sempre
2) Direta: :_x(x) Faz o valor da variável _x ficar direto na x. Econoomiza espaço, mas não pode usar con const e referencias &
*/

//usando 2)
Ponto::Ponto(int x, int id): _x(x), _id(id){};
void Ponto::exibir() const { 
    std::cout << "Ponto ID " << _id << " na posição X: " << _x << std::endl; 
}