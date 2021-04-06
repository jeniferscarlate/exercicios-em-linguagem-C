#include <stdio.h>

/*Elabore um programa que receba um valor inteiro entre 1 e 12, inclusive. 
Correspondente a este valor, deve ser apresentado como resposta o mês do 
ano por extenso. Caso o valor esteja fora desse intervalo, 
imprima a palavra "Invalido" sem acentuação.*/

int main (){
	//Declarando as variaveis:
	int mes = 0;
	
	//Recebendo a entrada:
	printf("Digite um valor entre 1 e 12: ");
	scanf("%d", &mes);
	
	//Processamento e saida:
	switch (mes){
		case 1:
			printf("\nJANEIRO.");
			break;
		case 2:
			printf("\nFEVEREIRO.");
			break;
		case 3:
			printf("\nMARCO.");
			break;
		case 4:
			printf("\nABRIL.");
			break;
		case 5:
			printf("\nMAIO.");
			break;
		case 6:
			printf("\nJUNHO.");
			break;
		case 7:
			printf("\nJULHO.");
			break;
		case 8:
			printf("\nAGOSTO.");
			break;
		case 9:
			printf("\nSETEMBRO.");
			break;
		case 10: 
			printf("\nOUTUBRO.");
			break;
		case 11:
			printf("\nNOVEMBRO.");
			break;
		case 12: 
			printf("\nDEZEMBRO.");
			break;
		default:
			printf("\nINVALIDO");											
	}
	
	return 0;
}
