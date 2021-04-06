#include <stdio.h>

/*O IMC é determinado pela divisão da massa 
do indivíduo pelo quadrado de sua altura, onde a massa está em quilogramas e a 
altura está em metros. A fórmula é a seguinte: IMC = massa/altura2.

A seguinte tabela indica os resultados:

IMC < 18,5 = Magreza;   
IMC entre 18,5 e 25,0 (exclusivo) = Saudavel;   
IMC entre 25,0 e 30,0 (exclusivo) = Sobrepeso;   
IMC entre 30,0 e 35,0 (exclusivo) = Obesidade Grau I;   
IMC entre 35,0 e 40,0 (exclusivo) = Obesidade Grau II (severa);
IMC maior ou igual a 40,0 = Obesidade Grau III (mórbida).

leia a massa e a altura e escreva o resultado de acordo com a tabela de resultados acima.*/

int main (){
	//Declarando as variaveis: 
	float massa = 0.0, altura = 0.0, imc = 0.0;
	
	//Recebendo as entradas:
	printf("Digite sua massa: ");
	scanf("%f", &massa);
	
	printf("Digite sua altura: ");
	scanf("%f", &altura);
	
	//Processamento:
	imc = (massa/(altura*altura));
	
	if(imc < 18.5){
		printf("Magreza.");
	}
	else{
		if(imc >= 18.5 && imc < 25.0){
			printf("Saudavel.");
		}
		else{
			if(imc >= 25.0 && imc < 30.0){
				printf("Sobrepeso.");
			}
			else{
				if(imc >= 30.0 && imc < 35.0){
					printf("Obesidade Grau I.");
				}
				else{
					if(imc >= 35.0 && imc < 40.0){
						printf("Obseidade Grau II (Severa).");
					}
					else{
						printf("Obesidade Grau III (Morbida).");
					}
				}
			}
		}
	}
		
	return 0;
}
