#include <stdio.h>

void dobrar(int *p) {
    *p = *p * 2;
}

int main() {
    int numero;

    printf("Digite um numero: ");
    scanf("%d", &numero);

    dobrar(&numero);

    printf("Resultado: %d\n", numero);

    return 0;
}
