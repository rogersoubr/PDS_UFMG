#include "ClasseTeste.hpp"

ClasseTeste::ClasseTeste() : ClasseTeste(0.0, "") {}
ClasseTeste::ClasseTeste(double a1, string a2) : _atributo1(a1), _atributo2(a2) {}
void ClasseTeste::metodoA() {
 cout << _atributo1 << "\t" << _atributo2 << endl;
}
void ClasseTeste::metodoB(double i) {
 _atributo1 += i;
}