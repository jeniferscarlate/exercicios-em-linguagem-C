#include <stdio.h>

//Dados 3 números inteiros, imprima-os em ordem crescente.
//utilizar apenas 3 variáveis, 
//pois o exercício é para treinar o funcionamento do comando if-else.


int main (){
    //declarando variaveis:
    int num1 = 0, num2 = 0, num3 = 0;
    
    //entradas:
    scanf("%d %d %d", &num1, &num2, &num3);
    
    //processamento:
    //num1 <= num2 <= num3
    //num2 <= num1 <= num3
    //num3 <= num2 <= num1

    //num1 <= num3 <= num2
    //num2 <= num3 <= num1
    //num3 <= num1 <= num2
    
    //saida:
    if (num1 <= num2 && num2 <= num3){
        printf("%d %d %d", num1, num2, num3);
    }
    else{
        if (num2 <= num1 && num1 <= num3){
            printf("%d %d %d", num2, num1, num3);
        }
        else{
            if (num3 <= num2 && num2 <= num1){
                printf("%d %d %d", num3, num2, num1);
            }
            else{
                if (num1 <= num3 && num3 <= num2){
                    printf("%d %d %d", num1, num3, num2);
                }
                else{
                    if(num2 <= num3 && num3 <= num1){
                        printf("%d %d %d", num2, num3, num1);
                    }
                    else{
                        if(num3 <= num1 && num1 <= num2){
                            printf("%d %d %d", num3, num1, num2);
                        }
                        
                    }
                
                    
                } 
            }
        }
    
    
    }
    
     
     
    return 0;
}

