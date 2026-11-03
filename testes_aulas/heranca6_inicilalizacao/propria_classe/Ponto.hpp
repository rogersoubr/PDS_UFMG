#ifndef PONTO_HPP
#define PONTO_HPP

class Ponto{
    private:
        int _x;
        const int _id;//todo const que não tem valor, tem que ser inicializado na lista de inicialização
    public:
        Ponto(int x, int id);
        void exibir() const;
};

#endif