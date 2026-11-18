#include <stdio.h>
#include <string.h>

int main() {
    FILE *arq;
    char nome[50];
    int matricula, qtd, i;

    printf("Quantos funcionarios deseja cadastrar (ate 5)? ");
    scanf("%d", &qtd);
    getchar();

    if (qtd < 1 || qtd > 5) {
        printf("Quantidade invalida!\n");
        return 1;
    }

    arq = fopen("funcionarios.txt", "w");
    if (arq == NULL) {
        printf("Erro ao abrir o arquivo!\n");
        return 1;
    }

    for (i = 0; i < qtd; i++) {
        printf("\nFuncionario %d\n", i + 1);
        printf("Nome: ");
        fgets(nome, sizeof(nome), stdin);
        nome[strcspn(nome, "\n")] = '\0';

        printf("Matricula: ");
        scanf("%d", &matricula);
        getchar();

        fprintf(arq, "%s;%d\n", nome, matricula);
    }

    fclose(arq);
    printf("\nDados gravados com sucesso!\n");
    return 0;
}
