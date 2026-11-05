#include <stdio.h>

double maiorPreco(double a, double b) {
    if (a > b) {
        return a;
    }
    return b;
}

int main() {
    double preco1, preco2;

    printf("Digite o preco do produto 1: ");
    scanf("%lf", &preco1);
    printf("Digite o preco do produto 2: ");
    scanf("%lf", &preco2);

    if (preco1 == preco2) {
        printf("Os precos sao iguais: R$ %.2f\n", preco1);
    } else {
        printf("O maior preco e: R$ %.2f\n", maiorPreco(preco1, preco2));
    }

    return 0;
}
