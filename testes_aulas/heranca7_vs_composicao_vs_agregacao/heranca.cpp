//g++ heranca.cpp
//./programa.exe
#include <iostream>
#include <string>

//Casse pai
class Pessoa{
//privado: tranca tudo, para todos, só libera para o filho com set e get
//
    public: 
        std::string nome;//namespace std servem para o compilador entrender de qual classe estamos nos referindo. 
        void falar(){
            std::cout<<"Oi! Meu nome eh "<< nome <<"."<<std::endl;
        }
};

class Estudante : public Pessoa{
    public:
        int matricula;
        void estudar(){
            std::cout<<"Estudando! na biblioteca, matricula: "<< matricula <<std::endl;
        }

};

int main(){
    
    Estudante e;
    e.nome = "UUlucas";
    e.matricula = 2026108154;
    e.falar();
    e.estudar();

    return 0;
}