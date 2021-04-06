#include <stdio.h>

/*Elabore um programa que receba um único caractere, 
representando uma letra ou um número. 
Em seguida, identifique e informe se esse caractere
é uma letra (imprimir LETRA) ou se esse caractere é 
um número (imprimir NUMERO).*/

int main (){
	//Declarando as variaveis:
	char caracter;
	
	//Recebendo a entrada:
	printf("Digite um caracter: ");
	scanf("%c", &caracter);
	
	//Processamento e saida:
	if(caracter >= 48 && caracter <= 57){
		printf("\nNUMERO.");
	}
	else{
		if(caracter >= 65 && caracter <= 90 || caracter >= 97 && caracter <= 122){
			printf("\nLETRA.");
		}
		else{
			printf("\nCaracter nao aceito.");
		}
	}
	
	return 0;
}
