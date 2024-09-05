#include <stdio.h>

int main() {
    char palavra[50];  
    int i = 0, qtd = 0;
    scanf("%s", palavra);
   if(palavra[i] == 'a' || palavra[i] == 'e' || palavra[i] == 'i' || palavra[i] == 'o' || palavra[i] == 'u')
   {
    qtd++;
   }
   while (palavra[i] != '\0')
   {
    i++;
   }
   printf("A quantidade de letras eh: %d e de vogais eh: %d", i, qtd);
    return 0;
}