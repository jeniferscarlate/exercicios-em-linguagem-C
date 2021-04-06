#include <stdio.h>

/*Faça um programa que leia um valor inteiro, verifique e 
informe se esse número é negativo ou positivo. 
As respostas devem estar com todas as letras em maiúsculo: NEGATIVO e POSITIVO.*/

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
