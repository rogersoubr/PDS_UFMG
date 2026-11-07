#include <iostream>
class Animal{
    public:
        virtual void falar()const {
            std::cout<<"Barulho do minecraft"<<std::endl;
        }
        virtual ~Animal() = default;
};
class Cachorro : public Animal{
    public:
        void falar() const override{
            std::cout<<"AU AU"<<std::endl;
        }
};
class Gato : public Animal{
    public:
        void falar() const override{
            std::cout<<"MIAUUUUUUUUUUUUUUU"<<std::endl;
        }
};
class Pato : public Animal{
    public:
        void falar() const override{
            std::cout<<"Quack"<<std::endl;
        }
};
int main(){
    Animal *ptr = new Cachorro();
    ptr->falar();
    delete ptr;
    return 0;
}