#include <stdio.h>

int main() {
    char nome[5]; 
    char nomeA[30] = "Fulano";
    char nomeB[30] = {'F', 'U', 'L', 'A', 'N', 'O'};
    char nomeC[] = "Fulano"; 
    int i = 0;
    
    scanf("%s\n", nome);
    while(nome[i] != '\0') {
        printf("%c", nome[i]);
        i++;
    }

    printf("\n%s\n", nomeA);
    printf("%s\n", nomeB);
    printf("%s\n", nomeC);

    return 0;
}
