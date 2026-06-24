compiladorC++ = g++ #falando qual é o compilador
FLAGS = -Wall -Iinclude #colocando as flags

#LOCAIS DE PASTAS
BUILD_DIR = build #local de guardar os .o
SRC_DIR = src #arquivos cpp (aplicação e emlementação)
ENTITIES_DIR = $(SRC_DIR)/entidades #local onde fica as entidades

#LOCAIS DE ARQUIVOS
MAIN_SRC = $(SRC_DIR)/main.cpp #aplicação main
CIRCULO_SRC = $(ENTITIES_DIR)/Circulo.cpp #Implementação circulo
PONTO_SRC = $(ENTITIES_DIR)/Ponto.cpp #Implementação de ponto

#LOCAL DE ARQUIVOS *.0
MAIN_OBJ = $(BUILD_DIR)/main.o #compilado aplicação main
CIRCULO_OBJ = $(BUILD_DIR)/Circulo.o #Compilado Implementação circulo
PONTO_OBJ = $(BUILD_DIR)/Ponto.o #Compilado Implementação ponto

#ARQUIVOS COMPILADOS
OBJS = $(MAIN_OBJ) $(CIRCULO_OBJ) $(PONTO_OBJ)

TARGET = vpl_execution #nome da execução central, vulgo target

all: $(BUILD_DIR) $(TARGET) #DEFINE COMO ALVO PRINCIPAL DE COMPILAÇÃO O TARGET (tem o caminho dele)

$(BUILD_DIR):
	mkdir -p $(BUILD_DIR)

$(TARGET): $(OBJS)
	$(compiladorC++) $(OBJS) -o $(TARGET)

$(MAIN_OBJ): $(MAIN_SRC)
	$(compiladorC++) $(FLAGS) -c $< -o $@

$(CIRCULO_OBJ): $(CIRCULO_SRC)
	$(compiladorC++) $(FLAGS) -c $< -o $@

$(PONTO_OBJ): $(PONTO_SRC)
	$(compiladorC++) $(FLAGS) -c $< -o $@

clean:
	rm -rf $(BUILD_DIR) $(TARGET)

.PHONY: all clean