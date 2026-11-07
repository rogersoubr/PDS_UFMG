#ifndef SENSORTEMPERATURA_HPP
#define SENSORTEMPERATURA_HPP
#include "Sensor.hpp"
#include "Display.hpp"

class SensorTemperatura: public Sensor{
    private:
        float _temperaturaAtual;
        Display _display;
    public:
        SensorTemperatura(std::string id, std::string modeloDisplay, float tempInicial);
        ~SensorTemperatura() override;//classe filho precisa ter o override se vai sobrescrever o construtor do pai

        void executarLeitura() override;
};

#endif 