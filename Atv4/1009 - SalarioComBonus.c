#include <stdio.h>
 
int main() {
 char nome[20];
 double vendas = 0, salario = 0, total = 0;
    scanf("%s\n%lf\n%lf",nome,&salario,&vendas);
    total = salario+(vendas*0.15);
    printf("TOTAL = R$ %.2lf\n",total);
    return 0;
}