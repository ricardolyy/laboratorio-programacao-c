#include <stdio.h>

int main() {
    FILE *arq;
    int numero, i;

    arq = fopen("numeros.txt", "w");
    if (arq == NULL) {
        printf("Erro ao abrir o arquivo!\n");
        return 1;
    }

    for (i = 0; i < 5; i++) {
        printf("Digite o numero %d: ", i + 1);
        scanf("%d", &numero);
        fprintf(arq, "%d\n", numero);
    }
    fclose(arq);

    arq = fopen("numeros.txt", "r");
    if (arq == NULL) {
        printf("Erro ao ler o arquivo!\n");
        return 1;
    }

    printf("\nNumeros armazenados:\n");
    while (fscanf(arq, "%d", &numero) == 1) {
        printf("%d\n", numero);
    }
    fclose(arq);

    return 0;
}
