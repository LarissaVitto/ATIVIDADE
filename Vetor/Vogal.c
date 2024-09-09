#include <stdio.h>

int main() {
    char palavra[50];  
    int i = 0, qtd = 0;
    scanf("%s", palavra);
    while (palavra[i] != '\0')
   {
    if(palavra[i] == 'a' || palavra[i] == 'A' || palavra[i] == 'e' || palavra[i] == 'E' || palavra[i] == 'i' || palavra[i] == 'I' || palavra[i] == 'o' || palavra[i] == 'O' || palavra[i] == 'u' || palavra[i] == 'U')
        {
            qtd++;
        }
    i++;
   }
   
   printf("A quantidade de letras eh: %d e de vogais eh: %d", i, qtd);
    return 0;
}