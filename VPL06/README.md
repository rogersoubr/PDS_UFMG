## O programa é simples, estruturado com a hierarquia de diretórios abaixo:
~~~~txt
. programa
├── Makefile
├── build/
│  └── [arquivos.o]
├── include/
│  └── Circulo.hpp
│  └── Ponto.hpp
└── src/
│  └── entidades/
│    └── Circulo.cpp
│    └── Ponto.cpp
│  └── main.cpp
~~~~

O seu objetivo é unicamente escrever um arquivo Makefile para esse programa, seguindo as seguintes orientações:

Todas as entidades e o arquivo main devem ser compilados individualmente e os arquivos *.o resultantes devem ser salvos no diretório /build/

Em seguida, os arquivos compilados devem ser linkados em um executável resultante chamado vpl_execution, que deve ser salvo no diretório raiz da aplicação.
Você pode copiar o arquivo zipado do projeto aqui para poder fazer o desenvolvimento localmente.

Atenção, a formatação (tabs, espaços, etc) do arquivo Makefile impacta no funcionamento. Uma sugestão é fazer as regras no VSCode/Notepad e copiar para o Moodle.

1. Compilar entidade e main em .o 
2. colocar .o em build
3. todos os arquivos compilados decem ir pra vpl_execution 

    * vpl_execution fica na raiz 