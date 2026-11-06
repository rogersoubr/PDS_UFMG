#include <iostream>
#include <vector>
#include <memory>
#include <stdexcept>

class Sensor{
    public:
        virtual double lerValor() =0;
        virtual ~Sensor(){
            std::cout<<"Destrutor ABSTRATA Sensor"<<std::endl;
        }
};

class SensorTemperatura: public Sensor{
    private:
        double _temperatura;
    public:
        SensorTemperatura(double temp): _temperatura(temp){}
        double lerValor() override{
            if(_temperatura < -50.0 || _temperatura >150.0){
                throw std::out_of_range("Erro: Leitura fora do limite real fisico");
            }
            return _temperatura;
        }
};

int main(){
    std::vector< std::unique_ptr<Sensor>> sensores;//vector de ponteiros
    sensores.push_back( std::unique_ptr<Sensor>(new SensorTemperatura(25.5)) );//colocando dentro do vector, um novo ponteiro apra um novo objeto 
    sensores.push_back( std::unique_ptr<Sensor>(new SensorTemperatura(200.0)) );//tem que cair na ececao

    try{
        for(const auto &s: sensores){
            std::cout << "Leitura: " << s->lerValor() << " C" << std::endl;
        }
    }catch(const std::exception& e){
        std::cout<<"Caiu na ececao: "<< e.what() <<std::endl;
    }

    return 0;
}