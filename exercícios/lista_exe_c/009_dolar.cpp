#include <stdio.h>

int main (){
	float reais = 0.0, dolar = 0.0;
	
	printf("Quantos reais voce tem? ");
	scanf("%f", &reais);
	
	dolar = (reais/5.67);
	
	printf("Com %.2f voce pode comprar %.2f dolares", reais, dolar);
	
	
	
	return 0;
}
