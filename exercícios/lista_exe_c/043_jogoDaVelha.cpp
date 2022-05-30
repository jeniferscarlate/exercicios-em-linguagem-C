#include <stdio.h>
#include <stdlib.h>

char jogo[3] [3];
char jogador1[50], jogador2[50];

void inicializarMatriz(){
	int i, j;
	for(i = 0; i < 3; i++){
		for(j = 0; j< 3; j++){
			jogo[i][j] = 'a';
		}
	}
}

int eValido(char letra){
	if(letra == 'x' || letra =='0'){
		return 1;
	}
	else{
		return 0;
	}
}

int coordenadaEhValida(int x, int y){
	if(x >= 0 && x < 3){
		if(y >= 0 && y < 3)
		return 1;
	}
	return 0;
}

int posicaoVazia(int x, int y){
	if(jogo[x][y] != 'x' && jogo[x][y] != '0'){
		return 1;
	}
	return 0;
}

int ganhouLinhas(){
	int i, j, igual = 1;
	for(i=0; i<3; i++){
		for(j=0; j<2; j++){
			if(eValido(jogo[i][j]) && jogo[i][j] == jogo[i][j+1]){
				igual++;
			}
		}
		if(igual == 3){
			return 1;
		}
		igual = 1;
	}
	return 0;
}


int ganhouColunas(){
	int i, j, igual = 1;
	for(i=0; i<3; i++){
		for(j=0; j<2; j++){
			if(eValido(jogo[j][i]) && jogo[j][i] == jogo[j+1][i]){
				igual++;
			}
		}
		if(igual == 3){
			return 1;
		}
		igual = 1;
	}
	return 0;
}

int ganhouDiagPrincipal(){
	int i, igual = 1;
	for(i=0; i<2; i++){
		if(eValido(jogo[i][i]) && jogo[i][i] == jogo[i+1][i+1]){
			igual++;
		}
	}
	if(igual == 3){
		return 1;
	}
	else{
		return 0;
	}
}

int ganhouDiagSecundaria(){
	int i, igual = 1;
	for(i=0; i<2; i++){
		if(eValido(jogo[i][3-i-1]) && jogo[i][3-i-1] == jogo[i+1][3-i-2]){
			igual++;
		}
	}
	if(igual == 3){
		return 1;
	}
	else{
		return 0;
	}
}

/* 0 1 2

0  x|0|0
  -------
1  0|x|x
  -------
2  X|0|0
*/

void imprimir(){
	int c, l;
	
	printf("\n\t    0  1  2\n");
	for(l=0; l<3; l++){
		printf("\t%d ", l);
		for(c=0; c<3; c++){
			if(eValido(jogo[l][c])){
				if(c<2)
					printf(" %c |", jogo[l][c]);
				else
					printf(" %c ", jogo[l][c]);	
			}
			else{
				if(c<2)
					printf("   |");
				else
					printf("   ");
			}
		}
		if(l<2)
			printf("\n\t   ---------\n");
		
	}
}

void jogar(){
	int x, y, valida, ordem = 1, ganhou = 0, jogadas = 0;
	
	do{
		do{
			imprimir();
			printf("\n\nDigite a coordenada que deseja jogar: ");
			scanf("%d%d", &x, &y);
			valida = coordenadaEhValida(x, y);
			if(valida == 1)
				valida += posicaoVazia(x, y);
		}while(valida != 2);
	
		if(ordem == 1){
			jogo[x][y] = 'x';	
		}
		else{
			jogo[x][y] = '0';
		}
		
		jogadas++;
		
		ordem++;
		if(ordem == 3){
			ordem = 1;
		}
		ganhou += ganhouLinhas();
		ganhou += ganhouColunas();
		ganhou += ganhouDiagPrincipal();
		ganhou += ganhouDiagSecundaria();
	
	}while(ganhou == 0 && jogadas <9);
	
	if(ganhou!= 0){
		if(ordem - 1 == 1)
			printf("\nParabens. voce venceu %s\n", jogador1);
		else
			printf("\nParabens. voce venceu %s\n", jogador2);	
	}
	
}



int main () {

int op;

printf("jogador 1 digite o seu nome: ");
fgets(jogador1, 50, stdin);
printf("jogador 2 digite o seu nome: ");
fgets(jogador2, 50, stdin);

do{

	inicializarMatriz();
	jogar();
	printf("\nDeseja jogar novamente?\n1 - sim\n2 - nao\n");
	
	}while(op == 1);


return 0;
}
