#include "vitoria.h"

int verificarVitoria(char tabuleiro[3][3][3], char jogador)
{
    int coluna, nivel, linha;
    int dc, dn, dl;

    int direcoes[13][3] =
    {
        {1,0,0},
        {0,1,0},
        {0,0,1},

        {1,1,0},
        {1,-1,0},

        {1,0,1},
        {1,0,-1},

        {0,1,1},
        {0,1,-1},

        {1,1,1},
        {1,1,-1},
        {1,-1,1},
        {1,-1,-1}
    };

    int i;

    for(coluna = 0; coluna < 3; coluna++)
    {
        for(nivel = 0; nivel < 3; nivel++)
        {
            for(linha = 0; linha < 3; linha++)
            {
                if(tabuleiro[coluna][nivel][linha] != jogador){
                    continue;
                }

                for(i = 0; i < 13; i++)
                {
                    dc = direcoes[i][0];
                    dn = direcoes[i][1];
                    dl = direcoes[i][2];

                    int coluna2 = coluna + dc;
                    int nivel2 = nivel + dn;
                    int linha2 = linha + dl;

                    int coluna3 = coluna + 2 * dc;
                    int nivel3 = nivel + 2 * dn;
                    int linha3 = linha + 2 * dl;

                    if(coluna2 < 0 || coluna2 > 2 ||
                       nivel2 < 0 || nivel2 > 2 ||
                       linha2 < 0 || linha2 > 2){
                        continue;
                       }

                    if(coluna3 < 0 || coluna3 > 2 ||
                       nivel3 < 0 || nivel3 > 2 ||
                       linha3 < 0 || linha3 > 2){
                        continue;
                       }

                    if(tabuleiro[coluna2][nivel2][linha2] == jogador &&
                       tabuleiro[coluna3][nivel3][linha3] == jogador)
                    {
                        return 1;
                    }
                }
            }
        }
    }

    return 0;
}

int verificarEmpate(char tabuleiro[3][3][3])
{
    int coluna, nivel, linha;

    for(coluna = 0; coluna < 3; coluna++)
    {
        for(nivel = 0; nivel < 3; nivel++)
        {
            for(linha = 0; linha < 3; linha++)
            {
                if(tabuleiro[coluna][nivel][linha] == ' ')
                {
                    return 0;
                }
            }
        }
    }

    return 1;
}