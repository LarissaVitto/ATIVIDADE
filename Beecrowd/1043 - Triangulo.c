#include <stdio.h>
 
int main() {
    double A = 0, B = 0, C = 0;  
    scanf("%lf\n%lf\n%lf\n", &A, &B, &C);
    if (A + B > C && A + C > B && B + C > A)
    {
        double Perimetro = A + B + C;
        printf("Perimetro = %.1lf\n", Perimetro);
    }else{
        double Area = ((A + B) * C) / 2;
        printf("Area = %.1lf\n", Area);
    };   
    return 0;
}