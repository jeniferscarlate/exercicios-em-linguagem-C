#include <stdio.h>

/*Elabore um programa que receba dois valores inteiros representando, 
respectivamente, o código de um item e a quantidade deste item, 
de acordo com o cardápio disponível abaixo.
Mostre o valor a ser pago(com duas casas após a vírgula).

Código	  Descrição 	    Preço
1	      Cachorro quente	R$ 8,50
2	      Bauru	            R$ 9,00
3         X-Salada	        R$ 7,50
4	      X-Tudo 	        R$ 11,00
5	     Refrigerante    	R$ 8,30 

*/

int main (){
	//Declarando as variaveis:
	int codigo = 0, quantidade = 0;
	float preco = 0.0;
	
	//Recebendo as entradas:
	printf("Digite o codigo do item: ");
	scanf("%d", &codigo);
	
	printf("\nDigite a quantidade de itens: ");
	scanf("%d", &quantidade);
	
	switch (codigo){
		case 1:
			preco = (quantidade * 8.50);
			printf("\nO valor a ser pago e: R$%.2f.", preco);
			break;
		case 2:
			preco = (quantidade * 9.00);
			printf("\nO valor a ser pago e: R$%.2f.", preco);
			break;
		case 3:
			preco = (quantidade * 7.50);
			printf("\nO valor a ser pago e: R$%.2f.", preco);
			break;
		case 4: 
			preco = (quantidade * 11.00);
			printf("\nO valor a ser pago e: R$%.2f.", preco);
			break;
		case 5:
			preco = (quantidade * 8.30);
			printf("\nO valor a ser pago e: R$%.2f.", preco);
			break;
		default:
			printf("\nCodigo invalido.");					
	}
		
	return 0;
}
