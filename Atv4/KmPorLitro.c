#include <stdio.h>
 
int main() {
    int X = 0;
    double Y = 0.0, total = 0.0;
    scanf("%d\n%lf", &X, &Y);
    total = X/Y;
    printf("%.3lf km/l\n", total);
    return 0;
}