//Roger Souza Brandão - 2025108154
#include "Carro.hpp"
#include <cmath>
#include <iostream>
#include <iomanip> //vou usar no setprecision e fixed

using namespace std;

Carro::Carro(double x, double y, double th){
    this->x = x;
    this->y = y;
    this->th = th;//angulo em radiona que é a orentação do carro
}

double Carro::getY(){
    return y;
}
double Carro::getX(){
    return x;
}
double Carro::getTH(){
    return th;
}

void Carro::girar(double w, double t) {
    //orientação com a velocidade angular e tempo
    th += w * t;
}

void Carro::mover(double v, double t) {
    //composição vetorial para atualizar a posição
    x += v * t * cos(th);
    y += v * t * sin(th);
}

double Carro::calcular_angulo_pessoa(Pessoa* pessoa) {
    double dx = pessoa->getX() - x;
    double dy = pessoa->getY() - y;
    
    //atan2 = retorna o ângulo absoluto do vetor em relação ao eixo X
    double angulo_absoluto = atan2(dy, dx);
    
    //ângulo relativo à orientalão atual do carro
    double angulo_relativo = angulo_absoluto - th;
    
    //para manter os angulos no intervalo de -PI a +PI radianos
    while (angulo_relativo > M_PI) angulo_relativo -= 2.0 * M_PI;
    while (angulo_relativo <= -M_PI) angulo_relativo += 2.0 * M_PI;
    
    //radianos para graus
    return angulo_relativo;
}

double Carro::calcular_distancia_pessoa(Pessoa* pessoa) {
    double dx = pessoa->getX() - x;
    double dy = pessoa->getY() - y;
    return sqrt(dx * dx + dy * dy);
}

bool Carro::movimentacao_permitida(Pessoa** pessoas, int n) {
    bool pode_mover = true;
    
    for (int i = 0; i < n; i++) {
        double dist = calcular_distancia_pessoa(pessoas[i]);
        double ang_rad = calcular_angulo_pessoa(pessoas[i]);
        double ang_graus = ang_rad * 180.0 / M_PI; //converter para graus
        
        //se a pessoa esta no campo de visão frontal ([-45, 45] graus e distância <= 5m)
        if (dist <= 5.0 && ang_graus >= -45.0 && ang_graus <= 45.0) {
            //alerta formatado com 2 casas decimais com separação
            cout << "Alerta! " << i << "\t" << fixed << setprecision(2) << ang_graus << "\t" << dist << "\n";
            pode_mover = false;
        }
    }
    
    return pode_mover;
}

void Carro::navegar(Pessoa** pessoas, int n, double w, double v, double t) {
    //olha se pode se mover
    if (movimentacao_permitida(pessoas, n)) {
        // realiza o giro
        girar(w, t);
        //move para frente
        mover(v, t);
    }
}

