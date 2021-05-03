#include <stdio.h>

//Construa um programa solicita que o usuário digite inteiros positivos, 
//finalizado por 0, e cuja saída seja: "sim N", 
//sem as aspas, se a sequência contiver N valores positivos e 
//formar uma sequência crescente; caso contrário imprima "nao N".

int main (){
	//Declarando as variaveis:
	int num = -1, anterior = 0, i = 0, crescente = 0;
	
//	printf("Digite uma sequencia de numeros: ");
	//scanf("%d", &num);
	
//	anterior = num;
	
	//Recebendo as entradas:
	while(num != 0){
		
	printf("Digite uma sequencia de numeros: ");
	scanf("%d", &num);
	
	if(num >= anterior){
		crescente = 0;
		anterior = num;
	}
	else{
		if(num < anterior){
			crescente = 1;
			break;
		}
	}
	i++;
}
	//} while(num !=0);
	
	//saida:
	if(crescente == 0){
		printf("Sim, %d", i);
	}
	else{
		if(crescente == 1){
			printf("Nao, %d", i);
		}
	}
	
	
	return 0;
}
