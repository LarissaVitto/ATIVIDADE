#include <stdio.h>

int main() {
    int N, i, j, len, max_len;

    while (scanf("%d", &N) && N != 0) {
        getchar();  
        char linhas[N][51];
        max_len = 0;

        for (i = 0; i < N; i++) {
            len = 0;
            int espaco_encontrado = 0;

            
            while (1) {
                char c = getchar();
                if (c == '\n') break;
                if (c == ' ') {
                    if (!espaco_encontrado && len > 0) {
                        linhas[i][len++] = c;
                        espaco_encontrado = 1;
                    }
                } else {
                    linhas[i][len++] = c;
                    espaco_encontrado = 0;
                }
            }

            
            if (linhas[i][len - 1] == ' ') {
                len--;
            }

            linhas[i][len] = '\0';

            if (len > max_len) {
                max_len = len;
            }
        }

        
        for (i = 0; i < N; i++) {
            len = 0;
            while (linhas[i][len] != '\0') {
                len++;
            }

            int espacos = max_len - len;

            for (j = 0; j < espacos; j++) {
                putchar(' ');
            }

            for (j = 0; j < len; j++) {
                putchar(linhas[i][j]);
            }

            putchar('\n');
        }

        putchar('\n');  
    }

    return 0;
}
