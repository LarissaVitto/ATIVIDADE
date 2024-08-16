#include <stdio.h>
 
int main() {
 
    int num = 0, hr = 0;
    double val = 0.0, salario = 0;
    scanf("%d\n%d\n%lf",&num,&hr,&val);
    salario = hr*val;
    printf("NUMBER = %d\nSALARY = U$ %.2lf\n",num,salario);
    return 0;
}