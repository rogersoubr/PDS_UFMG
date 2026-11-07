#include <iostream>
#include <string>
#include <set>

class Aluno{
    public:
        int matricula;
        std::string nome;
};

class ComparaAluno{
    public: 
    //não entendi
        bool operator() (const Aluno& a1, const Aluno& a2) const {
            return a1.matricula < a2.matricula;//não entendi
        }
};

int main(){
    std::set<Aluno, ComparaAluno> alunos;//todo set usa std::pair<iterator, bool> para vericar se existe no conjunto
    Aluno a1{20201, "Roger"};
    Aluno a2{20202, "Thais"};
    Aluno a3{20202, "Thais duplicada"};//tem a mesma catricula

    auto res1 = alunos.insert(a1);
    auto res2 = alunos.insert(a2);
    auto res3 = alunos.insert(a3);

    std::cout<<"Insercao a1(Roger): "<<(res1.second? "Sucesso": "falha")<<std::endl;//de onde veio esse second?
    std::cout<<"Insercao a3(Duplicada): "<<(res3.second? "Sucesso": "falha")<<std::endl;

    std::cout<<"\n======ALUNOS CADASTRADOS======="<<std::endl;
    for(const auto& a: alunos){//não entendi
        std::cout<<"\tMatricula: "<<a.matricula<<" | Nome: "<<a.nome<<std::endl;
    }

    return 0;
}