#include <stdio.h>

/*Elabore um programa que receba um valor inteiro representando 
um código de DDD para discagem interurbana. 
Em seguida, verifique e informe à qual cidade o DDD pertence, 
considerando a tabela abaixo:

DDD	Cidade
61	Brasilia
71	Salvador
11  Sao Paulo
21	Rio de Janeiro
19	Campinas 
31	Belo Horizonte 
62	Goiania*/

int main (){
	//Declarando a variavel:
	int ddd = 0;
	
	//Recebendo a entrada:
	printf("Digite o seu DDD:");
	scanf("%d", &ddd);
	
	//processamento e saida:
	switch (ddd){
		case 61:
			printf("\nBrasilia.");
			break;
			
		case 71:
			printf("\nSalvador.");
			break;
			
		case 11:
			printf("\nSao Paulo.");
			break;
			
		case 21:
			printf("\nRio de Janeiro.");
			break;
			
		case 19: 
			printf("\nCampinas.");
			break;
			
		case 31:
			printf("\nBelo Horizonte.");
			break;
			
		case 62:
			printf("\nGoiania.");
			break;
			
		default:
			printf("\nDDD nao encontrado.");
			break;					 		
	}
	
	return 0;
}
