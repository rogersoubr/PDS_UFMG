COMPILADORCPP = g++#falando qual é o compilador
CPPFLAGS = -Wall -Wextra -Iinclude

#LOCAIS DE PASTAS----------------------------
PASTA_SRC_ENTIDADES = src/entidades
PASTA_SRC = src
PASTA_BUILD = build
#TEM QUE DECLARAR O CAMINHO DAS PASTAS (e arquivos) EM UMA SÓ VARIAVEL

#LOCAIS DE ARQUIVOS--------------------------
MAIN_SRC = $(PASTA_SRC)/main.cpp
PONTO_SRC = $(PASTA_SRC_ENTIDADES)/Ponto.cpp
CIRCULO_SRC = $(PASTA_SRC_ENTIDADES)/Circulo.cpp
#LOCAL DE ARQUIVOS *.0
MAIN_O = $(PASTA_BUILD)/main.o
PONTO_O = $(PASTA_BUILD)/Ponto.o
CIRCULO_O = $(PASTA_BUILD)/Circulo.o

COMPILADOS = $(MAIN_O) $(PONTO_O) $(CIRCULO_O)

#esse é o arquivo que está complando o código
TARGET = programa

#DEFINE COMO ALVO PRINCIPAL DE COMPILAÇÃO O TARGET (tem o caminho dele)
all: $(PASTA_BUILD) $(TARGET)

#TEM QUE GARANTIR QUE A BUILD EXISTE
$(PASTA_BUILD): 
    mkdir -p $(PASTA_BUILD)

#arquivos dependencia .cpp para os alvo .o----------------------------------
$(MAIN_O): $(MAIN_SRC)
	$(COMPILADORCPP) $(CPPFLAGS) -c $(MAIN_SRC) -o $(MAIN_O)

$(PONTO_O): $(PONTO_SRC)
	$(COMPILADORCPP) $(CPPFLAGS) -c $(PONTO_SRC) -o $(PONTO_O)

$(CIRCULO_O): $(CIRCULO_SRC)
	$(COMPILADORCPP) $(CPPFLAGS) -c $(CIRCULO_SRC) -o $(CIRCULO_O)

$(TARGET): $(COMPILADOS) 
	$(COMPILADORCPP) $(CPPFLAGS) $(COMPILADOS) -o $(TARGET)

clean:
	rm -rf $(PASTA_BUILD) $(TARGET)