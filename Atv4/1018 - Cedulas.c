#include <stdio.h>

int main() {
    int vv = 0,v = 0, n100 = 0, n50 = 0, n20 = 0, n10 = 0, n5 = 0, n2 = 0, n1 = 0;
    scanf("%d", &v);
    vv = v;
    n100 = v / 100;
    v = v % 100;
    n50 = v / 50;
    v = v % 50;
    n20 = v / 20;
    v = v % 20;
    n10 = v / 10;
    v = v % 10;
    n5 = v / 5;
    v = v % 5;
    n2 = v / 2;
    v = v % 2;
    n1 = v;
    printf("%d\n%d nota(s) de R$ 100,00\n%d nota(s) de R$ 50,00\n%d nota(s) de R$ 20,00\n%d nota(s) de R$ 10,00\n%d nota(s) de R$ 5,00\n%d nota(s) de R$ 2,00\n%d nota(s) de R$ 1,00\n",vv, n100, n50, n20, n10, n5, n2, n1);
    return 0;
}