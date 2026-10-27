#include <iostream>

class ClassePai{
    private:
        int segredo_todos=1;//somente a própria classe acessa diretamente, derivadas precisam ter acesso ao seus get e set
    protected: 
        int somente_derivadas=2;//somente derivadas acessam diretamente
    public:
        int aberto_todos=3; //todos podem acessar diretamente

};

class ClasseFilho: public ClassePai{
    public: 
        void testarAcesso(){
            //std::cout<<segredo_todos<<std::endl; //erro
            std::cout<<"Acesso protegido (somente derivadas): "<< somente_derivadas <<std::endl;
            std::cout<<"Aberto a todos: "<< aberto_todos <<std::endl;
        }
};

int main(){
    ClasseFilho d;
    d.testarAcesso();
    // std::cout<< d.somente_derivadas; //erro, fora da hierarquia nao acessa protegido
}