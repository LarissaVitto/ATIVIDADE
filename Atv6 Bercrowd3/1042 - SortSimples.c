#include <stdio.h>

int main() {
    int a = 0, b = 0,c = 0;
    int originala, originalb, originalc;

    scanf("%d\n%d\n%d\n", &a, &b, &c);
    
    originala = a;
    originalb = b;
    originalc = c;

    if (a > b) {
        int temp = a;
        a = b;
        b = temp;
    }
    if (a > c) {
        int temp = a;
        a = c;
        c = temp;
    }
    if (b > c) {
        int temp = b;
        b = c;
        c = temp;
    }

    printf("%d\n%d\n%d\n", a, b, c);
    
    printf("\n");
    
    printf("%d\n%d\n%d\n", originala, originalb, originalc);

    return 0;
}