#include <iostream>
#include <string>
#include <vector>

//COMPOSIÇÃO
class Processador{
    private:
        std::string modelo;
        double megaracingGhz;
    public:
        Processador(std::string mod, double ghz): modelo(mod), megaracingGhz(ghz){}
        void exibirEspecificacoes()const{
            std::cout<<"CPU: "<<modelo<<" @ "<<megaracingGhz<<"GHz";
        }
};

//ABSTRATA
class DispositivoEletronico{
    protected:
        std::string marca;
        Processador cpu;//composicao
    public:
        DispositivoEletronico(std::string m, std::string cpuMod, double ghz): 
        marca(m), cpu(cpuMod, ghz){}//LISTA DE INICIALIZAÇÃO COMPOSICAO
        virtual ~DispositivoEletronico(){
            std::cout << "[Destrutor ABSTRATA] Desalocando Dispositivo " << marca << std::endl;
        }
        //virtuais puros:
        virtual void ligar() =0;
        virtual void exibirStatus() const =0;
};

//SUBCLASSES 1
class Smartphone : public DispositivoEletronico{
    private:
        int capacidadeBateriamAh;
    public:
        Smartphone(std::string m, std::string cpuMod, double ghz, int bat): DispositivoEletronico(m, cpuMod, ghz), capacidadeBateriamAh(bat){};
        ~Smartphone() override{
            std::cout<<"[Destruidor DERIVADA 1] Destuindo Smartphone."<<std::endl;
        };
        void ligar() override { 
            std::cout << "Smartphone " << marca << " inicializando tela touch..." << std::endl; 
        } 
        //const para evitar probela do diamante
        void exibirStatus() const override { 
            std::cout << "Smartphone Marca: " << marca << " | Bateria: " << capacidadeBateriamAh << "mAh | "; cpu.exibirEspecificacoes(); std::cout << std::endl; 
        }
};
//SUBCLASSES 2
class Notebook: public DispositivoEletronico{
    private:
        bool possuiGpuDedicada;
    public:
        Notebook(std::string m, std::string cpuMod, double ghz, bool gpu):
            DispositivoEletronico(m, cpuMod, ghz), possuiGpuDedicada(gpu){}

        ~Notebook() override{
            std::cout<<"[Destruidor DERIVADA 2] Destuindo Smartphone."<<std::endl;
        }
        //na classe derivada, tenho que implementar todos os membros virtuais da abstrata
        void ligar() override { 
            std::cout << "Notebook " << marca << " checando coolers e dando boot..." << std::endl; 
        } 
        void exibirStatus() const override { 
            std::cout << "Notebook Marca: " << marca << " | GPU Dedicada: " << (possuiGpuDedicada ? "Sim" : "Não") << " | "; cpu.exibirEspecificacoes(); std::cout << std::endl; 
        }

};

int main(){
    //vector
    std::vector<DispositivoEletronico*> laboratorio;//ponteiro para um dispositivo eletronico

    laboratorio.push_back(new Smartphone("Apple", "A16 Bionic", 3.46, 4323));
    laboratorio.push_back(new Notebook("Dell", "Intel i9-13900H", 5.4, true));
    std::cout << "=== TESTANDO POLIMORFISMO E COMPOSICAOO ==="<< std::endl;

    for(const auto & dev : laboratorio){
        dev->ligar();
        dev->exibirStatus();
        std::cout<<"---------------------------" << std::endl;
    }
    std::cout<<"    DESALOCANDO MEMORIA CORRETAMENTE    "<<std::endl;
    for(auto & dev : laboratorio){
        delete dev;
    }
    laboratorio.clear();

    return 0;

}

