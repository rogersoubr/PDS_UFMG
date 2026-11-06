#include <iostream>
#include <memory>

class Recurso{
    public:
        Recurso(){
                std::cout<<"Recurso Alocado!"<<std::endl;
        }
        ~Recurso(){
            std::cout<<"Recurso Desalocado automaticamente!"<<std::endl;
        }
        void usar(){
            std::cout<< "Usando recurso..." << std::endl; 
        }
};

int main(){
    //abrindo escopo que funciona o unique_ptr
    {
        std::unique_ptr<Recurso> ptr(new Recurso);
        ptr->usar();
    }
    //acaba o escopo, desaloca sozinho
    std::cout << "Fim da main." << std::endl;

    return 0;
}