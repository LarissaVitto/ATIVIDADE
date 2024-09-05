#include <stdio.h>

int main() {
    char palavra[50];  
    int i = 0, qtd = 0;
    scanf("%s", palavra);
   while (palavra[i] != '\0')
   {
    qtd++;
    i++;
   }
   printf("A quantidade de caracteres eh: %d", qtd);
    return 0;
}