#include <stdio.h>

/*Construa um programa que verifica se 3 números podem 
ou não representar os ângulos de um triângulo. 
Seu algoritmo deve ler 3 números naturais digitados pelo usuário 
(representando ângulos em graus) e imprimir: o produto dos 3 números, 
se somarem 180; e a soma dos 3 números em caso contrário.*/

int main (){
	//Declarando as variavei: 
	int num1 = 0, num2 = 0, num3 = 0;
	
	//Recebendo as entradas:
	do{
	printf("Digite o primeiro numero: ");
	scanf("%d", &num1);
	} while(num1 < 0);
			
	do{
	printf("\nDigite o segundo numero: ");
	scanf("%d", &num2);
	} while(num2 < 0);
	
	do{
	printf("\nDigite o terceiro numero: ");
	scanf("%d", &num3);
	} while(num3 < 0);		

	if(num1 + num2 + num3 == 180){
		printf("%d.", num1 * num2 * num3);
	}
	else{
		printf("%d.", num1 + num2 + num3);
	}
	
	return 0;
}
