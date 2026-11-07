#ifndef SENSOR_HPP
#define SENSOR_HPP
#include <string>

class Sensor{
    private:
        std::string _identificador;
    public:
        Sensor(std::string id);
        virtual ~Sensor();//tem que ser virtual, porque vai ser sobrescrito

        std::string getId() const;
        virtual void executarLeitura() =0;
};

#endif