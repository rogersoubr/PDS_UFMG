#ifndef CARRO_HPP
#define CARRO_HPP
#include "../include/Motor.hpp"
#include <string>

class Carro {
    private:
        Motor motor;
        std::string nome;
        std::string cor;
        int ano;
        int num_portas;
        std::string tipo_gasolina;

    public:
        Carro(std::string nome, std::string cor, int ano, int num_portas, std::string tipo_gasolina);

        virtual void acelerar();
        virtual void frear();

        std::string getNome();
        std::string getCor();
        int getAno();
        int getNum_portas();
        std::string getTipo_gasolina();


        void setNome(std::string _nome);
        void  setCor(std::string _cor);
        void  setAno(int _ano);
        void  setNum_portas(int _num_portas);
        void setTipo_gasolina(std::string _tipo_gasolina);

    private:
        void acionar_motor();
        void acionar_discos_freio();
};

#endif // CARRO_HPP

