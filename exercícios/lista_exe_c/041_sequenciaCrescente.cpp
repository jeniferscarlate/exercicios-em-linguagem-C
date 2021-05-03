#include <stdio.h>

//Construa um programa solicita que o usuário digite inteiros positivos, 
//finalizado por 0, e cuja saída seja: "sim N", 
//sem as aspas, se a sequência contiver N valores positivos e 
//formar uma sequência crescente; caso contrário imprima "nao N".


int main (){
    //declarando as variaveis:
    int n, anterior = -1, cont = -1, crescente = 1;
    
    //entrada do laço:
    do {
    	printf("Digite uma sequencia e finalize com o zero: ");
        scanf("%d", &n);
        
        if (n < anterior && n != 0){
            crescente = 0;
        }
        
        anterior = n;
        cont++;
        
    } while (n != 0);
    
    if (crescente == 1){
        printf ("sim %d", cont);
    }
    else {
        printf("nao %d", cont);
    }
    
    return 0;
}
