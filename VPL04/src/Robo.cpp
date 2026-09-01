//rogersoubr 2025108154
//recebe tamanho do time e as informações dos robôs
//'s' | imprime os estados e 
//'m' 0 1.0 1.0 | move o robo 0 para a posição 1.0 1.0
//'b' 0 | o robo 0 deve passar a bola para o próximo robo
#include "../include/Robo.hpp"
#include "../include/Ponto2D.hpp"
#include <cmath>
#include <iostream>
#ifndef ROBO_C
#define ROBO_C

using namespace std;


Robo::Robo(int id, Ponto2D ponto_plano, bool com_bola) 
    : id(id), ponto_plano(ponto_plano), _com_bola(com_bola) {
    //inicia _energia com 100
    this->_energia = 100.0;
}

void Robo::mover(double v, double th, double t){
    //deduzir = diminuir

    double de=v*t;//deslocamento escalar

    double dx = de * cos(th);//eixo x
    double dy= de * sin(th);//eixo y

    this->ponto_plano.x += dx;
    this->ponto_plano.y += dy;
    this->_energia -= de;
};

double Robo::calcular_distancia(Robo* robo){
   return  this->ponto_plano.calcular_distancia(&(robo->ponto_plano));
};

Robo* Robo::determinar_robo_mais_proximo(Robo** naves, int n){
Robo* mais_proximo = nullptr;
    double menor_dist = -1.0;
    
    for (int i = 0; i < n; i++) {
        //nao calcula a distancia para ele mesmo
        if (naves[i]->id != this->id) {
            double dist = calcular_distancia(naves[i]);
            
            if (menor_dist < 0 || dist < menor_dist) {
                menor_dist = dist;
                mais_proximo = naves[i];
            }
        }
    }
    return mais_proximo;
};

void Robo::passar_bola(Robo** time, int n){
if (!this->_com_bola) {
        std::cout << "Estou sem a bola!\n";
        return;
    }
    
    Robo* vizinho = determinar_robo_mais_proximo(time, n);
    if (vizinho != nullptr) {   
        //sempre verificar o nullptr 
        this->_com_bola = false;
        vizinho->_com_bola = true;
    }
};

void Robo::imprimir_status(){
    cout << id << "\t" << ponto_plano.x << "\t" << ponto_plano.y << "\t" << _com_bola << "\t" << _energia <<endl;
};

#endif