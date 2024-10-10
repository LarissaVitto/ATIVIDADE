
#include <stdio.h>

int main() {
    int T = 0, fib = 0;
    scanf("%d", &T);   
    int vet[T]; 
    for(int i = 0; i < T; i++) {
        scanf("%d", &vet[i]);
        if (i >= 2) {
            fib = vet[i - 1] + vet[i - 2];
            printf("Fib[%d] = %d\n", i, fib);
        } else {
            printf("Fib[%d] = %d\n", i, vet[i]);
        }
    }
    return 0;
}
