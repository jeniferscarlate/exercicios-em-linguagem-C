#include <stdio.h>

int main (){
	int velocidade = 0, multa = 0;
	
	printf("Qual a velocidade que o carro esta? ");
	scanf("%d", &velocidade);
	
	if(velocidade > 80){
		multa = velocidade - 80;
		multa = multa * 5;
		printf("Voce foi multado em %d reais", multa);
	}
	else {
		printf("Tudo certo!");
	}
	
	
	return 0;
}
