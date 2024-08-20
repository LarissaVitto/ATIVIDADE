#include <stdio.h>
 
int main() {
 
    int p1 = 0, np1 = 0, p2 = 0, np2 = 0;
    double vp1 = 0.0, vp2 = 0.0, pag = 0.0;
    scanf("%d %d %lf\n%d %d %lf",&p1,&np1,&vp1,&p2,&np2,&vp2);
    pag = np1*vp1+np2*vp2;
    printf("VALOR A PAGAR: R$ %.2lf\n",pag);
    return 0;
}