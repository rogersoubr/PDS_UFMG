#include <iostream>
class CoffeeMachine{
    public: 
        virtual void makeCoffee(){
            std::cout<<"Fazendo cafe NORMAL"<<std::endl;
        }
        virtual ~CoffeeMachine()= default;
};

class PremiumCoffeMachine: public CoffeeMachine{
    public: 
        void makeCoffee() override { 
            std::cout<< "Fazendo cappuccino PREMIUM "<<std::endl; 
        }
};

// Aceita qualquer subclasse (LSP) 
void servirCafe(CoffeeMachine* cm) {
    cm->makeCoffee();
}

int main(){
    CoffeeMachine basica;
    PremiumCoffeMachine premium;

    servirCafe(&basica);
    servirCafe(&premium);

    return 0;
}