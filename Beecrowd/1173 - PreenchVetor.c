#include <stdio.h>

int main() {
    int N[10];
    scanf("%d", &N[0]);
    N[1] = N[0] * 2;
    N[2] = N[1] * 2;
    N[3] = N[2] * 2;
    N[4] = N[3] * 2;
    N[5] = N[4] * 2;
    N[6] = N[5] * 2;
    N[7] = N[6] * 2;
    N[8] = N[7] * 2;
    N[9] = N[8] * 2;
    for(int i = 0; i < 10; i++){
        printf("N[%d] = %d\n", i, N[i]);
    }  
    return 0;
}