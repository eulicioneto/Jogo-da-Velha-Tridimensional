#ifndef TABULEIRO_H
#define TABULEIRO_H

#include <stdio.h>

void inicializar(char m[3][3][3]);
void exibir(char m[3][3][3]);

int inserirPeca(char m[3][3][3], int coluna, int linha, char jogador);

#endif