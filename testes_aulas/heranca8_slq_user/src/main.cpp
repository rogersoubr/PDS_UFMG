#include <iostream>
#include <string>
#include <sqlite3.h> // Inclui a biblioteca oficial do SQLite em C
#include "../include/Usuario.hpp"
#include "../include/Adm.hpp"

// Função de Callback: O SQLite chamará esta função de forma automática
// para cada linha (row) que for retornada quando executarmos um comando "SELECT".
int callback(void *NotUsed, int argc, char **argv, char **azColName) {
    // 'argc' é o número de colunas. O loop passa de coluna em coluna.
    for (int i = 0; i < argc; i++) {
        // Imprime o nome da coluna (azColName[i]) e o valor dela (argv[i]).
        // Se o valor for nulo no banco, imprime a palavra "NULL".
        std::cout << azColName[i] << ": " << (argv[i] ? argv[i] : "NULL") << "   ";
    }
    std::cout << "\n"; // Quebra a linha após mostrar todas as colunas daquele registro
    return 0;          // Retornar 0 indica ao SQLite que ele pode continuar lendo as próximas linhas
}

int main() {
    sqlite3 *db;         // Declara o ponteiro para a nossa estrutura de conexão do banco
    char *zErrMsg = 0;   // Ponteiro para armazenar mensagens de erro em texto do sqlite3_exec
    int rc;              // Variável inteira para capturar os códigos de retorno das funções (Return Code)

    // 1. Abre (ou cria) a conexão com o arquivo de banco de dados "meu_banco.db"
    rc = sqlite3_open("meu_banco.db", &db);
    if (rc) {
        // Se rc for diferente de 0 (SQLITE_OK), ocorreu um erro na abertura
        std::cerr << "Erro ao abrir o banco: " << sqlite3_errmsg(db) << "\n";
        return 1; // Fecha o programa indicando erro
    }

    // 2. Criação do script SQL exatamente igual ao fornecido por você.
    // Utilizamos o recurso R"(...)" (Raw String Literal do C++) para escrever o texto em múltiplas linhas sem precisar de barras.
    // Nota: Definimos IDs fixos temporários para testar as funções do Adm logo abaixo sem precisar varrer as hashes do banco.
    std::string sqlScript = R"(
        DROP TABLE IF EXISTS Adm;
        DROP TABLE IF EXISTS Usuario;

        CREATE TABLE Usuario (
            id TEXT PRIMARY KEY DEFAULT (lower(hex(randomblob(16)))),
            nome TEXT NOT NULL
        );

        INSERT INTO Usuario (id, nome) VALUES ("id_teste_1", "1_Usuario");
        INSERT INTO Usuario (id, nome) VALUES ("id_teste_2", "2_usuario");
        INSERT INTO Usuario (id, nome) VALUES ("id_teste_3", "3_usuario");

        CREATE TABLE Adm (
            id TEXT PRIMARY KEY DEFAULT (lower(hex(randomblob(16)))),
            User_id TEXT NOT NULL
        );
    )";

    // 3. Executa todo o script de criação e inserção de uma única vez.
    // sqlite3_exec é ideal aqui porque o script contém múltiplos comandos separados por ';'
    rc = sqlite3_exec(db, sqlScript.c_str(), nullptr, 0, &zErrMsg);
    if (rc != SQLITE_OK) {
        std::cerr << "Erro ao executar script inicial: " << zErrMsg << "\n";
        sqlite3_free(zErrMsg); // Libera a string de erro alocada pelo SQLite
    }

    // Exibe o estado do banco antes que o Administrador altere algo
    std::cout << "--- Banco antes das acoes do ADM ---\n";
    // Executa um SELECT e repassa a função 'callback' criada lá em cima para exibir o resultado na tela
    sqlite3_exec(db, "SELECT * FROM Usuario;", callback, 0, nullptr);

    // 4. Instanciamento do Administrador e teste de Herança no C++
    // Cria o objeto 'administrador' passando o Nome e o ID do Usuário Base vinculados à tabela Adm
    Adm administrador("Carlos_Admin", "id_admin_base");
    administrador.setAdmId("adm_zero_um"); // Define o ID próprio do registro de Administrador

    std::cout << "\n--- ADM Executando Alteracao e Delecao ---\n";
    
    // Ação 1 do Adm: Altera o nome do usuário que possui o ID "id_teste_1"
    administrador.alteraNomeUsuario(db, "id_teste_1", "Nome_Alterado_Pelo_Adm");

    // Ação 2 do Adm: Deleta completamente o usuário que possui o ID "id_teste_2"
    administrador.deletaUsuario(db, "id_teste_2");

    // Exibe o estado do banco após as alterações feitas pelo Administrador
    std::cout << "\n--- Banco DEPOIS das acoes do ADM ---\n";
    sqlite3_exec(db, "SELECT * FROM Usuario;", callback, 0, nullptr);

    // 5. Fecha de forma segura a conexão com o arquivo de banco de dados
    sqlite3_close(db);
    
    return 0; // Finaliza o programa com sucesso
}