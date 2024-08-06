#include <stdio.h>
 
int main() {
 double A = 0, B = 0, MEDIA = 0.0;
 scanf("%lf\n%lf",&A,&B);
  MEDIA = ((A*3.5)+(B*7.5))/11;
 printf("MEDIA = %.5lf\n", MEDIA);
    return 0;
}