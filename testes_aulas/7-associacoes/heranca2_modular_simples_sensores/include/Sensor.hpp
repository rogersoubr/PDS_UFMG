#ifndef SENSOR_H
#define SENSOR_H
#include <string>
#include <iostream>

class Sensor {
    protected:
        std::string nome;
        std::string fabricante;

    public: 
        Sensor();   
};

#endif