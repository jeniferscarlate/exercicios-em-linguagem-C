#include <stdio.h>

int main (){
	float salario = 0.0;
	char nome[20];
	
	printf("Nome do funcionario: ");
	scanf("%s", nome);
	
	printf("Salario: ");
	scanf("%f", &salario);
	
	printf("A funcionaria %s teve um salario de R$ %.2f em junho", nome, salario);
	
	
	
	return 0;
}
