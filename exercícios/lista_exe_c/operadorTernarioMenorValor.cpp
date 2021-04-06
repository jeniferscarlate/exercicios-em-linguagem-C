#include <stdio.h>

/*Escreva um programa que leia 3 valores inteiros distintos e 
informe qual é o menor deles. Atenção: utilize, obrigatoriamente, 
o operador ternário para resolver o problema.*/

int main (){
	//Declarando as variaveis:
	int num1 = 0, num2 = 0, num3 =0, menor = 0;
	
	//Recebendo as entradas:
	printf("Digite o primeiro valor: ");
	scanf("%d", &num1);
	
	printf("Digite o segundo valor: ");
	scanf("%d", &num2);
	
	printf("Digite o terceiro valor: ");
	scanf("%d", &num3);
	
	//Processamento:
    menor = num1 <= num2 && num1 <= num3 ? num1 :(num2 <= num1 && num2 <= num3 ? num2 : num3);
    
    //saida:
    printf("O menor valor e %d.", menor);
	
	
	
	return 0;
}
