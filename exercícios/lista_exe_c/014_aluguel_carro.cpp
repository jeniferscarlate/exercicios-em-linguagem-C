#include <stdio.h>

int main (){
	float km = 0.0, preco = 0.0, aux = 0.0; 
	int dia = 0;
	
	printf("Digite quantos km foram percorridos: ");
	scanf("%f", &km);
	printf("\nPor quantos dias o carro foi alugado: ");
	scanf("%d", &dia);
	
	preco = (dia*90);
	aux = (km*0.20);
	preco+= aux;
	
	printf("\nO preco total a pagar e %.2f", preco);
	
	return 0;
}
