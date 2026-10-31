//rogersoubr
#ifndef ENERGIA_HPP
#define ENERGIA_HPP

class Energia {
    private:
        int carga_;
    public:
        Energia(int carga_inicial);
        int getCarga() const;//bool para int -> erro semantico
        void consumir(int quantidade);
};

#endif
