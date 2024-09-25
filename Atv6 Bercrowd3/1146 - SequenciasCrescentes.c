#include <stdio.h>

int main() {
    int X = 1;

    while (X != 0) {
        scanf("%d", &X);     

        for (int i = 1; i <= X; i++) {
            if (i > 1) {
                printf(" ");
            }
            printf("%d", i);
        }
        printf("\n");
    }
    return(0);
}   
   

