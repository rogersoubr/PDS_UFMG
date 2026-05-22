DROP TABLE IF EXISTS Usuario;
DROP TABLE IF EXISTS Adm;

CREATE TABLE Usuario (
    id TEXT PRIMARY KEY DEFAULT (lower(hex(randomblob(16)))),
    nome TEXT NOT NULL
);

insert into Usuario (nome) values
    ("1_Usuario"),
    ("2_usuario"),
    ("3_usuario");

CREATE TABLE Adm (
    id TEXT PRIMARY KEY DEFAULT (lower(hex(randomblob(16)))),
    User_id TEXT NOT NULL
);

select * from Usuario;