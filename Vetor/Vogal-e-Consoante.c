#include <stdio.h>

int main() {
    char palavra[50];  
    int i = 0, qtd = 0, qtdd = 0;
    scanf("%s", palavra);
    while (palavra[i] != '\0')
   {
    if(palavra[i] != 'a' && palavra[i] != 'A' && palavra[i] != 'e' && palavra[i] != 'E' && palavra[i] != 'i' && palavra[i] != 'I' && palavra[i] != 'o' && palavra[i] != 'O' && palavra[i] != 'u' && palavra[i] && 'U')
        {
            qtd++;
        }
        if(palavra[i] == 'a' || palavra[i] == 'A' || palavra[i] == 'e' || palavra[i] == 'E' || palavra[i] == 'i' || palavra[i] == 'I' || palavra[i] == 'o' || palavra[i] == 'O' || palavra[i] == 'u' || palavra[i] == 'U')
        {
            qtdd++;
        }
    i++;
   }
   
   printf("A quantidade de letras eh: %d de vogais eh: %d e de consoantes eh %d\n", i, qtdd, qtd);
    return 0;
}