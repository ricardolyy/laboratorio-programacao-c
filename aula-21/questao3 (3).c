#include <stdio.h>
#include <string.h>

typedef struct {
    char nome[50];
    float salario;
    int horasExtras;
} Funcionario;

int main() {
    FILE *arq;
    Funcionario f;
    int qtd, i;

    printf("Quantos funcionarios deseja cadastrar agora (ate 5)? ");
    scanf("%d", &qtd);
    getchar();

    if (qtd < 0 || qtd > 5) {
        printf("Quantidade invalida!\n");
        return 1;
    }

    /* "a" = acrescenta sem apagar os registros anteriores */
    arq = fopen("funcionarios.txt", "a");
    if (arq == NULL) {
        printf("Erro ao abrir o arquivo!\n");
        return 1;
    }

    for (i = 0; i < qtd; i++) {
        printf("\nFuncionario %d\n", i + 1);
        printf("Nome: ");
        fgets(f.nome, sizeof(f.nome), stdin);
        f.nome[strcspn(f.nome, "\n")] = '\0';

        printf("Salario: ");
        scanf("%f", &f.salario);

        printf("Horas extras: ");
        scanf("%d", &f.horasExtras);
        getchar();

        fprintf(arq, "%s;%.2f;%d\n", f.nome, f.salario, f.horasExtras);
    }
    fclose(arq);

    arq = fopen("funcionarios.txt", "r");
    if (arq == NULL) {
        printf("Erro ao ler o arquivo!\n");
        return 1;
    }

    printf("\n--- Funcionarios cadastrados ---\n");
    while (fscanf(arq, " %49[^;];%f;%d", f.nome, &f.salario, &f.horasExtras) == 3) {
        printf("Nome: %s | Salario: R$ %.2f | Horas extras: %d\n",
               f.nome, f.salario, f.horasExtras);
    }
    fclose(arq);

    return 0;
}
