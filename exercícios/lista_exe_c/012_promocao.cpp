#include <stdio.h>

int main (){
	float produto = 0.0, promocao = 0.0;
	
	printf("Digite o preco do produto: ");
	scanf("%f", &produto);
	
	promocao = (produto*5)/100;
	promocao = produto - promocao;
	
	printf("O preco do produto com desconto e %.2f", promocao);
	
	return 0;
}

