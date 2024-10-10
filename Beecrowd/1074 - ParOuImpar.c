#include <stdio.h>
int main() {
    int N;
    scanf("%d", &N);
    for(int i = 0; i < N; i++){
        int vet[i];
        scanf("%d", &vet[i]);
        if (vet[i] % 2 == 0)
        {
            printf("EVEN");
            if (vet[i] < 0)
            {
                printf(" NEGATIVE\n");
            }else
            {
                printf(" POSITIVE\n");
            }
        }
        if (vet[i] % 2 != 0)
        {
            printf("ODD");
            if (vet[i] < 0)
            {
                printf(" NEGATIVE\n");
            }else
            {
                printf(" POSITIVE\n");
            }
        }
        if (vet[i] == 0)
        {
            printf("NULL\n");
        }
    }   
    return 0;
}
//ahahahahahha mentira tudo mentira 