#include <stdio.h>

int main() {
    char nome[5];  
    int i = 0;
    
    scanf("%s", nome);

    while(nome[i] != '\0') {
        printf("%c", nome[i]);
        i++;
    }

    return 0;
}
