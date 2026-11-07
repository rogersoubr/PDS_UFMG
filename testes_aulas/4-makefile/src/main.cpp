#include "ferrari.hpp"
#include "ford.hpp"

using namespace Carro;

int main(){

    Ferrari ferrari;//sem usar o namespace era Carro::Ferrari ferrari
    ferrari.drive();
    ferrari.start();
    ferrari.stop();

    Ford ford;
    ford.stop();
    ford.start();
    ford.drive();
    

    return 0;
}