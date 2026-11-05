#include <stdio.h>

long calcularFatorial(int n) {
    long resultado = 1;

    for (int i = 2; i <= n; i++) {
        resultado *= i;
    }

    return resultado;
}

int main() {
    int numero;

    printf("Digite um numero entre 0 e 12: ");
    scanf("%d", &numero);

    if (numero < 0 || numero > 12) {
        printf("Numero fora do intervalo!\n");
        return 1;
    }

    printf("Fatorial de %d = %ld\n", numero, calcularFatorial(numero));

    return 0;
}
