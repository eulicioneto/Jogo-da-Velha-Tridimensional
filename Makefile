CC = gcc

CFLAGS = -Wall -Wextra -g3

SRC = main.c tabuleiro.c vitoria.c

TARGET = output/main.exe

all:
	$(CC) $(CFLAGS) $(SRC) -o $(TARGET)

clean:
	del /Q output\main.exe