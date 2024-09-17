#include<stdio.h>

int main()
{
   double a = 0, b = 0, c = 0, d = 0, e = 0, f = 0;
   int i = 0;
   scanf("%lf\n%lf\n%lf\n%lf\n%lf\n%lf\n", &a, &b, &c, &d, &e, &f);

    if (a > 0)
    {
       i++;
    }

    if (b > 0)
    {
       i++;
    }
    
    if (c > 0)
    {
       i++;
    }
    
    if (d > 0)
    {
       i++;
    }

    if (e > 0)
    {
       i++;
    }

    if (f > 0)
    {
       i++;
    }

    printf("%d valores positivos\n",i);

    return(0);
}