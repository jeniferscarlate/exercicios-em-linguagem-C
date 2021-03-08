#include <stdio.h>

int main (){
    //declarando as variaveis:
    char caractere = 0;
    
    //entrada:
    scanf("%c", &caractere);
    caractere >= 48 && caractere <= 57? printf("numero"):
    caractere >= 65 && caractere <= 90 || caractere >= 97 && caractere <= 122 ? printf("letra");
  

    return 0;
}
