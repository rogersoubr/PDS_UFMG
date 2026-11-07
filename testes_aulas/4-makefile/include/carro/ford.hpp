#ifndef FORD_H
#define FORD_H

#include "carro.hpp"
namespace Carro{
    class Ford: public CarroAbstrato{
        public:
            void start();
            void drive();
            void stop();
    };
}

#endif