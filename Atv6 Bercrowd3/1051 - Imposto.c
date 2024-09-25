#include <stdio.h>
 
int main() {
    double valor = 0.0, total = 0.0;
    
    scanf("%lf", &valor);

    if (valor <= 2000.00) {
        printf("Isento\n");
    }
    else if (valor <= 3000.00) {
        total = (valor - 2000.00) * 0.08;
        printf("R$ %.2lf\n", total);
    }
    else if (valor <= 4500.00) {
        total = (1000.00 * 0.08) + (valor - 3000.00) * 0.18;
        printf("R$ %.2lf\n", total);
    }
    else {
        total = (1000.00 * 0.08) + (1500.00 * 0.18) + (valor - 4500.00) * 0.28;
        printf("R$ %.2lf\n", total);
    }
    
    return 0;
}