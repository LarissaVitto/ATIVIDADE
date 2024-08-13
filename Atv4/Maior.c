#include <stdio.h>
 
int main() {
    int A = 0, B = 0, C = 0, maior = 0, maior2 = 0;
    scanf("%d %d %d\n", &A, &B, &C);
    maior = (A+B+abs(A-B))/2;
    maior2= (maior+C+abs(maior-C))/2;
    printf("%d eh o maior\n",maior2);
    return 0;
}