#include <stdio.h>

//calculadora basica;

int main (){
	int num1 = 0, num2 = 0;
	char operador;
	
	printf("Digite um valor: ");
	scanf("%d", &num1);
	
	printf("Digite a operacao desejada: ");
	scanf("%s", &operador);
	
	printf("Digite o outro valor: ");
	scanf("%d", &num2);
	
	switch (operador){
		case '+':
			printf("O resultado e: %d", num1 + num2);
			break;
		case '-':
			printf("O resultado e: %d", num1 - num2);
			break;
		case '*':
			printf("O resultado e: %d", num1 * num2);
			break;
		case '/':
			printf("O resultado e: %d", num1 / num2);
			break;
		case '%':
			printf("O resultado e: %d", num1 % num2);
			break;	
		default:
			printf("Ainda nao conheco essa operacao");				
	}
	
	
	return 0;
}
