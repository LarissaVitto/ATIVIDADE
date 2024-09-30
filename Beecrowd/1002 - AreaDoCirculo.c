#include <stdio.h>
 
int main() {
    double n = 3.14159, raio = 0, A = 0;
    scanf("%lf\n",&raio);
    A = n * (raio * raio);
    printf("A=%.4lf\n",A);
    return 0;
}