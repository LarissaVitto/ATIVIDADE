#include <stdio.h>

int main() {
    int linhas;
    
    while (1) {
        scanf("%d", &linhas);
        if (linhas == 0) break;

        char texto[100][51];
        int maior_tamanho = 0;

        for (int i = 0; i < linhas; i++) {
            int caractere, flag_palavra = 0;
            char aux[51];
            int aux_tamanho = 0;

            getchar();  
            
            while ((caractere = getchar()) != '\n') {
                if (caractere == ' ') {
                    if (flag_palavra) {
                        aux[aux_tamanho++] = ' ';
                        flag_palavra = 0;
                    }
                } else {
                    aux[aux_tamanho++] = caractere;  
                    flag_palavra = 1;
                }
            }

            if (aux_tamanho > 0 && aux[aux_tamanho - 1] == ' ') {
                aux_tamanho--;
            }

            for (int j = 0; j < aux_tamanho; j++) {
                texto[i][j] = aux[j];
            }
            texto[i][aux_tamanho] = '\0'; 

            if (aux_tamanho > maior_tamanho) {
                maior_tamanho = aux_tamanho;
            }
        }

        for (int i = 0; i < linhas; i++) {
            int tam_linha = 0;
            while (texto[i][tam_linha] != '\0') {
                tam_linha++;
            }

            for (int j = 0; j < maior_tamanho - tam_linha; j++) {
                putchar(' ');
            }

            for (int j = 0; j < tam_linha; j++) {
                putchar(texto[i][j]);
            }

            putchar('\n');
        }

        putchar('\n');
    }

    return 0;
}
