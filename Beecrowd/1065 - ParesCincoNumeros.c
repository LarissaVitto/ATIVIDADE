#include <stdio.h>
 
int main() {
    int a = 0, b = 0, c = 0, d = 0, e = 0, i = 0;
    scanf("%d\n%d\n%d\n%d\n%d\n", &a, &b, &c, &d, &e);
    if (a % 2 == 0)
    {
        i++;
    };
    if (b % 2 == 0)
    {
        i++;
    };
    if (c % 2 == 0)
    {
        i++;
    };
    if (d % 2 == 0)
    {
        i++;
    };
    if (e % 2 == 0)
    {
        i++;
    };
    printf("%d valores pares\n", i);
    return 0;
}