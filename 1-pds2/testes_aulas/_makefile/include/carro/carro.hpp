//especificação de uma classe abstrata carro (o máximo de modularização do projeto)
#ifndef CARRO_H
#define CARRO_H

namespace Carro {

    class CarroAbstrato{
        public:
            virtual void start() = 0;
            virtual void drive() = 0;
            virtual void stop() = 0;
    };
}
#endif