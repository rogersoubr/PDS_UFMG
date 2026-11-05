// NÃO ALTERE ESSA LINHA
//#include "avaliacao_basica_excecoes.hpp"
#include "LimitedQueue.hpp"
#include "Exceptions.hpp"
#include <iostream>

int main() {
    
    LimitedQueue* q = nullptr;//ponteiro para a fila que comeca nulo

    char cmd;//variavel para guardar o comando lido, input

    //vai ler os comandos ate o fim do stream
    while (std::cin >> cmd) {
        //TENTA executar cada comando
        try {
            //cmd de inicializar fila
            if (cmd == 'i') {
                
                int size;//guardar o tamanho
                std::cin >> size;

                //se ja tinha uma fila apaga
                if (q != nullptr) {
                    //libera a memoria
                    delete q;
                }
                //crianod a fila com o tamanho
                q = new LimitedQueue(size);
            }
            //cmd de inserir
            else if (cmd == 'p') {
                //var do valor
                int val;
                std::cin >> val;
                //a fila existe, coloca nela
                if (q != nullptr) q->push_back(val);
            }
            //cmd de retirar o primeiro
            else if (cmd == 'o') {
                //tira o da frente
                if (q != nullptr) q->pop_front();
            }
            //cmd de imprimir o primeiro
            else if (cmd == 'f') {
                //imprime
                if (q != nullptr) std::cout << q->front() << std::endl;
            }
            //cmnd para imprimir o ultimo
            else if (cmd == 'l') {
                //imprime
                if (q != nullptr) std::cout << q->back() << std::endl;
            }
            //cmd de imprimir a fila inteira
            else if (cmd == 'm') {
                //chama o print
                if (q != nullptr) q->print();
            }
            //cmd de achar um elemento
            else if (cmd == 'd') {
                
                int val;//var para o valor a buscar
                std::cin >> val;

                //motra a posicao achada
                if (q != nullptr) std::cout << q->find(val) << std::endl;
            }
            //comando de avaliacao
            else if (cmd == 'b') {
                //chama a funcao requerida
                //avaliacao_basica();
            }
        }
        //CASO NAO
        catch (InvalidSizeException& e) {
            //retorno do nome do erro
            std::cout << "Excecao: " << e.name << std::endl;
        }
        //se der erro de cheio
        catch (QueueFullException& e) {
            std::cout << "Excecao: " << e.name << std::endl;
        }
        //se der erro de vazio
        catch (QueueEmptyException& e) {
            std::cout << "Excecao: " << e.name << std::endl;
        }
        //se der erro de nao achar
        catch (ItemNotFoundException& e) {
            std::cout << "Excecao: " << e.name << std::endl;
        }
    }

    //limpeza
    if (q != nullptr) {
        //liberando a fila criada
        delete q;
    }

    return 0;
}
