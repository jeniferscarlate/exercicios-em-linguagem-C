#include <stdio.h>

int main (){
    //declarando as variaveis:
    int x = 0, y = 0, i;
    int multiplos; 
    
    //entradas:
    scanf("%d", &x);
    scanf("%d", &y);

    //processamento e saida:
    for(i=1; i <= x; i++){
        multiplos = i*y;
        printf("%d\n", multiplos);
    }
    
    
    
    
    
    
    return 0;
}
