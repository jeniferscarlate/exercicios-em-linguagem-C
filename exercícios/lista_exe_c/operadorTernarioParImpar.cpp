#include <stdio.h>

/*Fa�a um programa que solicite que o usu�rio digite um valor inteiro. 
Em seguida, verifique e  imprima PAR caso ele seja par e IMPAR caso ele seja impar.
Aten��o: utilize, obrigatoriamente, o operador tern�rio para resolver o problema.*/

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
