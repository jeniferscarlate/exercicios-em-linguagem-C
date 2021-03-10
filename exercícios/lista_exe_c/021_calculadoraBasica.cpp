#include <stdio.h>

//calculadora basica;

int main (){
	int num1 = 0, num2 = 0;
	char operacao;
	
	printf("Digite um valor: ");
	scanf("%d", &num1);
	
	printf("Digite a operacao desejada: ");
	scanf("%s", &operacao);
	
	printf("Digite o outro valor: ");
	scanf("%d", &num2);
	
	switch (operacao){
		case '+':
			printf("\nO resultado e: %d", num1 + num2);
			break;
		case '-':
			printf("\nO resultado e: %d", num1 - num2);
			break;
		case '*':
			printf("\nO resultado e: %d", num1 * num2);
			break;
		case '/':
			printf("\nO resultado e: %d", num1 / num2);
			break;
		default:
		printf("Ainda nao conheco essa operacao");				
	}
	
	
	return 0;
}
