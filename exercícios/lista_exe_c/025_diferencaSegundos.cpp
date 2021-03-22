#include <stdio.h>

//Dadas 2 triplas inteiras representando horários (horas; min.; seg.), 
//computar a diferença entre eles em segundos.
//Utilizar apenas variáveis do tipo int.

int main (){
	//declarando as variaveis:
	int hora = 0, min = 0, seg = 0;
	int hora2 = 0, min2 = 0, seg2 = 0;
	int diferenca = 0;
	
	//entradas:
	printf("Vamos comecar com a primeira tripla");
	printf("\nDigite a hora: ");
	scanf("%d", &hora);
	
	printf("Digite os minutos: ");
	scanf("%d", &min);
	
	printf("Digite os segundos: ");
	scanf("%d", &seg);
	
	printf("\nAgora a segunda tripla");
	printf("\nDigite a hora: ");
	scanf("%d", &hora2);
	
	printf("Digite os minutos: ");
	scanf("%d", &min2);
	
	printf("Digite os segundos: ");
	scanf("%d", &seg2);
	
	//processamento:
	hora *= 3600;
	min *= 60;
	hora2 *=3600;
	min2 *= 60;
	diferenca = (hora + min + seg) - (hora2 + min2 + seg2);
	
	//saida:
	if(diferenca < 0){
		diferenca *= (-1);
		printf("\nA diferenca de segundos e %ds", diferenca);
	}
	else{
		printf("\nA diferenca de segundos e %d", diferenca);
	}
	
	
	return 0;
}
