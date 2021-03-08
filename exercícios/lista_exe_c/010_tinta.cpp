#include <stdio.h>

int main (){
	float largura = 0.0, altura = 0.0, area = 0.0;
	int tinta = 0;
	
	printf("Qual a largura da parede? ");
	scanf("%f", &largura);
	printf("Qual a altura da parede? ");
	scanf("%f", &altura);
	
	area = (largura*altura);
	
	tinta = (area/2);
	
	printf("A area da parede e igual a %.0fm", area);
	printf("\nA quantidade de tinta necessaria para pintar toda a parede e %dL", tinta);	
	
	return 0;
}
