//rogersoubr 2025108154

#ifndef PONTO2D_H
#define PONTO2D_H

using namespace std;

struct Ponto2D{
    double x;
    double y;

    Ponto2D(double a, double b);

    double calcular_distancia(Ponto2D* ponto);//calcula distancia entre dois pontos
};

#endif

