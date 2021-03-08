#include <stdio.h>

int main (){
	float nota = 0.0, nota2 = 0.0, media = 0.0;
	
	printf("Digite a primeira nota: ");
	scanf("%f", &nota);
	
	printf("Digite a segunda nota: ");
	scanf("%f", &nota2);
	
	media = (nota + nota2)/2;
	
	printf("A media entre %.1f e %.1f e igual a %.2f", nota, nota2, media);
	
	
	return 0;
}
