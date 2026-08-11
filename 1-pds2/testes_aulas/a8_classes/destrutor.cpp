#include <iostream>

using namespace std;

class TestObject {

  int atributo;

  public:
    TestObject(int valor) : atributo(valor) {}

    ~TestObject() {
       cout << "~TestObject" << atributo << endl;
    }
};

int main() {

  cout << "Antes" << endl;

  int i = 0;
  while(i<5) {
    TestObject o(i);
    i++;
  }

  cout << "Depois" << endl;

  return 0;

}