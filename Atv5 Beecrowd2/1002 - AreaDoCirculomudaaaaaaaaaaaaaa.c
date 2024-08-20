#include <stdio.h>
double Area();

int main() {
    double raio = 0.0;
    scanf("%lf\n",&raio);
    Area();
    return 0;
}

double Area(double A){
    double n = 3.14159;
    A = n * (raio * raio);
    printf("A=%.4lf\n",A);
    return A;
}