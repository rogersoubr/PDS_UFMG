#ifndef ENERGIA_HPP
#define ENERGIA_HPP

class Energia {
private:
    int carga_;
public:
    Energia(int carga_inicial);
    bool getCarga() const;
    void consumir(int quantidade);
};

#endif