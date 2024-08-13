#include <stdio.h>
 
int main() {
    double A = 0, B = 0,C = 0, pi = 3.14159, triangulo = 0, circulo = 0, trapezio = 0, quadrado = 0, retangulo = 0;
    scanf("%lf %lf %lf", &A, &B, &C);
    triangulo = (A*C)/2;
    circulo = pi*(C*C);
    trapezio = ((A+B)*C)/2;
    quadrado = B*B;
    retangulo = A*B;
   printf("TRIANGULO: %.3lf\nCIRCULO: %.3lf\nTRAPEZIO: %.3lf\nQUADRADO: %.3lf\nRETANGULO: %.3lf\n", triangulo, circulo, trapezio, quadrado, retangulo);
    return 0;
}