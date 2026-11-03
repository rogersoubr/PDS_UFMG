#include "SensorTemperatura.hpp"
#include <iostream>

SensorTemperatura::SensorTemperatura(std::string id, std::string modeloDisplay, float tempInicial): 
Sensor(id),_display(modeloDisplay), _temperaturaAtual(tempInicial) {}

SensorTemperatura::~SensorTemperatura(){
    std::cout << "[Destrutor-SensorTemperatura] Liberando SENSORTEMPERATURA" <<std::endl;
}

void SensorTemperatura:: executarLeitura() {
    std::string dados = "Sensor " + getId() + " leu " + std::to_string(_temperaturaAtual) + " °C"; 
    _display.mostrarMensagem(dados);
}