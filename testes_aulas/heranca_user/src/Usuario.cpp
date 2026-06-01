#include "../include/Usuario.hpp"

Usuario::Usuario(const std::string nome) : nome(nome) {}

Usuario::~Usuario() {}

std::string Usuario::getId() { 
    return this->id; 
}

std::string Usuario::getNome() { 
    return this->nome; 
}

void Usuario::setId(std::string _id) { 
    this->id = _id; 
}

void Usuario::setNome(std::string _nome) { 
    this->nome = _nome; 
}

void Usuario::exibir() {
    std::cout << "Usuario -> ID: " << this->id << " | Nome: " << this->nome << "\n";
}