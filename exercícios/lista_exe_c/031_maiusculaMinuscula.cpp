#include <stdio.h>

/*Elabore um programa que receba um único caractere, representando uma letra. 
Em seguida, identifique e informe se essa letra é 
maiúscula (imprimir MAIUSCULA) ou minúscula (imprimir MINUSCULA).*/

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
