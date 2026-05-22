# O que esse progragam faz?

**Cria um usuario no TAD user**
**O TAD adm pode alterar e excluir o usuario criado**

# Configuração

    1. Baixar a versão mais recente de SQLite 

        * sudo apt update

        * sudo apt install sqlite3 libsqlite3-dev

    2. Criar banco de dados SQLite conforme projeto

        * sqlite3 banco.db

        * sqlite3 banco.db < docs/script_banco_dados.sql

    3. Testar as tabelas

        * .tables

        * -- Mostra a estrutura da tabela
        .schema Usuario


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
