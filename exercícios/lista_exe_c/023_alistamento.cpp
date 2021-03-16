#include <stdio.h>

int main (){
	//declarando as variaveis:
	int anoNascimento = 0;
	int anoAgora = 0;
	int alistamento = 0;
	
	//entrada:
	printf("Em que ano voce nasceu? ");
	scanf("%d", &anoNascimento);
	
	printf("Em que ano estamos agora? ");
	scanf("%d", &anoAgora);
	
	//processamento:
	alistamento = (anoAgora - anoNascimento);
	
	//saida:
	if(alistamento < 18){
		alistamento = (18 - alistamento);
		printf("Ainda faltam %d anos para o alistamento", alistamento);
	}
	else{
		if(alistamento == 18){
			printf("Voce ja pode se alistar");
		}
		else{
			if(alistamento > 18){
				alistamento -= 18;
				printf("Ja se passaram %d anos do alistamento", alistamento);
			}
		}
	}
	
	return 0;
}
