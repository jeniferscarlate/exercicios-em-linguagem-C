#include <stdio.h>

int main (){
	int num = 0, par = 0;
	
	printf("Digite um numero: ");
	scanf("%d", &num);
	
	par = (num%2);
	if(par == 0){
		printf("o numero %d e par", num);
	}
	else{
		printf("O numero %d e impar", num);
	}
	
	return 0;
}
