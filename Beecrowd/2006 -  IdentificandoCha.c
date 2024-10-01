#include <stdio.h>
 
int main() {
 
    int T, A, B, C, D, E, Concorrente = 0;
    scanf("%d", &T);
    scanf("%d %d %d %d %d\n", &A, &B, &C, &D, &E);
    if (T == A)
    {
        Concorrente++;
    }
    if (T == B)
    {
        Concorrente++;
    }
    if (T == C)
    {
        Concorrente++;
    }
    if (T == D)
    {
        Concorrente++;
    }
    if (T == E)
    {
        Concorrente++;
    }
    printf("%d\n", Concorrente);
    
    return 0;
}