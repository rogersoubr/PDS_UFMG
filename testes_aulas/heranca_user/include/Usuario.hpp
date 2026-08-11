#ifndef USUARIO_HPP
#define USUARIO_HPP

#include <iostream>
#include <string>

class Usuario {
    private:
        std::string id;
        std::string nome;

    public:
        Usuario(const std::string nome = "");
        virtual ~Usuario(); // Virtual para destruição polimórfica segura

        std::string getId();
        std::string getNome();

        void setId(std::string _id);
        void setNome(std::string _nome);

        virtual void exibir(); // Método virtual para polimorfismo
};

#endif