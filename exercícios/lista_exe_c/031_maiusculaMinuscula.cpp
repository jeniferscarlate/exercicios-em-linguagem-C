#include <stdio.h>

/*Elabore um programa que receba um �nico caractere, representando uma letra. 
Em seguida, identifique e informe se essa letra � 
mai�scula (imprimir MAIUSCULA) ou min�scula (imprimir MINUSCULA).*/

int main (){
	//Declarando as variaveis:
	char letra;
	
	//Recebendo as entradas:
	printf("Digite uma letra: ");
	scanf("%c", &letra);
	
	//Processamento e saida:
	if(letra >= 65 && letra <= 90){
		printf("\nMAIUSCULA");
	}
	else{
		if(letra >= 97 && letra <= 122){
			printf("\nMINUSCULA");
		}
	}
	
	return 0;
}
