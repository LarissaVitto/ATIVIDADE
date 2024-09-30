#include <stdio.h>
double media();
int main() {
 double A = 0, B = 0;
 scanf("%lf\n%lf",&A,&B);
 printf("MEDIA = %.5lf\n", media(A, B));
    return 0;
}
double media(double A, double B){
    double MEDIA = 0.0;
    MEDIA = ((A*3.5)+(B*7.5))/11;
    return (MEDIA);
}