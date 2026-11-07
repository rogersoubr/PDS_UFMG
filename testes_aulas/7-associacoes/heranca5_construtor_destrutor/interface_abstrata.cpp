#include <iostream>

//INTERFACE/CLASSE ABSTRATA
class Iimprimivel{
    public: 
        virtual void imprimir()=0; //métodos virtuais puros = somente é sobrescrito
        virtual ~Iimprimivel() = default;
};

class Relatorio: public Iimprimivel{
    public:
        void imprimir() override{
            std::cout << "Imprimindo relatório de vendas..." << std::endl;
        }
};

int main(){
    //Iimprimivel obj; = VAI DAR ERRRO, NÃO PODE INSTANCIAR ABSTRATAS

    Iimprimivel* doc = new Relatorio;
    doc -> imprimir();
    delete doc;

    return 0;
}