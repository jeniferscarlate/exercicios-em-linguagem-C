#include <stdio.h>

/*Elabore um programa em linguagem C, que receba a idade de uma pessoa 
e informe se ela é obrigada a votar nas eleições. 
Regra: pela idade, são obrigados a votar maiores de 18 (inclusive) 
e menores de 70 (inclusive).*/

int main (){
	//Declarando as variaveis:
	int idade = 0;
	
	//Recebendo a entrada:
	printf("Digite a sua idade: ");
	scanf("%d",&idade);
	
	//Processamento e saida: 
	if(idade >= 18 && idade <= 70){
		printf("\nVoce e obrigado a votar!");
	}
	else{
		printf("\nVoce nao e obrigado a votar!");
	}
	
	return 0;
}
