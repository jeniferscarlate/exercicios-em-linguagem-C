#include <stdio.h>

/*Fa�a um programa que leia um n�mero indeterminado de n�meros 
inteiros representando cada um a idade de um indiv�duo 
(pare quando for informada a idade 0) e calcule a idade m�dia
desse grupo de indiv�duos.*/

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
