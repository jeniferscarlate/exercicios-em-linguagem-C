#include <stdio.h>

/*Construa um algoritmo que receba um natural positivo n (n>0) 
e imprime a soma dos n primeiros termos da série harmônica abaixo definida:

H = 1/1 + 1/2 + 1/3 + 1/4 + ... + 1/k + ...

O objetivo dessa atividade é exercitar os conceitos iniciais de programação, 
portanto não procure uma forma fechada para Hn (deve-se implementar um laço).*/

int main (){
	//Declarando as variaveis:
	int num = 0;
	float soma = 0.0;
	float denominador = 1.0;
	
	//Recebendo a entrada:
	do{
		printf("Digite um numero natural: ");
		scanf("%d", &num);
	}
	while(num <= 0);
	
	//Processamento:
	while (denominador <= num){
		soma += 1/denominador;
		denominador += 1.0;
	}
	//Saida:
	printf("A soma da serie harmonica e %f.", soma);
	
	return 0;
}
