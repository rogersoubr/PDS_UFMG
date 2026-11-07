#include <iostream>

class Motor{
    public:
        void roncar(){
            std::cout<<"Vroom! Motor V8 em funcionamento."<<std::endl;
        }
};

class Carro{
    private:
        Motor motor;
    public:
        void ligarCarro(){
            motor.roncar();
        }
};

int main(){

    Carro pretao;
    pretao.ligarCarro();
    return 0;

    return 0;
}