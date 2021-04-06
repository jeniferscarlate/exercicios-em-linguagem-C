#include <stdio.h>

/*Construa um algoritmo que lê três números naturais como entradas 
e verifica se esses números são pitagóricos. 
Três números são pitagóricos se o quadrado do maior deles (hipotenusa) 
é igual a soma do quadrado dos outros dois. Como saída de seu programa imprimir: 
se pitagóricos, o valor 1 e o valor da hipotenusa ao quadrado; se não pitagórico, apenas o valor 0.
Os números são denominados pitagóricos por corresponderem a comprimentos de lados de um triângulo 
retângulo, ou seja, h² = a² + b².*/

int main (){
	//Declarando as variaveis:
	int num1 = 0, num2 = 0, num3 = 0;
	int hipo1 = 0, hipo2 = 0, hipo3 = 0;
	
	//Recebendo as entradas e checando se são naturais:
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
