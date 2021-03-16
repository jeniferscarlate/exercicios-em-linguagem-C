#include <stdio.h>

int main (){
	//declarando as variaveis:
	int ano = 0;
	float multi4 = 0.0, multi100 = 0.0, multi400 = 0.0;
	
	//recebendo a entrada:
	printf("Digite um ano: ");
	scanf("%d", &ano);
	
	//processamento:
	multi4 = (ano % 4);
	multi100 = (ano % 100);
	multi400 = (ano % 400);
	
	//saida:
	if(multi4 == 0 && multi100 != 0){
		printf("O ano %d e bissexto", ano);
	}
	else{
		if(multi4 == 0 && multi100 == 0 && multi400 == 0){
			printf("O ano %d e bissexto", ano);
		}else {
		printf("O ano %d nao e bissexto", ano);
	}
	}
	
	return 0;
}


