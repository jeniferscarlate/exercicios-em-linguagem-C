#include <stdio.h>

/*Faça um programa que solicite que o usuário digite um valor inteiro. 
Em seguida, verifique e  imprima PAR caso ele seja par e IMPAR caso ele seja impar.
Atenção: utilize, obrigatoriamente, o operador ternário para resolver o problema.*/

int main (){
	//Declarando as variaveis:
	int numero = 0;
	
	//Recebendo as entradas:
	printf("Digite um numero: ");
	scanf("%d", &numero);
	
	//Processamento e saida:
	(numero % 2 == 0)? printf("PAR"): printf("IMPAR");
	
	return 0;
}
