#include <iostream>

class Base{
    public:
        Base(){
            std::cout<<"1 constutor Base"<<std::endl;
        }
        virtual ~Base(){//pode ser especificada, quem cuida disso é o compilador em uma tabela de endereços (VMT)
            //Sem virtual, daria static dispatch, deletando somente a classe base
            std::cout<<"4 destrutor Base"<<std::endl;
        }
};

class Derivada: public Base{
    public:
        Derivada(){
            std::cout<<"2 constutor Base"<<std::endl;
        }
        //um destrutor override está especificando o destrutor da classe base
        ~Derivada() override{
            std::cout<<"3 destrutor Base"<<std::endl;
        }
};

int main(){
    //upcasting (converte a base para a derivada):
    Base* ptr = new Derivada();//dynamic dispatch = o programa resoolve como derivada em tempo de execução). Declaro um objeto assim, quando vou usar algo da classe base que tem polimorfismo na derivada
    delete ptr;

    return 0;
}