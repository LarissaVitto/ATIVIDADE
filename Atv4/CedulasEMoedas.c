#include <stdio.h>

int main() {
    double valor;
    int v = 0, n100 = 0, n50 = 0, n20 = 0, n10 = 0, n5 = 0, n2 = 0, n1 = 0, m1 = 0, m50 = 0, m25 = 0, m10 = 0, m5 = 0, m1c = 0;
    scanf("%lf", &valor);
    v = (int)(valor * 100 + 0.5);
    n100 = v / 10000;
    v = v % 10000;
    n50 = v / 5000;
    v = v % 5000;
    n20 = v / 2000;
    v = v % 2000;
    n10 = v / 1000;
    v = v % 1000;
    n5 = v / 500;
    v = v % 500;
    n2 = v / 200;
    v = v % 200;
    m1 = v / 100;
    v = v % 100;
    m50 = v / 50;
    v = v % 50;
    m25 = v / 25;
    v = v % 25;
    m10 = v / 10;
    v = v % 10;
    m5 = v / 5;
    v = v % 5;
    m1c = v;
 printf("NOTAS:\n%d nota(s) de R$ 100.00\n%d nota(s) de R$ 50.00\n%d nota(s) de R$ 20.00\n%d nota(s) de R$ 10.00\n%d nota(s) de R$ 5.00\n%d nota(s) de R$ 2.00\nMOEDAS:\n%d moeda(s) de R$ 1.00\n%d moeda(s) de R$ 0.50\n%d moeda(s) de R$ 0.25\n%d moeda(s) de R$ 0.10\n%d moeda(s) de R$ 0.05\n%d moeda(s) de R$ 0.01\n",n100, n50, n20, n10, n5, n2, m1, m50, m25, m10, m5, m1c);
    return 0;
}