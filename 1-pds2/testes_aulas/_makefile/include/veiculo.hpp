//especificação de uma classe abstrata carro (o máximo de modularização do projeto)
#ifndef MOTO_H
#define MOTO_H

namespace Moto {

    class MotoAbstrata{
        public:
            virtual void start() = 0;
            virtual void drive() = 0;
            virtual void stop() = 0;
    };
}
#endif