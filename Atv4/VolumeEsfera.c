#include <stdio.h>
int main() {
 
    double R = 0.0,pi = 3.14159, vol = 0.0;
    scanf("%lf",&R);
    vol = (4.0/3.0)*pi*(R*R*R);
    printf("VOLUME = %.3lf\n",vol);
    return 0;
}