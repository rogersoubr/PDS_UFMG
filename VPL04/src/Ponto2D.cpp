//rogersoubr 2025108154

#ifndef PONTO2D_C
#define PONTO2D_C
#include <cmath>
# include "../include/Ponto2D.hpp"

using namespace std;

Ponto2D::Ponto2D(double x, double y): x(x), y(y){};//inica um ponto

double Ponto2D::calcular_distancia(Ponto2D* p2) {
    double dx = p2->x - this->x;
    double dy = p2->y - this->y;
    return sqrt(dx*dx + dy*dy);//testar com o pow em cima
}

#endif

