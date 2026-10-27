#include <string>
#include <iostream>
#include <stl>
using namespace std;
#include "../include/Pessoa.hpp"
#include "../include/Curso.hpp"
#include "../include/Departamento.hpp"
#include "../include/Professor.hpp"
#include "../include/Estudante.hpp"

int main() {
    Professor prof;
    Estudante estudante; 
    list<Pessoa*> pessoas;
    pessoas.push_back(prof);
    pessoas.push_back(&estudante);
    for (Pessoa* p : pessoas) {
    p->meuNome();
    }
    return 0;
}