#include <stdio.h>

int dobro(int quantidade) {
    return quantidade * 2;
}

int main() {
    int inicial;

    printf("Digite a quantidade inicial: ");
    scanf("%d", &inicial);

    printf("Quantidade inicial: %d\n", inicial);
    printf("Quantidade final: %d\n", dobro(inicial));

    return 0;
}
