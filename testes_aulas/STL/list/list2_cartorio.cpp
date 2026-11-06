#include <iostream>
#include <list>
#include <memory>
#include <string>

class Documento{
    public:
        std::string titulo;
        Documento(std::string t): titulo(t){}
        virtual void imprimir() const =0;
        virtual ~Documento(){
            std::cout<<"Destrutor ABSTRATA [Documento] "<<titulo<<std::endl;
        }
};

class Relatorio : public Documento{
    public:
        Relatorio(std::string t): Documento(t){}
        void imprimir() const override{
            std::cout <<"Relatório em PDF: " <<titulo <<std::endl;
        }
};

class Foto : public Documento{
    public:
        Foto(std::string t) : Documento(t){}
        void imprimir() const override{
            std::cout << "Foto em Alta Resolução: " << titulo << std::endl;
        }
};

int main(){
    std::list< std::unique_ptr<Documento>> filaImpressao;

    filaImpressao.push_back( std::unique_ptr<Documento>(new Relatorio("Financeiro.pdf")) );
    filaImpressao.push_back( std::unique_ptr<Documento>(new Foto("Ferias.jpg")) );
    filaImpressao.push_back( std::unique_ptr<Documento>(new Relatorio("Urgente_prioridade.pdf")) );

    std::cout<<"\n====FILA DE PROCESSOS===="<<std::endl;
    for(const auto &documento : filaImpressao){
        documento->imprimir();
    }
    std::cout << "\n====DELETANDO PRIMEIRO====" << std::endl;
    filaImpressao.pop_front();

    std::cout << "\n====ACABOU====" << std::endl;

    return 0;
}