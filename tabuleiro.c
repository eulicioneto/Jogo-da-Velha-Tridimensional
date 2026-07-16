#include "tabuleiro.h"
#include <stdio.h>

void exibir(int m[3][3][3]){
    int i, k, j;
    for(k=0; k<3; k++){
        
        for(j=0; j<3; j++){

            if(j>0)
                printf("\n-------------");
            printf("\n|");
            for (i = 0; i < 3; i++){
                if(m[i][j][k] == 0)
                    printf("   ");
                else if(m[i][j][k] == 1)
                    printf(" X ");
                else if(m[i][j][k] == 2)
                    printf(" O ");

                printf("|");
            }

        }
        printf("\n\n");
    }
}