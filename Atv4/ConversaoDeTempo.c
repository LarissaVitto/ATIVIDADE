#include <stdio.h>

int main() {
    int N = 0, h = 0, min = 0, seg = 0;
    scanf("%d", &N);
    h = N / 3600;
    min = (N % 3600) / 60;
    seg = N % 60;
    printf("%d:%d:%d\n", h, min, seg);
    return 0;
}