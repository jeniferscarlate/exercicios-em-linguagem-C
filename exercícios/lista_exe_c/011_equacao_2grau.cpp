#include <stdio.h>
#include <math.h>

int main (){
	int a = 0, b = 0, c = 0, delta = 0, x = 0;
	int aux = 0, x2 = 0;
	
	printf("Digite o valor de a: ");
	scanf("%d", &a);
	printf("Digite o valor de b: ");
	scanf("%d", &b);
	printf("Digite o valor de c: ");
	scanf("%d", &c);
	
	if(a !=0 && b!= 0 && c!= 0){
		printf("\nE uma equacao completa");
	}
	else {
		printf("\nE uma equacao incompleta");
	}
	
	delta = (b*b)-(4*a*c);
	
	aux = sqrt(delta);
	
	x = (-(b) + aux)/(2*a);
	
	x2 = (-(b) - aux)/(2*a);
	
	printf("\nX' e igual a %d", x);
	printf("\nX'' e igual a %d", x2);
	
	
	return 0;
}
