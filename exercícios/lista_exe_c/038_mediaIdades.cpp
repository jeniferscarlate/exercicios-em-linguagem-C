#include <stdio.h>

/*Faça um programa que leia um número indeterminado de números 
inteiros representando cada um a idade de um indivíduo 
(pare quando for informada a idade 0) e calcule a idade média
desse grupo de indivíduos.*/

int main (){
	//Declarando as variaveis:
	int idade = 0, i = -1;
	float media = 0.0;

	//Recebendo as entradas:
	do {
		printf("Digite a idade desejada: ");	
		scanf("%d", &idade);
		media = media + idade;
		i++;
	} while(idade != 0);
	
	//processamento:
	media = media / i;
	
	//saida:
	printf("A media das idades e: %.2f. ", media);

	
	return 0;
}
