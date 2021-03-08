#include <stdio.h>

int main (){
	int idade = 0, ano = 0;
	
	printf("Em que ano voce nasceu? ");
	scanf("%d", &ano);
	
	idade =  (2021 - ano);
	
	if(idade >= 16){
		printf("\nVoce ja pode votar!");
	}
	else {
		printf("\nVoce ainda nao pode votar!");
	}
	
	
	return 0;
}
