#include <stdio.h>

/*Fazer um programa em C que testa se caracteres digitados s�o letras, 
se s�o min�sculas ou se mai�sculas. O programa deve interromper sua execu��o 
quando for digitado o caractere zero (0). Para cada caractere digitado, 
se ele n�o for letra imprimir -1, se for letra min�scula imprimir 1 e 
se for mai�scula imprimir 2.*/

int main (){
    //declarando as variaveis:
    char caractere;
    
    //o la�o, que vai continuar
    //ate que a variavel caractere seja diferente 
    //de '48', pois '48' e o decimal que representa 
    //o zero na tabela ascii.
    //iniciando o la�o:
    
       while (caractere != 48){
           
           scanf(" %c", &caractere);
           
            if (caractere >= 97 && caractere <= 122){
                printf("1 ");
            }
            else  if 
                (caractere >= 65 && caractere <= 90){
                    printf("2 ");
                }
                else if 
                (caractere != 48){
                        printf("-1 ");
                    }
            
                }
//usei o 'if' e 'else' por conta das condicoes 
//do exercicio e pq com operador ternario nao deu certo kkkk.
                
        return 0;
    }
        
