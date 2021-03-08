#include <stdio.h>

int main (){
	float nota1 = 0.0, nota2 = 0.0, media = 0.0;
	char nome;
	
	printf("\nDigite o nome do aluno: ");
	scanf("%s", &nome);
	printf("\nDigite a primeira nota: ");
	scanf("%f", &nota1);
	printf("\nDigite a segunda nota: ");
	scanf("%f", &nota2);
	
	media = (nota1 + nota2)/2;
	
	if(media > 7.0){
		printf("\nO aluno teve um bom aproveitamento!");
	}
	else {
		printf("\nO aluno nao teve um bom aproveitamento!");
	}
	
	return 0;
}
