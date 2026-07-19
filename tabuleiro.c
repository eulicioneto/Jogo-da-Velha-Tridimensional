#include "tabuleiro.h"
#include <stdio.h>

void inicializar(char m[3][3][3])
{
    int coluna, nivel, linha;

    for(coluna = 0; coluna < 3; coluna++)
    {
        for(nivel = 0; nivel < 3; nivel++)
        {
            for(linha = 0; linha < 3; linha++)
            {
                m[coluna][nivel][linha] = ' ';
            }
        }
    }
}

void exibir(char m[3][3][3])
{
    int coluna, nivel, linha;

    for(nivel = 2; nivel >= 0; nivel--)
    {
        if(nivel == 2){
            printf("\n========== NIVEL 2 (TOPO) ==========\n");
        }
        else if(nivel == 1){
            printf("\n========== NIVEL 1 (MEIO) ==========\n");
        }
        else{
            printf("\n========== NIVEL 0 (FUNDO) ==========\n");
        }

        for(linha = 0; linha < 3; linha++)
        {
            if(linha > 0){
                printf("\n-------------");
            }
            printf("\n|");

            for(coluna = 0; coluna < 3; coluna++)
            {
                printf(" %c |", m[coluna][nivel][linha]);
            }
        }

        printf("\n\n");
    }
}

int inserirPeca(char m[3][3][3], int coluna, int linha, char jogador)
{
    int nivel;

    if(coluna < 0 || coluna > 2 || linha < 0 || linha > 2)
    {
        return 0;  
    }

    for(nivel = 0; nivel < 3; nivel++)
    {
        if(m[coluna][nivel][linha] == ' ')
        {
            m[coluna][nivel][linha] = jogador; 
            return 1; 
        }
    }

    return 0; 
}