#include <stdio.h>

int main() {
    int vetor[30];  
    for(int i = 0; i < 30; i++){
        scanf("%d", &vetor[i]);  
    }
    for(int i = 0; i < 30; i++){
        if (vetor[i] % 2 == 0) {  
            printf("vetor[%d] = %d\n", i, vetor[i]);  
        }
    }
    return 0;
}
