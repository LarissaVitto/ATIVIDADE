#include <stdio.h>
double media();
int main() {
 double A = 0, B = 0, C = 0;
 scanf("%lf\n%lf\n%lf",&A,&B,&C);
 printf("MEDIA = %.5lf\n", media(A, B, C));
    return 0;
}
double media(double A, double B, double C){
    double MEDIA = 0.0;
    MEDIA = ((A*2)+(B*3)+(C*5))/10;
    return (MEDIA);
}