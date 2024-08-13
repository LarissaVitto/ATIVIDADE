#include <stdio.h>
 
int main() {
    int h = 0, vm = 0;
    double l = 0;
    scanf("%d %d", &h, &vm);
    l = (h * vm) / 12.0;
    printf("%.3lf\n", l);
    return 0;
}