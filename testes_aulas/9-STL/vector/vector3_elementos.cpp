#include <iostream>
#include <vector>
#include <string>

class Elemento {
    public:
        std::string _nome;

        Elemento(std::string n): _nome(n){}
        virtual void exibir() const{
            std::cout<<"Elemento: "<< _nome <<std::endl;
        }
        virtual ~Elemento(){}
};

class ElementoEspecializado: public Elemento{
    public:
        int _prioridade;

        ElementoEspecializado(std::string n, int p):Elemento(n), _prioridade(p){}
        void exibir() const override{
            std::cout<<"Especial: "<<_nome<<"(Prioridade: "<<_prioridade<<" )"<<std::endl;
        }
};

int main(){
    std::vector<Elemento*>lista;//armazena ponteiros para objeto que vai ser especializado (ponteiro para objeto polimorfico)
    lista.push_back(new Elemento("Item Comum"));//a lista tá na stck, cada elemento está no heap

    lista.push_back(new ElementoEspecializado("Item VIP", 1));

    std::cout<<"\n=====LISTA INICIAL======\n";
    for(size_t i=0; i< lista.size(); i++){
        lista[i]->exibir();//sempre que é um local de memória usar ->
    }

    //liberando memoria
    lista.erase(lista.begin());

    std::cout<<"\nDepois de remover\n";
    for(size_t i =0; i< lista.size(); i++){
        lista[i]->exibir();
    }
    
    // Limpeza de memória restante 
    for (Elemento* elem : lista){//voltar depois
         delete elem; //deleta cada elemento alocado no heap
    }

    return 0;
}