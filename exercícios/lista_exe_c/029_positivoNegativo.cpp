#include <stdio.h>

/*Fa�a um programa que leia um valor inteiro, verifique e 
informe se esse n�mero � negativo ou positivo. 
As respostas devem estar com todas as letras em mai�sculo: NEGATIVO e POSITIVO.*/

int main (){
	//Declarando a variavel:
	int numero = 0;
	
	//Recebendo a entrada:
	printf("Digite um numero: ");
	scanf("%d", &numero);
	
	//Processamento e saida:
	if(numero < 0){
		printf("\nNEGATIVO");
	}
	else{
		printf("\nPOSITIVO");
	}
	
	
	
	return 0;
}
