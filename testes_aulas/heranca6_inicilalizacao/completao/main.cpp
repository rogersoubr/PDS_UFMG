#include "SensorTemperatura.hpp"
#include <iostream>

int main(){
    std::cout<<"Criando objeto POLIMORFICO"<<std::endl;
    Sensor * sensor= new SensorTemperatura("SENS-001", "OLED-Display", 24.5f); 

    sensor->executarLeitura();

    std::cout<<"LIMPANDO MEMORIA"<<std::endl;
    delete sensor;

    return 0;
}