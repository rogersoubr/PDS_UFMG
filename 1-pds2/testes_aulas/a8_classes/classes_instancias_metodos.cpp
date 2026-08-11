#include <iostream>
#include <vector>

using namespace std;

class Aluno;
class Curso {
 public:
 string nome;
 vector<Aluno*> alunos;
 void inserir_aluno(Aluno *aluno) {
 this->alunos.push_back(aluno);
 }
};
class Aluno {
 public:
 int matricula;
 string nome;
 void fazer_inscricao(Curso &curso) {
 curso.inserir_aluno(this);
 }
};


int main() {
 Curso curso;
 curso.nome = "PDS2";
 Aluno aluno;
 aluno.matricula = 2020111222;
 aluno.nome = "Douglas";
 aluno.fazer_inscricao(curso);
 cout << "Alunos de " << curso.nome << ": " << endl;
 for (Aluno* aluno : curso.alunos)
 cout << aluno->matricula << "\t" << aluno->nome << endl;
 return 0;
}