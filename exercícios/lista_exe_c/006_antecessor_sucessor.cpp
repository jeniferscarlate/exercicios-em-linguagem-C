#include <stdio.h>

int main (){
	int num = 0, antecessor = 0, sucessor = 0;
	printf("Digite um numero: ");
	scanf("%d", &num);
	
	antecessor = num - 1;
	sucessor = num + 1;
	
	printf("O antecessor de %d e %d", num, antecessor);
	printf("\nO sucessor de %d e %d", num, sucessor);
	
	return 0;
}
