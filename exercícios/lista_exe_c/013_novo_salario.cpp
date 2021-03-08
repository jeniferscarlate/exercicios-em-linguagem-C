#include <stdio.h>

int main (){
	float salario = 0.0, novo_salario = 0.0;
	
	printf("Digite o valor do salario: ");
	scanf("%f", &salario);
	
	novo_salario = (salario*15)/100;
	novo_salario+= salario;
	
	printf("\nO novo salario e de %.2f", novo_salario);
	
	return 0;
}
