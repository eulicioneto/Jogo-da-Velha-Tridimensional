#include "tabuleiro.h"
#include <stdio.h>

//Inicialização do tabuleiro
void inicializar(int m[3][3][3])
{
    int coluna, nivel, linha;

    for (coluna = 0; coluna < 3; coluna++)
    {
        for (nivel = 0; nivel < 3; nivel++)
        {
            for (linha = 0; linha < 3; linha++)
            {
                m[coluna][nivel][linha] = 0; //Nao precisa de um return?
            }
        }
    }
}


void exibir(int m[3][3][3]){
    int linha, nivel, coluna;
    for(nivel=2; nivel>=0; nivel--){
        if(nivel == 2){
            printf("\n========== NIVEL 2 (TOPO) ==========\n");
        }else if(nivel == 1){
            printf("\n========== NIVEL 1 (MEIO) ==========\n");
        }else if(nivel == 0){
            printf("\n========== NIVEL 0 (FUNDO) ==========\n");
        }
        

        for(coluna=0; coluna<3; coluna++){

            if(coluna>0)
                printf("\n-------------");
            printf("\n|");
            for (linha = 0; linha < 3; linha++){
                if(m[linha][coluna][nivel] == 0)
                    printf("   ");
                else if(m[linha][coluna][nivel] == 1)
                    printf(" X ");
                else if(m[linha][coluna][nivel] == 2)
                    printf(" O ");

                printf("|");
            }

        }
        printf("\n\n");
    }
}