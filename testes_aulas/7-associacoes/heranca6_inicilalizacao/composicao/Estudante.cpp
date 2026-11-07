#include "Estudante.hpp" 
#include<iostream>

// Inicializa o objeto membro _curso repassando a string 
Estudante::Estudante(std::string nomeCurso) : _curso(nomeCurso) {}
void Estudante::exibir() const { 
    std::cout << "Estudante matriculado no curso: " << _curso.getNome() << std::endl; 
}