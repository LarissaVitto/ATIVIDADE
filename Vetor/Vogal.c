#include <stdio.h>

int main() {
    char palavra[50];  
    int i = 0, qtd = 0, contador = 0;
    scanf("%s", palavra);
    while (palavra[i] != '\0')
   {
    i++;
   }
    while (contador < i)
    {
        contador++;
        if(palavra[i] != '\0')
   {
           if(palavra[i] == 'a' || palavra[i] == 'e' || palavra[i] == 'i' || palavra[i] == 'o' || palavra[i] == 'u')
        {
            qtd++;
        }
   }
    }
    
   
   printf("A quantidade de letras eh: %d e de vogais eh: %d", i, qtd);
    return 0;
}