compiladorC++ = g++
FLAGS = -Wall -Iinclude

BUILD_DIR = build
SRC_DIR = src
ENTITIES_DIR = $(SRC_DIR)/entidades

MAIN_SRC = $(SRC_DIR)/main.cpp
CIRCULO_SRC = $(ENTITIES_DIR)/Circulo.cpp
PONTO_SRC = $(ENTITIES_DIR)/Ponto.cpp

MAIN_OBJ = $(BUILD_DIR)/main.o
CIRCULO_OBJ = $(BUILD_DIR)/Circulo.o
PONTO_OBJ = $(BUILD_DIR)/Ponto.o

OBJS = $(MAIN_OBJ) $(CIRCULO_OBJ) $(PONTO_OBJ)

TARGET = vpl_execution

all: $(BUILD_DIR) $(TARGET)

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