#include <stdio.h>

int main (){
	float num = 0.0, dobro = 0.0, terca = 0.0;
	
	printf("Digite um numero: ");
	scanf("%f", &num);
	
	dobro = num * 2;
	terca = num/3;
	
	printf("O dobro de %.1f e %.1f", num, dobro);
	printf("\nA terca parte de %.1f e %f", num, terca);
	
	return 0;
}
