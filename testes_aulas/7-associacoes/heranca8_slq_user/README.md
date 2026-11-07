# O que esse progragam faz?

**Cria um usuario no TAD user**
**O TAD adm pode alterar e excluir o usuario criado**

# Configuração

1. Baixar a versão mais recente de SQLite 
* `cd data`
* `sudo apt update`
* `sudo apt install sqlite3 libsqlite3-dev`

2. Entrar em /data e Criar banco de dados SQLite conforme projeto
* `sqlite3 banco.db`
* `sqlite3 banco.db < data/script_banco_dados.sql`

3. Testar as tabelas
* `.tables`
* `.schema Usuario`

4. Colocar algum usuario como administrador (De preferência o 1)
*  `sqlite3 banco.db < 'insert into Adm (user_id) values ("`**PEGAR ID DO USUARIO**`");`


# TAD - Tipos Abstratos de dados

### User
* uuid
* nome
* Cria um novo usuário
* salva no banco

### Adm
* id de adm
* Cria um novo Adm
* Coloca o id ao executar o programa, vai poder editar como quiser algum usuario
* Salva a alteração no banco

# Métodos do SQLite3

| Método / Função | Objetivo Prático | Retorno Comum |
| :--- | :--- | :--- |
| **`sqlite3_open(const char* filename, sqlite3** ppDb)`** | Abre uma conexão com o arquivo de banco de dados. Se o arquivo não existir, cria um novo automaticamente. | `SQLITE_OK` (0) se sucesso. |
| **`sqlite3_exec(sqlite3* db, const char* sql, callback, void* arg, char** errmsg)`** | Executa comandos SQL diretos. É excelente para scripts iniciais com múltiplas instruções separadas por ponto e vírgula (ex: `DROP`, `CREATE`). | `SQLITE_OK` (0) se sucesso. |
| **`sqlite3_prepare_v2(sqlite3* db, const char* sql, int nByte, sqlite3_stmt** ppStmt, ...)`** | **Compila** a estrutura da query SQL (com marcadores `?`) gerando um objeto `sqlite3_stmt`. Protege o sistema contra ataques de SQL Injection. | `SQLITE_OK` (0) se a sintaxe estiver correta. |
| **`sqlite3_bind_text(sqlite3_stmt* stmt, int index, const char* value, int nBytes, ...)`** | Injeta de forma segura um texto (variável C++) no lugar de um ponto de interrogação (`?`) específico dentro da query preparada. | `SQLITE_OK` (0) se o vínculo der certo. |
| **`sqlite3_step(sqlite3_stmt* stmt)`** | Executa a query que foi previamente preparada e preenchida. É o comando que efetivamente aplica as alterações ou busca os dados. | `SQLITE_DONE` para comandos de escrita/deleção; `SQLITE_ROW` para consultas. |
| **`sqlite3_finalize(sqlite3_stmt* stmt)`** | Destrói o objeto de instrução preparada (`stmt`) e limpa a memória RAM alocada por ele. Evita vazamentos de memória (*memory leaks*). | `SQLITE_OK` (0). |
| **`sqlite3_errmsg(sqlite3* db)`** | Retorna uma string de texto (`const char*`) descrevendo em inglês o último erro que aconteceu na conexão informada. | Texto descritivo do erro (ex: *"no such table"*). |
| **`sqlite3_close(sqlite3* db)`** | Fecha a conexão ativa com o arquivo `.db` e garante que todas as alterações pendentes sejam salvas no disco. | `SQLITE_OK` (0) se fechar corretamente. |