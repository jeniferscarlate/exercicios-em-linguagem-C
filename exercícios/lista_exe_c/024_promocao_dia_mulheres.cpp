#include <stdio.h>
#include <string.h>

int main (){
	//declarando as variaveis:
	char nome[30];
	char sexo[5];
	float valorCompras = 0.0, precoFinal = 0.0;
	
	
	//entradas:
	printf("Digite seu primeiro nome: ");
	scanf("%s", &nome);
	
	printf("Sexo M ou F? ");
	scanf("%c", &sexo[0]);
	
	printf("Qual o valor total da sua compra? ");
	scanf("%f", &valorCompras);
	
	
	//processamento:
	if(sexo[0] == F){
		precoFinal = (valorCompras * 13)/100;
		precoFinal = valorCompras - precoFinal;
		printf("%.2f", precoFinal);	
	}
	
	//saida:
	
	
	return 0;
}
