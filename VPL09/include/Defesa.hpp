class Defesa{
    private:
        int _id;
        double _energia;

    protected:
        void _consumirEnergia(double qtd);//Subtrai qtd da _energia. Se o valor resultante for menor que 0, deve ser fixado em 0

    public:
        virtual void atacar(double &danoAcumulado) = 0;//Virtual Puro
        ~Defesa();
};

class BaseMilitar{
    private:
        Defesa* _defesas[100];
        int _qtdAtual;
    public:
        void adicionarDefesa(Defesa* d);//Adiciona o ponteiro ao array e incrementa o contador.
        void defender(double &saudeInimigo);//Percorre as defesas cadastradas. Cada uma ataca uma vez. O dano total acumulado no turno deve ser subtraído da saudeInimigo. Ao final, imprime: Saude Inimigo: X.XX (com duas casas decimais)
        ~BaseMilitar();//percorrer o array e deletar cada ponteiro individualmente para liberar a memória

};