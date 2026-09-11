#rogersoubr - 2025108154
#flags de compilação
CC = g++
CFLAGS = -std=c++11 -Wall -Iinclude

#executável final
TARGET = main

#regra all = principal
all: $(TARGET)

#executacel
$(TARGET): main.o Processo.o FilaProcessos.o
	$(CC) $(CFLAGS) -o $(TARGET) main.o Processo.o FilaProcessos.o

#compilacao dos arquivos objeto
main.o: src/main.cpp
	$(CC) $(CFLAGS) -c src/main.cpp

Processo.o: src/Processo.cpp include/Processo.hpp
	$(CC) $(CFLAGS) -c src/Processo.cpp

FilaProcessos.o: src/FilaProcessos.cpp include/FilaProcessos.hpp
	$(CC) $(CFLAGS) -c src/FilaProcessos.cpp

#limpeza
clean:
	rm -f *.o $(TARGET)