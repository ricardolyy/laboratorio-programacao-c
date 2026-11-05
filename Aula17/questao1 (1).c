#include <stdio.h>
#include <string.h>

int main() {
    char nome[50], perfil[20], confirmacao[50], mensagem[100];

    printf("Digite o primeiro nome: ");
    scanf("%49s", nome);
    printf("Digite o perfil (ADMIN ou COMUM): ");
    scanf("%19s", perfil);

    if (strcmp(perfil, "ADMIN") != 0 && strcmp(perfil, "COMUM") != 0) {
        printf("Perfil invalido!\n");
        return 1;
    }

    strcpy(confirmacao, nome);

    strcpy(mensagem, "Bem-vindo, ");
    strcat(mensagem, confirmacao);
    strcat(mensagem, "!");

    printf("\n--- Dados cadastrados ---\n");
    printf("Nome: %s\n", nome);
    printf("Caracteres no nome: %d\n", (int)strlen(nome));
    printf("Perfil: %s\n", perfil);
    if (strcmp(perfil, "ADMIN") == 0) {
        printf("Acesso total ao sistema.\n");
    } else {
        printf("Acesso comum ao sistema.\n");
    }
    printf("%s\n", mensagem);

    return 0;
}
