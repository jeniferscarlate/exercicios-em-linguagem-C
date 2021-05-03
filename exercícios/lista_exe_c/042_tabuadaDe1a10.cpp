#include <stdio.h>
//Ler um valor inteiro (aceitar somente valores entre 1 e 10) 
//e escrever a tabuada de 1 a 10 do valor lido.
//usando for.
int main (){
	//Declarando as variaveis:
	int i, num, tabuada;
	
	//Recebendo as entradas:
	printf("Escolha uma tabuada do 1 ao 10: ");
	scanf("%d", &num);
	
	//Processamento e saida:
		if (num >= 1 && num <= 10){
			printf("A TABUADA DO %d E:" , num);
			for (i = 1; i <= 10; i++){
			tabuada = i*num;
			printf("\n %d * %d = %d", i, num, tabuada);
		}
		}
		else{
			printf("O valor nao esta entre 1 e 10");
		}
		
	return 0;
}
