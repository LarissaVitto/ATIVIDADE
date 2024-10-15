#include <stdio.h>
int main(){
    int M = 1, N = 1, SOMA = 0, MENOR, MAIOR;
    while(M > 0 && N > 0){
        scanf("%d %d", &M, &N);
        if(M <= 0 || N <= 0){
            return 0;
        }
        if(M < N){
            MENOR = M;
            MAIOR = N;
        }else{
            MENOR = N;
            MAIOR = M;
        }
        for(int i = MENOR; i <= MAIOR; i++){
            printf("%d ", i);
            SOMA += i;
        }
        printf("Sum=%d\n", SOMA);
        SOMA = 0;
    }
    return 0;
}