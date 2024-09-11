#include <stdio.h>

void arvore(int altura) {
    int linha, espaco;

    for (linha = 1; linha <= altura; linha += 2) {
        for (espaco = (altura - linha) / 2; espaco > 0; espaco--) {
            printf(" ");
        }
        for (espaco = 0; espaco < linha; espaco++) {
            printf("*");
        }
        printf("\n");
    }

    for (linha = 0; linha < 2; linha++) {
        for (espaco = (altura - 3) / 2; espaco > 0; espaco--) {
            printf(" ");
        }
        printf("***\n");
    }

    for (linha = 0; linha < 1; linha++) {
        for (espaco = (altura - 1) / 2; espaco > 0; espaco--) {
            printf(" ");
        }
        printf("*\n");
    }
}

int main() {
    int altura;

    while (scanf("%d", &altura) != EOF) {
        if (altura > 2 && altura < 100 && altura % 2 == 1) {
            arvore(altura);
        }
        printf("\n");
    }

    return 0;
}

