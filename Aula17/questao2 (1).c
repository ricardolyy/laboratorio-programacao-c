#include <stdio.h>
#include <string.h>

int main() {
    char produto[50], categoria[20], copia[50], descricao[100];

    printf("Digite o nome do produto: ");
    scanf("%49s", produto);
    printf("Digite a categoria (HARDWARE ou PERIFERICO): ");
    scanf("%19s", categoria);

    if (strcmp(categoria, "HARDWARE") != 0 && strcmp(categoria, "PERIFERICO") != 0) {
        printf("Categoria invalida!\n");
        return 1;
    }

    strcpy(copia, produto);

    strcpy(descricao, "Produto: ");
    strcat(descricao, copia);

    printf("\n--- Resumo do cadastro ---\n");
    printf("Nome: %s\n", produto);
    printf("Caracteres no nome: %d\n", (int)strlen(produto));
    printf("Categoria: %s\n", categoria);
    printf("%s\n", descricao);

    return 0;
}
