#include <iostream>
using namespace std;
int main() {   
 int *ptr_a = nullptr;
 ptr_a = new int;

 if (ptr_a == nullptr) {
    cout << "Memoria nao alocada!" << endl;
    exit(1);
 }
 *ptr_a = 90;

 cout << "Endereco de ptr_a: " << &ptr_a << endl;
 cout << "Valor de ptr_a: " << ptr_a << endl;
 cout << "Conteudo de ptr_a: " << *ptr_a << endl;

 delete ptr_a;

 return 0;
}