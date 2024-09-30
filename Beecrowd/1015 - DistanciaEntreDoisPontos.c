#include <stdio.h>

int main() {
    float x1 = 0.0, y1 = 0.0, x2 = 0.0, y2 = 0.0, resultado = 0.0;
    scanf("%f %f\n%f %f", &x1, &y1, &x2, &y2);
    resultado = sqrt(((x2 - x1) * (x2 - x1)) + ((y2 - y1) * (y2 - y1))); 
    printf("%.4f\n", resultado);
    return 0;
}