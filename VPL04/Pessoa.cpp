//Roger Souza Brandão - 2025108154
#include "Pessoa.hpp"

Pessoa::Pessoa(double x, double y){
    this -> x = x;
    this -> y = y;
}

double Pessoa::getY(){
    return y;
}
double Pessoa::getX(){
    return x;
}
void Pessoa::mover(double dx, double dy){
     x += dx;
    y += dy;
}
