#include <stdio.h>
int main() {
    int tamanho;

    while (scanf("%d", &tamanho) != EOF) {
        if (tamanho % 2 == 0 || tamanho <= 2 || tamanho >= 100) {
            continue;
        }

        int meio = (tamanho / 2);

        for (int i = 0; i <= meio; i++) {
            for (int j = 0; j < meio - i; j++) {
                putchar(' ');
            }
            for (int j = 0; j < 2 * i + 1; j++) {
                putchar('*');
            }
            putchar('\n');
        }
        for (int i = 0; i < meio; i++) {
            putchar(' ');
        }
        printf("*\n");
        
        meio = meio - 1;

        for (int i = 0; i < meio; i++) {
            putchar(' ');
        }
        printf("***\n");
        printf("\n");
    }
    return 0;
}