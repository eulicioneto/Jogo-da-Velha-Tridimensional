#include <stdio.h>
#include "tabuleiro.h"
#include "vitoria.h"
int main()
{
    int tabuleiro[3][3][3];

    inicializar(tabuleiro);

    exibir(tabuleiro);

    return 0;
}