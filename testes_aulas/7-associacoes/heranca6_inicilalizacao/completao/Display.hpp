#ifndef DISPLAY_HPP 
#define DISPLAY_HPP
#include <string>

class Display{
    private:
        std::string _modelo;
    public:
        Display(std::string modelo);
        void mostrarMensagem(std::string mensagem) const;
};

#endif