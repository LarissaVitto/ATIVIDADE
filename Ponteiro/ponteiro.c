#include <stdio.h>

int main() {
    int * ponteiro;
    int valor = 10;
    ponteiro = &valor;
    printf("Endereco = %x\n", &valor);
    printf("Endereco = %x\n", ponteiro);
    printf("Endereco = %d\n", *ponteiro);
    return 0;
}