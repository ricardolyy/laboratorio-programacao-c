#include <stdio.h>

int main() {
    int numero = 15;
    int *ptr = &numero;

    printf("Valor antes: %d\n", numero);

    *ptr = 50;

    printf("Valor depois: %d\n", numero);

    return 0;
}
