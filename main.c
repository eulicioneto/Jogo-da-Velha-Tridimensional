#include <stdio.h>
#include "tabuleiro.h"
#include "vitoria.h"

 int main(){
 	printf("=============================================\n JOGO DA VELHA TRIDIMENSIONAL COM GRAVIDADE\n=============================================\n");
	char m[3][3][3];
	char jogador;
	
	inicializar(m);
	
	jogador = 'x';
	
	exibir(m);
	
	int coluna, linha;
	 
	do{
		printf ("Vez do jogador: %c \n", jogador);
		do {
			printf("Insira a coluna(1-3): \n");
			scanf("%d",&coluna);coluna--;
			if(coluna<0 || coluna>2){printf("JOGADA INVALIDA! JOGUE NOVAMENTE:\n");
			}
		} while(coluna<0 || coluna>2);
		
	 do {printf("Insira a linha(1-3): \n");
		scanf("%d",&linha);linha--;
		if(linha<0 || linha>2){printf("JOGADA INVALIDA! JOGUE NOVAMENTE:\n");
			}
		}while(linha<0 || linha>2);
		
	
		if(inserirPeca(m,coluna,linha,jogador)){
			
				exibir(m);
			
			if(verificarVitoria(m,jogador)){
				exibir(m);
				printf("JOGADOR %c VENCEU!\n",jogador); break;
			}
		}
		else
	{
    	printf("COLUNA CHEIA! TENTE NOVAMENTE\n");
    continue;
	}
		if(verificarEmpate(m)){
			
			exibir(m);
			printf("EMPATE!\n");break;
		}
		if(jogador=='x'){jogador='o';}
		else if(jogador=='o'){jogador='x';}
		else{printf("JOGADA INVÁLIDA! Tente Novamente:\n");}		
				
	}while(verificarVitoria(m,jogador)==0 || verificarEmpate(m)==0);

    return 0;
}