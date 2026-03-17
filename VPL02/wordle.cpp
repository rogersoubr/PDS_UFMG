#include <iostream>
#include <fstream>
#include <sstream>

using namespace std; //esse danado que faz nao precisar usar std::

int main(){
    string linha;
    ifstream in("palavras.txt", fstream::in);
    if(!in.is_open()){
        return 1;
    }
    getline(in, linha);
    cout << linha <<endl;

    in.close();

    return 0;
}