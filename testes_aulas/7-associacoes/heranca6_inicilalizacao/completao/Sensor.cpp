#include "Sensor.hpp"
#include <iostream>

Sensor::Sensor(std::string id): _identificador(id){};
Sensor::~Sensor(){
    std::cout<<"[Destrutor-Sensor] Liberando SENSOR: "<<_identificador<<std::endl;
}

std::string Sensor::getId() const { 
    return _identificador; 
}