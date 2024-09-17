#include <stdio.h>
 
int main() {
    int X = 0, i = 1;
    scanf("%d\n", &X);
    while (i <= 6)
    {
       if (X % 2 != 0)
        {
            printf("%d\n", X);
            i++;
        };
        X++; 
    }
    return 0;
}