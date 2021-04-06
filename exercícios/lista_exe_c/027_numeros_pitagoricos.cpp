#include <stdio.h>

/*Construa um algoritmo que l� tr�s n�meros naturais como entradas 
e verifica se esses n�meros s�o pitag�ricos. 
Tr�s n�meros s�o pitag�ricos se o quadrado do maior deles (hipotenusa) 
� igual a soma do quadrado dos outros dois. Como sa�da de seu programa imprimir: 
se pitag�ricos, o valor 1 e o valor da hipotenusa ao quadrado; se n�o pitag�rico, apenas o valor 0.
Os n�meros s�o denominados pitag�ricos por corresponderem a comprimentos de lados de um tri�ngulo 
ret�ngulo, ou seja, h� = a� + b�.*/

int main (){
	//Declarando as variaveis:
	int num1 = 0, num2 = 0, num3 = 0;
	int hipo1 = 0, hipo2 = 0, hipo3 = 0;
	
	//Recebendo as entradas e checando se s�o naturais:
	printf("Digite o primeiro numero: ");
	scanf("%d", &num1);
	if(num1 < 0){
		printf("Digite o primeiro numero: ");
		scanf("%d", &num1);
	}
	
	printf("Digite o segundo numero: ");
	scanf("%d", &num2);
	if(num2 < 0){
		printf("Digite o segundo numero: ");
		scanf("%d", &num2);
	}
	
	printf("Digite o terceiro numero: ");
	scanf("%d", &num3);
	if(num3 < 0){
		printf("Digite o terceiro numero: ");
		scanf("%d", &num3);
	}
	
	//processamento e saida:
	hipo1 = (num1 * num1);
	hipo2 = (num2 * num2);
	hipo3 = (num3 * num3);
	
	if(num1 >= num2 && num1 >= num3 && hipo1 == hipo2 + hipo3){
		printf("1 %d", hipo1);
	}
	else{
		if(num2 >= num1 && num2 >= num3 && hipo2 == hipo1 + hipo3){
			printf("1 %d", hipo2);
		}
		else{
			if(num3 >= num1 && num3 >= num2 && hipo3 == hipo1 + hipo2){
				printf("1 %d", hipo3);
			}
			else{
				printf("0");
			}
		}
	}
	
	return 0;
}
