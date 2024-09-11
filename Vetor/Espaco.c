#include <stdio.h>

int main() {
    char leitor[30]; 
    int i = 0;
    
    scanf("%c\n", &leitor[i]);
    while(leitor[i++] != '\n') {
        printf("%c", leitor[i]);
        i++;
    }
    
    return 0;
}
