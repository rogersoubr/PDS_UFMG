#include "Display.hpp"
#include <iostream>

Display::Display(std::string modelo): _modelo(modelo){}

void Display::mostrarMensagem(std::string mensagem) const{
    std::cout <<"["<<_modelo<<"]: "<< mensagem <<std::endl;
}