#include <stdio.h>

int main (){
	int dias = 0, aux = 0; 
	float salario = 0.0;
	
	printf("Digite quantos dias voce trabalhou este mes: ");
	scanf("%d", &dias);
	
	aux = (8*25);
	salario = (dias*aux);
	
	printf("O salario e igual a %.2f", salario);
	
	
	return 0;
}
