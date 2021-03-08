#include <stdio.h>

int main (){
	int valor = 0, valor2 = 0, soma = 0;
	
	printf("Digite um numero: ");
	scanf("%d", &valor);
	
	printf("Digite outro numero: ");
	scanf("%d", &valor2);
	
	soma = valor + valor2;
	
	printf("A soma entre %d e %d e igual a %d", valor, valor2, soma);
	
	
	return 0;
}
