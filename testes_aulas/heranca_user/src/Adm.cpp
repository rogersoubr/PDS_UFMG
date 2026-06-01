#include "../include/Adm.hpp"

// Construtor da classe Adm:
// Recebe o 'nome' e o '_userId' (que representa a chave estrangeira do banco).
// O 'nome' é repassado diretamente para o construtor da classe base (Usuario::Usuario(nome)).
// O 'userId' próprio desta classe é inicializado através da lista de inicialização (: userId(_userId)).
Adm::Adm(const std::string nome, const std::string _userId) 
    : Usuario(nome), userId(_userId) {}

// Destrutor da classe Adm:
// Como não alocamos memória dinamicamente com 'new' aqui, ele pode ficar vazio.
Adm::~Adm() {}

// Getter para o ID do Administrador (admId)
std::string Adm::getAdmId() { 
    return this->admId; // Retorna o ID específico da tabela Adm
}

// Setter para o ID do Administrador (admId)
void Adm::setAdmId(std::string _admId) { 
    this->admId = _admId; // Atribui o valor passado ao atributo da classe
}

// Getter para o ID do Usuário vinculado (userId / Chave Estrangeira)
std::string Adm::getUserId() {
    return this->userId; // Retorna o ID do usuário que este Adm aponta
}

// Setter para o ID do Usuário vinculado
void Adm::setUserId(std::string _userId) {
    this->userId = _userId; // Atualiza o ID do usuário vinculado
}

// Método para exibir as informações do Administrador no terminal
void Adm::exibir() {
    // Imprime o ID do Adm, a chave estrangeira (User_Id) e o Nome (buscado via getNome() da classe base)
    std::cout << "Administrador -> Adm_ID: " << this->admId 
              << " | User_Id (FK): " << this->userId
              << " | Nome: " << this->getNome() << "\n";
}

// --- MÉTODOS DE MANIPULAÇÃO DO BANCO DE DADOS ---

// Método para deletar um usuário do banco usando o ID
bool Adm::deletaUsuario(sqlite3* db, std::string user_id) {
    // Define a query SQL. O ponto de interrogação (?) é um marcador (placeholder) seguro.
    std::string sql = "DELETE FROM Usuario WHERE id = ?;";
    
    // Declara um ponteiro para a estrutura que armazenará a query compilada (statement).
    sqlite3_stmt* stmt;

    // Passo 1: Prepara/compila o comando SQL dentro do motor do SQLite.
    // Parâmetros: conexão do banco, string SQL, tamanho da string (-1 indica ler até o \0),
    // ponteiro do statement que receberá o resultado, e ponteiro para resto da string (nullptr).
    if (sqlite3_prepare_v2(db, sql.c_str(), -1, &stmt, nullptr) != SQLITE_OK) {
        // Se a sintaxe estiver errada ou a tabela não existir, exibe o erro e aborta.
        std::cerr << "Erro ao preparar o DELETE: " << sqlite3_errmsg(db) << "\n";
        return false;
    }

    // Passo 2: Vincula (bind) a string 'user_id' no lugar do primeiro ponto de interrogação (índice 1).
    // SQLITE_TRANSIENT avisa ao SQLite para fazer uma cópia interna do texto na memória.
    sqlite3_bind_text(stmt, 1, user_id.c_str(), -1, SQLITE_TRANSIENT);

    // Passo 3: Executa o comando que foi preparado e preenchido.
    int rc = sqlite3_step(stmt);

    // Passo 4: Sempre destrói o statement para liberar a memória alocada por ele.
    sqlite3_finalize(stmt);

    // Verifica se a execução foi finalizada com sucesso (SQLITE_DONE)
    if (rc == SQLITE_DONE) {
        std::cout << "[Sucesso] Usuario com ID " << user_id << " foi deletado.\n";
        return true;
    } else {
        std::cerr << "Erro ao deletar usuario.\n";
        return false;
    }
}

// Método para alterar o nome de um usuário no banco
bool Adm::alteraNomeUsuario(sqlite3* db, std::string user_id, std::string novo_nome) {
    // Define a query SQL. O primeiro '?' será o nome, o segundo '?' será o ID de busca.
    std::string sql = "UPDATE Usuario SET nome = ? WHERE id = ?;";
    
    // Declara o ponteiro para o objeto de instrução preparada (statement).
    sqlite3_stmt* stmt;

    // Passo 1: Compila a query de UPDATE no SQLite
    if (sqlite3_prepare_v2(db, sql.c_str(), -1, &stmt, nullptr) != SQLITE_OK) {
        std::cerr << "Erro ao preparar o UPDATE: " << sqlite3_errmsg(db) << "\n";
        return false;
    }

    // Passo 2: Vincula as variáveis aos respectivos pontos de interrogação por ordem
    sqlite3_bind_text(stmt, 1, novo_nome.c_str(), -1, SQLITE_TRANSIENT); // Substitui o 1º '?' por novo_nome
    sqlite3_bind_text(stmt, 2, user_id.c_str(), -1, SQLITE_TRANSIENT);  // Substitui o 2º '?' por user_id

    // Passo 3: Executa o comando de atualização no banco de dados
    int rc = sqlite3_step(stmt);

    // Passo 4: Libera a memória do objeto statement
    sqlite3_finalize(stmt);

    // Verifica se o UPDATE foi concluído com sucesso
    if (rc == SQLITE_DONE) {
        std::cout << "[Sucesso] Nome do usuario " << user_id << " alterado para: " << novo_nome << "\n";
        return true;
    } else {
        std::cerr << "Erro ao alterar nome do usuario.\n";
        return false;
    }
}