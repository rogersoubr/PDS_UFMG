#ifndef ADM_HPP
#define ADM_HPP

#include "Usuario.hpp"
#include <sqlite3.h> // Necessário para receber o ponteiro de conexão 'sqlite3*'

class Adm : public Usuario {
    private:
        std::string admId;
        std::string userId; // Chave estrangeira que conecta ao Usuário no banco

    public:
        Adm(const std::string nome = "", const std::string _userId = "");
        ~Adm() override;

        std::string getAdmId();
        void setAdmId(std::string _admId);

        std::string getUserId();
        void setUserId(std::string _userId);

        void exibir() override; // Sobrescreve o método exibir da classe base

        // Métodos de manipulação de dados
        bool deletaUsuario(sqlite3* db, std::string user_id);
        bool alteraNomeUsuario(sqlite3* db, std::string user_id, std::string novo_nome);
};

#endif