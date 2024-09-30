#include <stdio.h>
int Produto();
int main() {
    int A = 0, B = 0;
    scanf("%d\n%d", &A, &B);
    printf("PROD = %d\n", Produto(A, B));
    return 0;
}
int Produto(int a, int b){
    int PROD = a * b;
        return PROD;
}