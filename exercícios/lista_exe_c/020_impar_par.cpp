#include <stdio.h>

int main (){
	//Declarando as variaveis:
	int num = 0, par = 0;
	
	//Recebendo a entrada:
	printf("Digite um numero: ");
	scanf("%d", &num);

	//Processamento:	
	par = (num%2);
	
	//Saida:
	if(par == 0){
		printf("o numero %d e par", num);
	}
	else{
		printf("O numero %d e impar", num);
	}
	
	return 0;
}
