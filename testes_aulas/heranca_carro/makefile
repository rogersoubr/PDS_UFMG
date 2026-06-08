COMPILADOR = g++
CPPFLAGS = -Wall -Wextra


#arquivos src, já pegam sozinhos os de include
SRC_DIR_CARRO = src/Carro.cpp
SRC_DIR_MAIN = src/main.cpp
SRC_DIR_MOTOR = src/Motor.cpp
SRC_DIR_FIESTA = src/Fiesta.cpp
SRC_DIR_BATMOVEL = src/BatMovel.cpp
SRC_DIR_TURBINA = src/Turbina.cpp

#arquivos build
BUILD_DIR_CARRO = build/Carro.o
BUILD_DIR_MAIN = build/main.o
BUILD_DIR_MOTOR = build/Motor.o
BUILD_DIR_FIESTA = src/fiesta.o
BUILD_DIR_BATMOVEL = src/batmovel.o
BUILD_DIR_TURBINA = src/turbina.o

#local dos arquivo de diferenciação
BUILD_DIR = build
#define nome da norma padão de execução
TARGET = programa
#união dos bulds formam um build main
OBJETOS = $(BUILD_DIR_MOTOR) $(BUILD_DIR_TURBINA) $(BUILD_DIR_CARRO) $(BUILD_DIR_MAIN) $(BUILD_DIR_BATMOVEL) $(BUILD_DIR_FIESTA)

#clausula make, pega a diferenca
all: $(BUILD_DIR) $(TARGET)
# criando dependências para arquivos .o
$(BUILD_DIR_MOTOR): $(SRC_DIR_MOTOR)
	$(COMPILADOR) $(CPPFLAGS) -c $(SRC_DIR_MOTOR) -o $(BUILD_DIR_MOTOR)

$(BUILD_DIR_TURBINA): $(SRC_DIR_TURBINA)
	$(COMPILADOR) $(CPPFLAGS) -c $(SRC_DIR_TURBINA) -o $(BUILD_DIR_TURBINA)

$(BUILD_DIR_CARRO): $(SRC_DIR_CARRO)
	$(COMPILADOR) $(CPPFLAGS) -c $(SRC_DIR_CARRO) -o $(BUILD_DIR_CARRO)

$(BUILD_DIR_BATMOVEL): $(SRC_DIR_BATMOVEL)
	$(COMPILADOR) $(CPPFLAGS) -c $(SRC_DIR_BATMOVEL) -o $(BUILD_DIR_BATMOVEL)

$(BUILD_DIR_FIESTA): $(SRC_DIR_FIESTA)
	$(COMPILADOR) $(CPPFLAGS) -c $(SRC_DIR_FIESTA) -o $(BUILD_DIR_FIESTA)

#crindo arquio .o 
$(BUILD_DIR_MAIN): $(SRC_DIR_MAIN)
	$(COMPILADOR) $(CPPFLAGS) -c $(SRC_DIR_MAIN) -o $(BUILD_DIR_MAIN)

#criando dependências para o programa
$(TARGET): $(OBJETOS)
	$(COMPILADOR) $(CPPFLAGS) $(OBJETOS) -o $(TARGET)

#clausula de limpesa
clean: 
	rm -rf $(BUILD_DIR) $(TARGET)